
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vr41xx_clock_t ;




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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;




 int VAR_20 ;
 int FUNC_0 (int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vr41xx_clock_t VAR_23)
{
 FUNC_2(&VAR_20);

 switch (VAR_23) {
 case 129:
  VAR_21 |= VAR_14;
  break;
 case 128:
  VAR_21 |= VAR_18 | VAR_19;
  break;
 case 140:
  VAR_21 |= VAR_4;
  break;
 case 132:
  VAR_21 |= VAR_10;
  break;
 case 134:
  VAR_21 |= VAR_9 | VAR_8;
  break;
 case 137:
  if (FUNC_1() == VAR_2 ||
      FUNC_1() == VAR_3)
   VAR_21 |= VAR_7;
  else
   VAR_21 |= VAR_18 | VAR_7;
  break;
 case 138:
  VAR_21 |= VAR_6 | VAR_16;
  break;
 case 131:
  VAR_21 |= VAR_13;
  break;
 case 133:
  VAR_21 |= VAR_17;
  break;
 case 130:
  VAR_21 |= VAR_15;
  break;
 case 139:
  VAR_22 |= VAR_5;
  break;
 case 136:
  VAR_22 |= VAR_11;
  break;
 case 135:
  VAR_22 |= VAR_12;
  break;
 default:
  break;
 }

 if (VAR_23 == 139 || VAR_23 == 136 ||
     VAR_23 == 135)
  FUNC_0(VAR_1, VAR_22);
 else
  FUNC_0(VAR_0, VAR_21);

 FUNC_3(&VAR_20);
}
