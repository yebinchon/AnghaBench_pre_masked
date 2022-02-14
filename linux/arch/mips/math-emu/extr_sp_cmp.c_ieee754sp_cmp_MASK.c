
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ieee754sp {int bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

int FUNC_3(union ieee754sp VAR_15, union ieee754sp VAR_16, int VAR_17, int VAR_18)
{
 int VAR_19;
 int VAR_20;

 VAR_0;
 VAR_1;

 VAR_2;
 VAR_3;
 VAR_4;
 VAR_5;
 FUNC_1();

 if (FUNC_0(VAR_13) || FUNC_0(VAR_14)) {
  if (VAR_18 ||
      VAR_13 == VAR_8 || VAR_14 == VAR_8)
   FUNC_2(VAR_11);
  return (VAR_17 & VAR_10) != 0;
 } else {
  VAR_19 = VAR_15.bits;
  VAR_20 = VAR_16.bits;

  if (VAR_19 < 0)
   VAR_19 = -VAR_19 ^ VAR_12;
  if (VAR_20 < 0)
   VAR_20 = -VAR_20 ^ VAR_12;

  if (VAR_19 < VAR_20)
   return (VAR_17 & VAR_9) != 0;
  else if (VAR_19 == VAR_20)
   return (VAR_17 & VAR_6) != 0;
  else
   return (VAR_17 & VAR_7) != 0;
 }
}
