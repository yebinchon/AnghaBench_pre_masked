
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mga_device {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mga_device *VAR_14, long VAR_15)
{
 unsigned int VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20;
 unsigned int VAR_21, VAR_22, VAR_23;
 unsigned int VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 u8 VAR_32;
 bool VAR_33 = 0;

 VAR_25 = VAR_26 = VAR_24 = 0;

 if (VAR_14->type == VAR_2) {
  VAR_16 = 3000000;
  VAR_17 = 1500000;
  VAR_18 = 25000;

  VAR_19 = 0xffffffff;

  VAR_21 = 0;

  for (VAR_22 = 150; VAR_22 >= 6; VAR_22--) {
   if (VAR_15 * VAR_22 > VAR_16)
    continue;
   if (VAR_15 * VAR_22 < VAR_17)
    continue;
   for (VAR_23 = 120; VAR_23 >= 60; VAR_23--) {
    VAR_27 = (VAR_18 * VAR_23) / VAR_22;
    if (VAR_27 > VAR_15)
     VAR_20 = VAR_27 - VAR_15;
    else
     VAR_20 = VAR_15 - VAR_27;
    if (VAR_20 < VAR_19) {
     VAR_19 = VAR_20;
     VAR_26 = VAR_23;
     VAR_25 = VAR_22;
     VAR_24 = VAR_21;
    }
    if (VAR_19 == 0)
     break;
   }
   if (VAR_19 == 0)
    break;
  }
 } else {

  VAR_16 = 800000;
  VAR_17 = 400000;
  VAR_18 = 33333;

  VAR_19 = 0xffffffff;

  for (VAR_21 = 16; VAR_21 > 0; VAR_21 >>= 1) {
   if (VAR_15 * VAR_21 > VAR_16)
    continue;
   if (VAR_15 * VAR_21 < VAR_17)
    continue;

   for (VAR_22 = 1; VAR_22 < 33; VAR_22++) {
    for (VAR_23 = 17; VAR_23 < 257; VAR_23++) {
     VAR_27 = (VAR_18 * VAR_23) /
      (VAR_22 * VAR_21);
     if (VAR_27 > VAR_15)
      VAR_20 = VAR_27 - VAR_15;
     else
      VAR_20 = VAR_15 - VAR_27;
     if (VAR_20 < VAR_19) {
      VAR_19 = VAR_20;
      VAR_26 = VAR_23 - 1;
      VAR_25 = (VAR_22 - 1);
      VAR_24 = VAR_21 - 1;
     }
     if ((VAR_15 * VAR_21) >= 600000)
      VAR_24 |= 0x80;
    }
   }
  }
 }
 for (VAR_28 = 0; VAR_28 <= 32 && VAR_33 == 0; VAR_28++) {
  FUNC_1(VAR_1, VAR_6);
  VAR_32 = FUNC_0(VAR_0);
  VAR_32 |= VAR_7;
  FUNC_1(VAR_0, VAR_32);

  VAR_32 = FUNC_0(VAR_11);
  VAR_32 |= 0x3 << 2;
  FUNC_1(VAR_12, VAR_32);

  FUNC_1(VAR_1, VAR_6);
  VAR_32 = FUNC_0(VAR_0);
  VAR_32 |= VAR_8;
  FUNC_1(VAR_0, VAR_32);

  FUNC_3(500);

  FUNC_2(VAR_3, VAR_25);
  FUNC_2(VAR_4, VAR_26);
  FUNC_2(VAR_5, VAR_24);

  FUNC_3(500);

  FUNC_1(VAR_1, VAR_6);
  VAR_32 = FUNC_0(VAR_0);
  VAR_32 &= ~VAR_9;
  VAR_32 |= VAR_10;
  FUNC_1(VAR_0, VAR_32);

  FUNC_1(VAR_1, VAR_6);
  VAR_32 = FUNC_0(VAR_0);
  VAR_32 &= ~VAR_7;
  VAR_32 &= ~VAR_8;
  FUNC_1(VAR_0, VAR_32);

  VAR_31 = FUNC_0(VAR_13);

  for (VAR_29 = 0; VAR_29 < 30 && VAR_33 == 0; VAR_29++) {
   VAR_30 = FUNC_0(VAR_13);
   if (VAR_30 < VAR_31)
    VAR_31 = 0;
   if ((VAR_30 - VAR_31) > 2)
    VAR_33 = 1;
   else
    FUNC_3(5);
  }
 }

 return 0;
}
