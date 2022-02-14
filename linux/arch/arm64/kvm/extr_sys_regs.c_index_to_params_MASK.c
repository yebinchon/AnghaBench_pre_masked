
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int Op0; int Op1; int CRn; int CRm; int Op2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


__attribute__((used)) static bool FUNC_0(u64 VAR_13, struct sys_reg_params *VAR_14)
{
 switch (VAR_13 & VAR_12) {
 case 128:

  if (VAR_13 & ~(VAR_0 | VAR_12
         | VAR_11
         | VAR_5
         | VAR_7
         | VAR_3
         | VAR_1
         | VAR_9))
   return 0;
  VAR_14->Op0 = ((VAR_13 & VAR_5)
          >> VAR_6);
  VAR_14->Op1 = ((VAR_13 & VAR_7)
          >> VAR_8);
  VAR_14->CRn = ((VAR_13 & VAR_3)
          >> VAR_4);
  VAR_14->CRm = ((VAR_13 & VAR_1)
          >> VAR_2);
  VAR_14->Op2 = ((VAR_13 & VAR_9)
          >> VAR_10);
  return 1;
 default:
  return 0;
 }
}
