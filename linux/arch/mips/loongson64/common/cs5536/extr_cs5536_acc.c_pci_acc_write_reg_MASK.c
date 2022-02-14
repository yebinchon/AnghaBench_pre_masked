
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (int ,int,int) ;

void FUNC_6(int VAR_12, u32 VAR_13)
{
 u32 VAR_14 = 0, VAR_15 = VAR_13;

 switch (VAR_12) {
 case 129:
  FUNC_4(FUNC_2(VAR_3), &VAR_14, &VAR_15);
  if (VAR_13 & VAR_5)
   VAR_15 |= (0x03 << 8);
  else
   VAR_15 &= ~(0x03 << 8);
  FUNC_5(FUNC_2(VAR_3), VAR_14, VAR_15);
  break;
 case 128:
  if (VAR_13 & VAR_6) {
   FUNC_4(FUNC_3(VAR_9), &VAR_14, &VAR_15);
   if (VAR_15 & VAR_10) {
    VAR_15 = (VAR_15 & 0x0000ffff) | VAR_10;
    FUNC_5(FUNC_3(VAR_9), VAR_14, VAR_15);
   }
  }
  break;
 case 130:
  if (VAR_13 == VAR_4) {
   FUNC_4(FUNC_1(VAR_1), &VAR_14, &VAR_15);
   VAR_15 |= VAR_11;
   FUNC_5(FUNC_1(VAR_1), VAR_14, VAR_15);
  } else if (VAR_13 & 0x01) {
   VAR_13 &= 0xfffffffc;
   VAR_14 = 0xA0000000 | ((VAR_13 & 0x000ff000) >> 12);
   VAR_15 = 0x000fff80 | ((VAR_13 & 0x00000fff) << 20);
   FUNC_5(FUNC_2(VAR_2), VAR_14, VAR_15);
  }
  break;
 case 131:
  FUNC_4(FUNC_0(VAR_7), &VAR_14, &VAR_15);

  VAR_15 &= ~(0xf << VAR_8);
  if (VAR_13)
   VAR_15 |= (VAR_0 << VAR_8);
  FUNC_5(FUNC_0(VAR_7), VAR_14, VAR_15);
  break;
 default:
  break;
 }
}
