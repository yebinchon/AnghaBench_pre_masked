
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ieee754sp {int dummy; } ieee754sp ;
typedef union ieee754dp {int dummy; } ieee754dp ;
typedef int u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 union ieee754dp FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 () ;
 union ieee754dp FUNC_2 (int ) ;
 union ieee754dp FUNC_3 (int ,int) ;
 union ieee754dp FUNC_4 (union ieee754dp) ;
 union ieee754dp FUNC_5 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

union ieee754dp FUNC_6(union ieee754sp VAR_11)
{
 VAR_0;

 VAR_3;

 FUNC_1();

 VAR_4;

 switch (VAR_7) {
 case 129:
  return FUNC_4(FUNC_3(VAR_10, VAR_9));

 case 130:
  return FUNC_3(VAR_10, VAR_9);

 case 132:
  return FUNC_2(VAR_10);

 case 128:
  return FUNC_5(VAR_10);

 case 133:

  while ((VAR_9 >> VAR_5) == 0) {
   VAR_9 <<= 1;
   VAR_8--;
  }
  break;

 case 131:
  break;
 }






 VAR_9 &= ~VAR_6;

 return FUNC_0(VAR_10, VAR_8 + VAR_1,
         (u64) VAR_9 << (VAR_2 - VAR_5));
}
