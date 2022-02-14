
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ni_leakage_coeffients {int t_ref; int bv; int av; int t_intercept; int t_slope; } ;
typedef int s64 ;
typedef int s32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct ni_leakage_coeffients *VAR_0,
           u16 VAR_1, s32 VAR_2, u32 VAR_3, u32 *VAR_4)
{
 s64 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 s64 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 s64 VAR_16;

 VAR_8 = FUNC_0(FUNC_5(VAR_3), 100);
 VAR_9 = FUNC_0(FUNC_5(VAR_1), 1000);
 VAR_10 = FUNC_0(FUNC_5(VAR_2), 1000);

 VAR_11 = FUNC_0(FUNC_5(VAR_0->t_slope), 100000000);
 VAR_12 = FUNC_0(FUNC_5(VAR_0->t_intercept), 100000000);
 VAR_13 = FUNC_0(FUNC_5(VAR_0->av), 100000000);
 VAR_14 = FUNC_0(FUNC_5(VAR_0->bv), 100000000);
 VAR_15 = FUNC_5(VAR_0->t_ref);

 VAR_16 = FUNC_4(VAR_11, VAR_9) + VAR_12;
 VAR_5 = FUNC_3(FUNC_4(VAR_16, VAR_10));
 VAR_5 = FUNC_2(VAR_5, FUNC_3(FUNC_4(VAR_16, VAR_15)));
 VAR_6 = FUNC_4(VAR_13, FUNC_3(FUNC_4(VAR_14, VAR_9)));

 VAR_7 = FUNC_4(FUNC_4(FUNC_4(VAR_8, VAR_5), VAR_6), VAR_9);

 *VAR_4 = FUNC_1(VAR_7 * 1000);
}
