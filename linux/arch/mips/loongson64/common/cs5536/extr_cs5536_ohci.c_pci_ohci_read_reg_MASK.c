
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
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


 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (int ) ;
 int VAR_27 ;
 int FUNC_7 (int ,int*,int*) ;
 int FUNC_8 (int ,int,int) ;

u32 FUNC_9(int VAR_28)
{
 u32 VAR_29 = 0;
 u32 VAR_30, VAR_31;

 switch (VAR_28) {
 case 128:
  VAR_29 =
      FUNC_2(VAR_1, VAR_6);
  break;
 case 134:
  FUNC_7(FUNC_6(VAR_27), &VAR_30, &VAR_31);
  if (VAR_30 & VAR_11)
   VAR_29 |= VAR_11;
  if (VAR_30 & VAR_12)
   VAR_29 |= VAR_12;
  break;
 case 130:
  VAR_29 |= VAR_17;
  VAR_29 |= VAR_19;
  FUNC_7(FUNC_5(VAR_23), &VAR_30, &VAR_31);
  if (VAR_31 & VAR_24)
   VAR_29 |= VAR_20;
  VAR_29 |= VAR_18;
  break;
 case 135:
  FUNC_7(FUNC_6(VAR_26), &VAR_30, &VAR_31);
  VAR_29 = VAR_31 & 0x000000ff;
  VAR_29 |= (VAR_0 << 8);
  break;
 case 138:
  VAR_29 =
      FUNC_0(VAR_15,
         VAR_16);
  break;
 case 139:
  FUNC_7(FUNC_4(VAR_7), &VAR_30, &VAR_31);
  if (VAR_31 & VAR_25) {
   VAR_29 = VAR_2 |
       VAR_8;
   VAR_31 &= ~VAR_25;
   FUNC_8(FUNC_4(VAR_7), VAR_30, VAR_31);
  } else {
   FUNC_7(FUNC_6(VAR_27), &VAR_30, &VAR_31);
   VAR_29 = VAR_31 & 0xffffff00;
   VAR_29 &= ~0x0000000f;
  }
  break;
 case 136:
  VAR_29 = VAR_10;
  break;
 case 129:
  VAR_29 =
      FUNC_2(VAR_3, VAR_4);
  break;
 case 131:
  VAR_29 = VAR_14;
  break;
 case 137:
  VAR_29 = VAR_9;
  break;
 case 133:
  VAR_29 =
      FUNC_1(VAR_13, VAR_5);
  break;
 case 132:
  FUNC_7(FUNC_3(VAR_21), &VAR_30, &VAR_31);
  if (((VAR_31 >> VAR_22) & 0xf) == VAR_5)
   VAR_29 = 1;
  break;
 default:
  break;
 }

 return VAR_29;
}
