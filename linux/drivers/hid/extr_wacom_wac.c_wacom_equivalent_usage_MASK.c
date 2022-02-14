
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

int FUNC_0(int VAR_19)
{
 if ((VAR_19 & VAR_2) == VAR_7) {
  int VAR_20 = (VAR_19 & 0xFF00) << 8;
  int VAR_21 = (VAR_19 & 0xFF);

  if (VAR_20 == VAR_6 ||
      VAR_20 == VAR_3 ||
      VAR_20 == VAR_4 ||
      VAR_20 == VAR_5 ||
      VAR_19 == VAR_11 ||
      VAR_19 == VAR_12 ||
      VAR_19 == VAR_13 ||
      VAR_19 == VAR_9 ||
      VAR_19 == VAR_16 ||
      VAR_19 == VAR_17 ||
      VAR_19 == VAR_14 ||
      VAR_19 == VAR_15 ||
      VAR_19 == VAR_10) {
   return VAR_19;
  }

  if (VAR_20 == VAR_1)
   VAR_20 = VAR_0;

  return VAR_20 | VAR_21;
 }

 if ((VAR_19 & VAR_2) == VAR_8) {
  int VAR_22 = (VAR_19 & 0xFF00) << 8;
  int VAR_23 = (VAR_19 & 0xFF);

  if (VAR_19 == VAR_18)
   return VAR_19;

  if (VAR_22 == VAR_1)
   VAR_22 = VAR_4;

  return VAR_22 | VAR_23;
 }

 return VAR_19;
}
