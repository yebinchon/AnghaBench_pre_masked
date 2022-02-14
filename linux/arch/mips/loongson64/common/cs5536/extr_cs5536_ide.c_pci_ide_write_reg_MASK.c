
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;

 int VAR_11 ;


 int VAR_12 ;






 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (int ,int,int) ;

void FUNC_7(int VAR_18, u32 VAR_19)
{
 u32 VAR_20 = 0, VAR_21 = VAR_19;

 switch (VAR_18) {
 case 134:
  FUNC_5(FUNC_2(VAR_4), &VAR_20, &VAR_21);
  if (VAR_19 & VAR_12)
   VAR_21 |= (0x03 << 4);
  else
   VAR_21 &= ~(0x03 << 4);
  FUNC_6(FUNC_2(VAR_4), VAR_20, VAR_21);
  break;
 case 128:
  if (VAR_19 & VAR_13) {
   FUNC_5(FUNC_4(VAR_15), &VAR_20, &VAR_21);
   if (VAR_21 & VAR_16) {
    VAR_21 = (VAR_21 & 0x0000ffff) | VAR_16;
    FUNC_6(FUNC_4(VAR_15), VAR_20, VAR_21);
   }
  }
  break;
 case 135:
  VAR_19 &= 0x0000ff00;
  FUNC_5(FUNC_4(VAR_14), &VAR_20, &VAR_21);
  VAR_20 &= 0xffffff00;
  VAR_20 |= (VAR_19 >> 8);
  FUNC_6(FUNC_4(VAR_14), VAR_20, VAR_21);
  break;
 case 136:
  if (VAR_19 == VAR_11) {
   FUNC_5(FUNC_1(VAR_2), &VAR_20, &VAR_21);
   VAR_21 |= VAR_17;
   FUNC_6(FUNC_1(VAR_2), VAR_20, VAR_21);
  } else if (VAR_19 & 0x01) {
   FUNC_5(FUNC_3(VAR_10), &VAR_20, &VAR_21);
   VAR_21 = (VAR_19 & 0xfffffff0) | 0x1;
   FUNC_6(FUNC_3(VAR_10), VAR_20, VAR_21);

   VAR_19 &= 0xfffffffc;
   VAR_20 = 0x60000000 | ((VAR_19 & 0x000ff000) >> 12);
   VAR_21 = 0x000ffff0 | ((VAR_19 & 0x00000fff) << 20);
   FUNC_6(FUNC_2(VAR_3), VAR_20, VAR_21);
  }
  break;
 case 132:
  if (VAR_19 == VAR_0) {
   FUNC_5(FUNC_0(VAR_1), &VAR_20, &VAR_21);
   VAR_21 |= 0x01;
   FUNC_6(FUNC_0(VAR_1), VAR_20, VAR_21);
  } else {
   FUNC_5(FUNC_3(VAR_6), &VAR_20, &VAR_21);
   VAR_21 = VAR_19;
   FUNC_6(FUNC_3(VAR_6), VAR_20, VAR_21);
  }
  break;
 case 131:
  FUNC_5(FUNC_3(VAR_7), &VAR_20, &VAR_21);
  VAR_21 = VAR_19;
  FUNC_6(FUNC_3(VAR_7), VAR_20, VAR_21);
  break;
 case 133:
  FUNC_5(FUNC_3(VAR_5), &VAR_20, &VAR_21);
  VAR_21 = VAR_19;
  FUNC_6(FUNC_3(VAR_5), VAR_20, VAR_21);
  break;
 case 130:
  FUNC_5(FUNC_3(VAR_8), &VAR_20, &VAR_21);
  VAR_21 = VAR_19;
  FUNC_6(FUNC_3(VAR_8), VAR_20, VAR_21);
  break;
 case 129:
  FUNC_5(FUNC_3(VAR_9), &VAR_20, &VAR_21);
  VAR_21 = VAR_19;
  FUNC_6(FUNC_3(VAR_9), VAR_20, VAR_21);
  break;
 default:
  break;
 }
}
