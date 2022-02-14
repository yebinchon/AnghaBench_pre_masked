
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

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
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (int ,int,int) ;

void FUNC_7(int VAR_13, u32 VAR_14)
{
 u32 VAR_15 = 0, VAR_16 = VAR_14;

 switch (VAR_13) {
 case 130:
  FUNC_5(FUNC_4(VAR_12), &VAR_15, &VAR_16);
  if (VAR_14 & VAR_4)
   VAR_15 |= VAR_4;
  else
   VAR_15 &= ~VAR_4;

  if (VAR_14 & VAR_5)
   VAR_15 |= VAR_5;
  else
   VAR_15 &= ~VAR_5;
  FUNC_6(FUNC_4(VAR_12), VAR_15, VAR_16);
  break;
 case 128:
  if (VAR_14 & VAR_6) {
   FUNC_5(FUNC_3(VAR_9), &VAR_15, &VAR_16);
   if (VAR_16 & VAR_10) {
    VAR_16 = (VAR_16 & 0x0000ffff) | VAR_10;
    FUNC_6(FUNC_3(VAR_9), VAR_15, VAR_16);
   }
  }
  break;
 case 131:
  if (VAR_14 == VAR_3) {
   FUNC_5(FUNC_1(VAR_1), &VAR_15, &VAR_16);
   VAR_16 |= VAR_11;
   FUNC_6(FUNC_1(VAR_1), VAR_15, VAR_16);
  } else if ((VAR_14 & 0x01) == 0x00) {
   FUNC_5(FUNC_4(VAR_12), &VAR_15, &VAR_16);
   VAR_16 = VAR_14;
   FUNC_6(FUNC_4(VAR_12), VAR_15, VAR_16);

   VAR_14 &= 0xfffffff0;
   VAR_15 = 0x40000000 | ((VAR_14 & 0xff000000) >> 24);
   VAR_16 = 0x000fffff | ((VAR_14 & 0x00fff000) << 8);
   FUNC_6(FUNC_2(VAR_2), VAR_15, VAR_16);
  }
  break;
 case 129:
  FUNC_5(FUNC_0(VAR_7), &VAR_15, &VAR_16);
  VAR_16 &= ~(0xf << VAR_8);
  if (VAR_14)
   VAR_16 |= (VAR_0 << VAR_8);
  FUNC_6(FUNC_0(VAR_7), VAR_15, VAR_16);
  break;
 default:
  break;
 }
}
