
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
struct eeti_ts {int input; int props; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_6(struct eeti_ts *VAR_7, u8 *VAR_8)
{
 unsigned int VAR_9;
 u16 VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_8[0] & (VAR_3 | VAR_4));

 VAR_10 = FUNC_1(&VAR_8[1]);
 VAR_11 = FUNC_1(&VAR_8[3]);


 VAR_10 >>= VAR_9 - VAR_2;
 VAR_11 >>= VAR_9 - VAR_2;

 if (VAR_8[0] & VAR_5)
  FUNC_2(VAR_7->input, VAR_0, VAR_8[5]);

 FUNC_5(VAR_7->input, &VAR_7->props, VAR_10, VAR_11, 0);
 FUNC_3(VAR_7->input, VAR_1, VAR_8[0] & VAR_6);
 FUNC_4(VAR_7->input);
}
