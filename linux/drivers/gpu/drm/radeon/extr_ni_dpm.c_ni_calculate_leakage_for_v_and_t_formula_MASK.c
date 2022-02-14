
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ni_leakage_coeffients {int bv; int av; int bt; int at; } ;
typedef int s64 ;
typedef int s32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct ni_leakage_coeffients *VAR_0,
           u16 VAR_1, s32 VAR_2,
           u32 VAR_3,
           u32 *VAR_4)
{
 s64 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_0(FUNC_4(VAR_3), 1000);
 VAR_9 = FUNC_0(FUNC_4(VAR_1), 1000);
 VAR_10 = FUNC_0(FUNC_4(VAR_2), 1000);

 VAR_5 = FUNC_3(FUNC_0(FUNC_4(VAR_0->at), 1000),
     FUNC_2(FUNC_3(FUNC_0(FUNC_4(VAR_0->bt), 1000), VAR_10)));
 VAR_6 = FUNC_3(FUNC_0(FUNC_4(VAR_0->av), 1000),
     FUNC_2(FUNC_3(FUNC_0(FUNC_4(VAR_0->bv), 1000), VAR_9)));

 VAR_7 = FUNC_3(FUNC_3(FUNC_3(VAR_8, VAR_5), VAR_6), VAR_9);

 *VAR_4 = FUNC_1(VAR_7 * 1000);
}
