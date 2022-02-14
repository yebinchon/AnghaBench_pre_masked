
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;

unsigned int FUNC_0(u32 VAR_19, int VAR_20)
{
 unsigned int VAR_21 = 0, VAR_22 = VAR_19 & VAR_10;

 if (VAR_22 == VAR_11 || VAR_22 == VAR_12) {
  VAR_21 = VAR_1 | VAR_17;

  if (VAR_22 == VAR_12)
   VAR_21 |= VAR_15 | VAR_2;

  if (VAR_19 & VAR_6)
   VAR_21 |= VAR_14;

  if (VAR_19 & VAR_8)
   VAR_21 |= VAR_3 |
     VAR_13;






  if (!VAR_20 && (VAR_19 & VAR_7) == VAR_18)
   VAR_21 |= VAR_4;

 } else if (VAR_22 == VAR_9)
  VAR_21 = VAR_0 | VAR_16;

 if (VAR_21)
  VAR_21 |= VAR_5;

 return VAR_21;
}
