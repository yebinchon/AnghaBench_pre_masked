
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
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


 int VAR_24 ;
 int FUNC_6 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_7 (int ,int*,int*) ;
 int FUNC_8 (int ,int,int) ;

u32 FUNC_9(int VAR_27)
{
 u32 VAR_28, VAR_29;
 u32 VAR_30 = 0;

 switch (VAR_27) {
 case 128:
  VAR_30 =
      FUNC_3(VAR_2, VAR_7);
  break;
 case 133:
  FUNC_7(FUNC_5(VAR_9), &VAR_28, &VAR_29);
  if (((VAR_29 & 0xfff00000) || (VAR_28 & 0x000000ff))
      && ((VAR_28 & 0xf0000000) == 0xa0000000))
   VAR_30 |= VAR_14;
  FUNC_7(FUNC_5(VAR_10), &VAR_28, &VAR_29);
  if ((VAR_29 & 0x300) == 0x300)
   VAR_30 |= VAR_15;
  break;
 case 130:
  VAR_30 |= VAR_20;
  VAR_30 |= VAR_22;
  FUNC_7(FUNC_6(VAR_24), &VAR_28, &VAR_29);
  if (VAR_29 & VAR_25)
   VAR_30 |= VAR_23;
  VAR_30 |= VAR_21;
  break;
 case 134:
  FUNC_7(FUNC_0(VAR_0), &VAR_28, &VAR_29);
  VAR_30 = VAR_29 & 0x000000ff;
  VAR_30 |= (VAR_1 << 8);
  break;
 case 137:
  VAR_30 =
      FUNC_1(VAR_18,
         VAR_19);
  break;
 case 138:
  FUNC_7(FUNC_4(VAR_8), &VAR_28, &VAR_29);
  if (VAR_29 & VAR_26) {
   VAR_30 = VAR_4 |
       VAR_11;
   VAR_29 &= ~VAR_26;
   FUNC_8(FUNC_4(VAR_8), VAR_28, VAR_29);
  } else {
   FUNC_7(FUNC_5(VAR_9), &VAR_28, &VAR_29);
   VAR_30 = (VAR_28 & 0x000000ff) << 12;
   VAR_30 |= (VAR_29 & 0xfff00000) >> 20;
   VAR_30 |= 0x01;
   VAR_30 &= ~0x02;
  }
  break;
 case 135:
  VAR_30 = VAR_13;
  break;
 case 129:
  VAR_30 =
      FUNC_3(VAR_5, VAR_6);
  break;
 case 131:
  VAR_30 = VAR_17;
  break;
 case 136:
  VAR_30 = VAR_12;
  break;
 case 132:
  VAR_30 =
      FUNC_2(VAR_16, VAR_3);
  break;
 default:
  break;
 }

 return VAR_30;
}
