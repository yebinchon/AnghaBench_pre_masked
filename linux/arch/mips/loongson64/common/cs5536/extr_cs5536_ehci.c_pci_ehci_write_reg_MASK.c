
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (int ,int,int) ;

void FUNC_6(int VAR_10, u32 VAR_11)
{
 u32 VAR_12 = 0, VAR_13 = VAR_11;

 switch (VAR_10) {
 case 131:
  FUNC_4(FUNC_3(VAR_9), &VAR_12, &VAR_13);
  if (VAR_11 & VAR_3)
   VAR_12 |= VAR_3;
  else
   VAR_12 &= ~VAR_3;

  if (VAR_11 & VAR_4)
   VAR_12 |= VAR_4;
  else
   VAR_12 &= ~VAR_4;
  FUNC_5(FUNC_3(VAR_9), VAR_12, VAR_13);
  break;
 case 128:
  if (VAR_11 & VAR_5) {
   FUNC_4(FUNC_2(VAR_6), &VAR_12, &VAR_13);
   if (VAR_13 & VAR_7) {
    VAR_13 = (VAR_13 & 0x0000ffff) | VAR_7;
    FUNC_5(FUNC_2(VAR_6), VAR_12, VAR_13);
   }
  }
  break;
 case 132:
  if (VAR_11 == VAR_2) {
   FUNC_4(FUNC_0(VAR_0), &VAR_12, &VAR_13);
   VAR_13 |= VAR_8;
   FUNC_5(FUNC_0(VAR_0), VAR_12, VAR_13);
  } else if ((VAR_11 & 0x01) == 0x00) {
   FUNC_4(FUNC_3(VAR_9), &VAR_12, &VAR_13);
   VAR_13 = VAR_11;
   FUNC_5(FUNC_3(VAR_9), VAR_12, VAR_13);

   VAR_11 &= 0xfffffff0;
   VAR_12 = 0x40000000 | ((VAR_11 & 0xff000000) >> 24);
   VAR_13 = 0x000fffff | ((VAR_11 & 0x00fff000) << 8);
   FUNC_5(FUNC_1(VAR_1), VAR_12, VAR_13);
  }
  break;
 case 129:
  FUNC_4(FUNC_3(VAR_9), &VAR_12, &VAR_13);
  VAR_12 &= 0x003f0000;
  VAR_12 |= (VAR_11 & 0x3f) << 16;
  FUNC_5(FUNC_3(VAR_9), VAR_12, VAR_13);
  break;
 case 130:
  FUNC_4(FUNC_3(VAR_9), &VAR_12, &VAR_13);
  VAR_12 &= ~0x00003f00;
  VAR_12 |= VAR_11 & 0x00003f00;
  FUNC_5(FUNC_3(VAR_9), VAR_12, VAR_13);
  break;
 default:
  break;
 }
}
