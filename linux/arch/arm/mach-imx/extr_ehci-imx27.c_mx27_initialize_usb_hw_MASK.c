
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
 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ VAR_16 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

int FUNC_3(int VAR_17, unsigned int VAR_18)
{
 unsigned int VAR_19;

 VAR_19 = FUNC_1(FUNC_0(VAR_12 + VAR_16));

 switch (VAR_17) {
 case 0:
  VAR_19 &= ~(VAR_10 | VAR_9);
  VAR_19 |= (VAR_18 & VAR_13) << VAR_11;

  if (!(VAR_18 & VAR_14))
   VAR_19 |= VAR_9;
  break;
 case 1:
  VAR_19 &= ~(VAR_3 | VAR_2 | VAR_1);
  VAR_19 |= (VAR_18 & VAR_13) << VAR_4;

  if (!(VAR_18 & VAR_14))
   VAR_19 |= VAR_2;

  if (!(VAR_18 & VAR_15))
   VAR_19 |= VAR_1;

  break;
 case 2:
  VAR_19 &= ~(VAR_7 | VAR_6 | VAR_5);
  VAR_19 |= (VAR_18 & VAR_13) << VAR_8;

  if (!(VAR_18 & VAR_14))
   VAR_19 |= VAR_6;

  if (!(VAR_18 & VAR_15))
   VAR_19 |= VAR_5;

  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_19, FUNC_0(VAR_12 + VAR_16));

 return 0;
}
