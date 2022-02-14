
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 scalar_t__ VAR_24 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

int FUNC_3(int VAR_25, unsigned int VAR_26)
{
 unsigned int VAR_27;

 VAR_27 = FUNC_1(FUNC_0(VAR_15 + VAR_24));

 switch (VAR_25) {
 case 0:
  VAR_27 &= ~(VAR_13 | VAR_11 | VAR_12 |
   VAR_10);
  VAR_27 |= (VAR_26 & VAR_16) << VAR_14;

  if (!(VAR_26 & VAR_21))
   VAR_27 |= VAR_11;

  if (VAR_26 & VAR_22)
   VAR_27 |= VAR_12;

  if (!(VAR_26 & VAR_20))
   VAR_27 |= VAR_10;

  break;
 case 1:
  VAR_27 &= ~(VAR_6 | VAR_4 | VAR_5 |
   VAR_3 | VAR_8 | VAR_9 |
   VAR_1 | VAR_2);
  VAR_27 |= (VAR_26 & VAR_16) << VAR_7;

  if (!(VAR_26 & VAR_21))
   VAR_27 |= VAR_4;

  if (VAR_26 & VAR_22)
   VAR_27 |= VAR_5;

  if (!(VAR_26 & VAR_20))
   VAR_27 |= VAR_3;

  if (!(VAR_26 & VAR_23))
   VAR_27 |= VAR_8;

  if (VAR_26 & VAR_17)
   VAR_27 |= VAR_9;

  if (VAR_26 & VAR_18)
   VAR_27 |= VAR_1;

  if (VAR_26 & VAR_19)
   VAR_27 |= VAR_2;

  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_27, FUNC_0(VAR_15 + VAR_24));

 return 0;
}
