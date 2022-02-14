
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct coproc_params {int is_64bit; int CRn; int CRm; int Op1; int Op2; } ;


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



__attribute__((used)) static bool FUNC_0(u64 VAR_11, struct coproc_params *VAR_12)
{
 switch (VAR_11 & VAR_10) {
 case 129:

  if (VAR_11 & ~(VAR_0 | VAR_10
      | VAR_5
      | VAR_1
      | VAR_6
      | VAR_8
      | VAR_3))
   return 0;

  VAR_12->is_64bit = 0;
  VAR_12->CRn = ((VAR_11 & VAR_1)
          >> VAR_2);
  VAR_12->CRm = ((VAR_11 & VAR_6)
          >> VAR_7);
  VAR_12->Op1 = ((VAR_11 & VAR_8)
          >> VAR_9);
  VAR_12->Op2 = ((VAR_11 & VAR_3)
          >> VAR_4);
  return 1;
 case 128:

  if (VAR_11 & ~(VAR_0 | VAR_10
         | VAR_5
         | VAR_6
         | VAR_8))
   return 0;
  VAR_12->is_64bit = 1;

  VAR_12->CRn = ((VAR_11 & VAR_6)
          >> VAR_7);
  VAR_12->Op1 = ((VAR_11 & VAR_8)
          >> VAR_9);
  VAR_12->Op2 = 0;
  VAR_12->CRm = 0;
  return 1;
 default:
  return 0;
 }
}
