
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_3 (int) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_4 (unsigned int) ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_5 (unsigned int) ;
 unsigned long FUNC_6 (unsigned int) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_7 (int) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_8 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(u64 VAR_27, unsigned long *VAR_28, unsigned long *VAR_29)
{
 unsigned int VAR_30, VAR_31, VAR_32, VAR_33;
 unsigned long VAR_34, VAR_35;

 VAR_34 = VAR_35 = 0;

 if (!FUNC_13(VAR_27))
  return -1;

 VAR_31 = (VAR_27 >> VAR_20) & VAR_19;
 VAR_30 = (VAR_27 >> VAR_25) & VAR_24;
 VAR_32 = (VAR_27 >> VAR_13) & VAR_12;
 VAR_33 = (VAR_27 >> VAR_15) & VAR_14;

 if (VAR_31) {
  u64 VAR_36;

  if (VAR_31 > 6)
   return -1;


  VAR_36 = VAR_27 & ~VAR_18;

  if (VAR_31 >= 5 && VAR_36 != 0x500fa &&
    VAR_36 != 0x600f4)
   return -1;

  VAR_34 |= FUNC_5(VAR_31);
  VAR_35 |= FUNC_6(VAR_31);
 }

 if (VAR_31 <= 4) {






  VAR_34 |= VAR_7;
  VAR_35 |= VAR_8;
 }

 if (VAR_30 >= 6 && VAR_30 <= 9) {
  if (FUNC_9(VAR_11)) {
   VAR_34 |= VAR_0;
   VAR_35 |= FUNC_0(VAR_27 & 0xff);

   VAR_34 |= VAR_1;
   if (VAR_31 == 4)
    VAR_35 |= VAR_2;
  } else if (VAR_32 & 0x7) {
   return -1;
  }

 } else if (FUNC_9(VAR_11) || (VAR_27 & VAR_17)) {
  VAR_34 |= VAR_6;
  VAR_35 |= FUNC_4(VAR_32);
 }

 if (FUNC_12(VAR_27)) {
  VAR_34 |= VAR_9;
  VAR_35 |= FUNC_7(VAR_27 >> VAR_21);
 }

 if (FUNC_9(VAR_11)) {
  if (FUNC_11(VAR_27) && FUNC_14(VAR_27)) {
   VAR_34 |= VAR_10;
   VAR_35 |= FUNC_8(VAR_27 >> VAR_22);
  }
 } else {




  if (FUNC_10(VAR_27)) {
   VAR_34 |= VAR_4;
   VAR_35 |= FUNC_2(VAR_27 >> VAR_23);
  } else {
   if (!FUNC_14(VAR_27))
    return -1;

   VAR_34 |= VAR_10;
   VAR_35 |= FUNC_8(VAR_27 >> VAR_22);
  }
 }

 if (!VAR_31 && VAR_33)

  return -1;

 if (VAR_27 & VAR_26) {
  if (!VAR_33)

   return -1;

  VAR_34 |= VAR_5;
  VAR_35 |= FUNC_3(VAR_27 >> VAR_16);
 }






 VAR_34 |= FUNC_1(VAR_33);
 VAR_35 |= VAR_3;

 *VAR_28 = VAR_34;
 *VAR_29 = VAR_35;

 return 0;
}
