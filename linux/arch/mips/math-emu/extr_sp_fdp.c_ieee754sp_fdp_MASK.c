
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ieee754sp {int dummy; } ieee754sp ;
typedef union ieee754dp {int dummy; } ieee754dp ;
typedef int u32 ;
struct TYPE_2__ {int rm; int nan2008; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_11 ;
 int FUNC_2 (int ) ;
 union ieee754dp FUNC_3 (union ieee754dp) ;
 union ieee754sp FUNC_4 (int ,int ,int) ;
 union ieee754sp FUNC_5 () ;
 union ieee754sp FUNC_6 (int ) ;
 union ieee754sp FUNC_7 (int ) ;
 union ieee754sp FUNC_8 (int ,int) ;
 union ieee754sp FUNC_9 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

union ieee754sp FUNC_10(union ieee754dp VAR_17)
{
 union ieee754sp VAR_18;
 u32 VAR_19;

 VAR_0;
 VAR_1;

 VAR_3;

 FUNC_1();

 VAR_5;

 switch (VAR_12) {
 case 129:
  VAR_17 = FUNC_3(VAR_17);
  VAR_3;


 case 130:
  VAR_18 = FUNC_8(VAR_15, VAR_14);
  if (!VAR_11.nan2008) {
   VAR_4;
   if (!FUNC_0(VAR_16))
    VAR_18 = FUNC_5();
  }
  return VAR_18;

 case 132:
  return FUNC_6(VAR_15);

 case 128:
  return FUNC_9(VAR_15);

 case 133:

  FUNC_2(VAR_9);
  FUNC_2(VAR_8);
  if ((VAR_11.rm == VAR_7 && !VAR_15) ||
    (VAR_11.rm == VAR_6 && VAR_15))
   return FUNC_7(VAR_15);
  return FUNC_9(VAR_15);

 case 131:
  break;
 }




 VAR_19 = (VAR_14 >> (VAR_2 - (VAR_10 + 3))) |
      ((VAR_14 << (64 - (VAR_2 - (VAR_10 + 3)))) != 0);

 return FUNC_4(VAR_15, VAR_13, VAR_19);
}
