
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;

 int VAR_16 ;


 int VAR_17 ;

 int VAR_18 ;


 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;






 int VAR_23 ;


 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;


 int VAR_28 ;
 int VAR_29 ;
 int FUNC_6 (int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_7 (int ,int*,int*) ;
 int FUNC_8 (int ,int,int) ;

u32 FUNC_9(int VAR_32)
{
 u32 VAR_33 = 0;
 u32 VAR_34, VAR_35;

 switch (VAR_32) {
 case 128:
  VAR_33 =
      FUNC_2(VAR_1, VAR_6);
  break;
 case 138:
  FUNC_7(FUNC_5(VAR_15), &VAR_34, &VAR_35);
  if (VAR_35 & 0xfffffff0)
   VAR_33 |= VAR_19;
  FUNC_7(FUNC_4(VAR_8), &VAR_34, &VAR_35);
  if ((VAR_35 & 0x30) == 0x30)
   VAR_33 |= VAR_20;
  break;
 case 130:
  VAR_33 |= VAR_24;
  VAR_33 |= VAR_26;
  FUNC_7(FUNC_6(VAR_29), &VAR_34, &VAR_35);
  if (VAR_35 & VAR_30)
   VAR_33 |= VAR_27;
  VAR_33 |= VAR_25;
  break;
 case 139:
  FUNC_7(FUNC_5(VAR_9), &VAR_34, &VAR_35);
  VAR_33 = VAR_35 & 0x000000ff;
  VAR_33 |= (VAR_0 << 8);
  break;
 case 142:
  FUNC_7(FUNC_6(VAR_28), &VAR_34, &VAR_35);
  VAR_34 &= 0x000000f8;
  VAR_33 = FUNC_0(VAR_23, VAR_34);
  break;
 case 143:
  FUNC_7(FUNC_3(VAR_7), &VAR_34, &VAR_35);
  if (VAR_35 & VAR_31) {
   VAR_33 = VAR_3 |
       VAR_16;
   VAR_35 &= ~VAR_31;
   FUNC_8(FUNC_3(VAR_7), VAR_34, VAR_35);
  } else {
   FUNC_7(FUNC_5(VAR_15), &VAR_34, &VAR_35);
   VAR_33 = VAR_35 & 0xfffffff0;
   VAR_33 |= 0x01;
   VAR_33 &= ~0x02;
  }
  break;
 case 140:
  VAR_33 = VAR_18;
  break;
 case 129:
  VAR_33 =
      FUNC_2(VAR_4, VAR_5);
  break;
 case 131:
  VAR_33 = VAR_22;
  break;
 case 141:
  VAR_33 = VAR_17;
  break;
 case 132:
  VAR_33 =
      FUNC_1(VAR_21, VAR_2);
  break;
 case 136:
  FUNC_7(FUNC_5(VAR_11), &VAR_34, &VAR_35);
  VAR_33 = VAR_35;
  break;
 case 135:
  FUNC_7(FUNC_5(VAR_12), &VAR_34, &VAR_35);
  VAR_33 = VAR_35;
  break;
 case 137:
  FUNC_7(FUNC_5(VAR_10), &VAR_34, &VAR_35);
  VAR_33 = VAR_35;
  break;
 case 134:
  FUNC_7(FUNC_5(VAR_13), &VAR_34, &VAR_35);
  VAR_33 = VAR_35;
  break;
 case 133:
  FUNC_7(FUNC_5(VAR_14), &VAR_34, &VAR_35);
  VAR_33 = VAR_35;
  break;
 default:
  break;
 }

 return VAR_33;
}
