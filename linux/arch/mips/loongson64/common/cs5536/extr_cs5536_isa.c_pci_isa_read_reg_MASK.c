
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
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
 int FUNC_5 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (int ,int*,int*) ;
 int FUNC_7 (int) ;

u32 FUNC_8(int VAR_25)
{
 u32 VAR_26 = 0;
 u32 VAR_27, VAR_28;

 switch (VAR_25) {
 case 128:
  VAR_26 =
      FUNC_2(VAR_1, VAR_4);
  break;
 case 133:


  FUNC_6(FUNC_3(VAR_5), &VAR_27, &VAR_28);
  if (VAR_27 & 0x01)
   VAR_26 |= VAR_10;
  break;
 case 130:
  VAR_26 |= VAR_12;
  VAR_26 |= VAR_14;
  VAR_26 |= VAR_15;

  FUNC_6(FUNC_5(VAR_20), &VAR_27, &VAR_28);
  if (VAR_28 & VAR_24)
   VAR_26 |= VAR_18;
  if (VAR_28 & VAR_23)
   VAR_26 |= VAR_17;
  if (VAR_28 & VAR_21)
   VAR_26 |= VAR_16;
  if (VAR_28 & VAR_22)
   VAR_26 |= VAR_13;
  break;
 case 134:
  FUNC_6(FUNC_4(VAR_6), &VAR_27, &VAR_28);
  VAR_26 = VAR_28 & 0x000000ff;
  VAR_26 |= (VAR_0 << 8);
  break;
 case 137:
  FUNC_6(FUNC_5(VAR_19), &VAR_27, &VAR_28);
  VAR_27 &= 0x000000f8;
  VAR_26 = FUNC_0(VAR_7, VAR_27);
  break;




 case 143:
  return FUNC_7(0);
  break;
 case 142:
  return FUNC_7(1);
  break;
 case 141:
  return FUNC_7(2);
  break;
 case 140:
  break;
 case 139:
  return FUNC_7(4);
  break;
 case 138:
  return FUNC_7(5);
  break;
 case 135:
  VAR_26 = VAR_9;
  break;
 case 129:
  VAR_26 =
      FUNC_2(VAR_2, VAR_3);
  break;
 case 131:
  VAR_26 = VAR_11;
  break;
 case 136:
  VAR_26 = VAR_8;
  break;
 case 132:

  VAR_26 = FUNC_1(0x00, 0x00);
  break;
 default:
  break;
 }

 return VAR_26;
}
