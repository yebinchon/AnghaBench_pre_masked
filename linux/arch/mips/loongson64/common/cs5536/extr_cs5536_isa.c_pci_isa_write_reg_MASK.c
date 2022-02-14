
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;

void FUNC_7(int VAR_18, u32 VAR_19)
{
 u32 VAR_20 = 0, VAR_21 = VAR_19;
 u32 VAR_22;

 switch (VAR_18) {
 case 132:
  if (VAR_19 & VAR_2)
   FUNC_5();
  else
   FUNC_4();
  break;
 case 130:
  FUNC_2(FUNC_1(VAR_9), &VAR_20, &VAR_21);
  VAR_22 = VAR_21 & 0x0000ffff;
  if ((VAR_19 & VAR_6) &&
      (VAR_21 & VAR_16))
   VAR_22 |= VAR_17;

  if ((VAR_19 & VAR_5) &&
      (VAR_21 & VAR_14))
   VAR_22 |= VAR_15;

  if ((VAR_19 & VAR_4)
      && (VAR_21 & VAR_10))
   VAR_22 |= VAR_11;

  if ((VAR_19 & VAR_3)
      && (VAR_21 & VAR_12))
   VAR_22 |= VAR_13;

  VAR_21 = VAR_22;
  FUNC_3(FUNC_1(VAR_9), VAR_20, VAR_21);
  break;
 case 133:
  VAR_19 &= 0x0000ff00;
  FUNC_2(FUNC_1(VAR_8), &VAR_20, &VAR_21);
  VAR_20 &= 0xffffff00;
  VAR_20 |= (VAR_19 >> 8);
  FUNC_3(FUNC_1(VAR_8), VAR_20, VAR_21);
  break;
 case 139:
  FUNC_6(0, VAR_19);
  break;
 case 138:
  FUNC_6(1, VAR_19);
  break;
 case 137:
  FUNC_6(2, VAR_19);
  break;
 case 136:
  FUNC_6(3, VAR_19);
  break;
 case 135:
  FUNC_6(4, VAR_19);
  break;
 case 134:
  FUNC_6(5, VAR_19);
  break;
 case 129:
  FUNC_2(FUNC_0(VAR_7), &VAR_20, &VAR_21);

  VAR_21 &= ~(0xf << 24);
  if (VAR_19)
   VAR_21 |= (VAR_0 << 24);
  FUNC_3(FUNC_0(VAR_7), VAR_20, VAR_21);
  break;
 case 128:
  FUNC_2(FUNC_0(VAR_7), &VAR_20, &VAR_21);

  VAR_21 &= ~(0xf << 28);
  if (VAR_19)
   VAR_21 |= (VAR_1 << 28);
  FUNC_3(FUNC_0(VAR_7), VAR_20, VAR_21);
  break;
 case 131:
  if (VAR_19) {

   FUNC_2(FUNC_1(VAR_9), &VAR_20, &VAR_21);
   VAR_21 |= 0x00000063;
   FUNC_3(FUNC_1(VAR_9), VAR_20, VAR_21);
  }

 default:

  break;
 }
}
