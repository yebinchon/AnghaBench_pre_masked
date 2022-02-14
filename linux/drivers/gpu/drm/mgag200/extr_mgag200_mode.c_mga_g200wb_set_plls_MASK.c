
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mga_device *VAR_23, long VAR_24)
{
 unsigned int VAR_25, VAR_26, VAR_27;
 unsigned int VAR_28, VAR_29;
 unsigned int VAR_30, VAR_31, VAR_32, VAR_33;
 unsigned int VAR_34, VAR_35, VAR_36;
 unsigned int VAR_37;
 int VAR_38, VAR_39, VAR_40, VAR_41;
 bool VAR_42 = 0;
 u8 VAR_43;

 VAR_35 = VAR_36 = VAR_34 = 0;

 VAR_28 = 0xffffffff;

 if (VAR_23->type == VAR_2) {

  VAR_25 = 800000;
  VAR_26 = 400000;
  VAR_27 = 25000;

  for (VAR_30 = 1; VAR_30 < 8; VAR_30++) {
   for (VAR_33 = 1; VAR_33 < 8; VAR_33++) {
    if (VAR_30 < VAR_33)
     continue;
    if ((VAR_24 * VAR_30 * VAR_33) > VAR_25)
     continue;
    if ((VAR_24 * VAR_30 * VAR_33) < VAR_26)
     continue;
    for (VAR_31 = 1; VAR_31 < 26; VAR_31++) {
     for (VAR_32 = 32; VAR_32 < 2048 ; VAR_32++) {
      VAR_37 = (VAR_27 * VAR_32) /
       (VAR_31 * VAR_30 * VAR_33);
      if (VAR_37 > VAR_24)
       VAR_29 = VAR_37 - VAR_24;
      else
       VAR_29 = VAR_24 - VAR_37;
      if (VAR_29 < VAR_28) {
       VAR_28 = VAR_29;
       VAR_35 = ((VAR_32 & 0x100) >> 1) |
        (VAR_31);
       VAR_36 = (VAR_32 & 0xFF);
       VAR_34 = ((VAR_32 & 0x600) >> 3) |
        (VAR_33 << 3) |
        (VAR_30);
      }
     }
    }
   }
  }
 } else {

  VAR_25 = 550000;
  VAR_26 = 150000;
  VAR_27 = 48000;

  for (VAR_30 = 1; VAR_30 < 9; VAR_30++) {
   if (VAR_24 * VAR_30 > VAR_25)
    continue;
   if (VAR_24 * VAR_30 < VAR_26)
    continue;

   for (VAR_31 = 1; VAR_31 < 17; VAR_31++) {
    for (VAR_32 = 1; VAR_32 < 151; VAR_32++) {
     VAR_37 = (VAR_27 * VAR_32) /
      (VAR_31 * VAR_30);
     if (VAR_37 > VAR_24)
      VAR_29 = VAR_37 - VAR_24;
     else
      VAR_29 = VAR_24 - VAR_37;
     if (VAR_29 < VAR_28) {
      VAR_28 = VAR_29;
      VAR_36 = VAR_32 - 1;
      VAR_35 = (VAR_31 - 1) |
       ((VAR_36 >> 1) & 0x80);
      VAR_34 = VAR_30 - 1;
     }
    }
   }
  }
 }

 for (VAR_38 = 0; VAR_38 <= 32 && VAR_42 == 0; VAR_38++) {
  if (VAR_38 > 0) {
   FUNC_1(VAR_17, 0x1e);
   VAR_43 = FUNC_0(VAR_16);
   if (VAR_43 < 0xff)
    FUNC_1(VAR_16, VAR_43+1);
  }


  FUNC_1(VAR_1, VAR_3);
  VAR_43 = FUNC_0(VAR_0);
  VAR_43 |= VAR_4;
  FUNC_1(VAR_0, VAR_43);

  FUNC_1(VAR_1, VAR_8);
  VAR_43 = FUNC_0(VAR_0);
  VAR_43 |= VAR_9;
  FUNC_1(VAR_0, VAR_43);


  VAR_43 = FUNC_0(VAR_18);
  VAR_43 |= 0x3 << 2;
  FUNC_1(VAR_19, VAR_43);

  FUNC_1(VAR_1, VAR_3);
  VAR_43 = FUNC_0(VAR_0);
  VAR_43 |= VAR_5 | 0x80;
  FUNC_1(VAR_0, VAR_43);

  FUNC_3(500);


  FUNC_1(VAR_1, VAR_12);
  VAR_43 = FUNC_0(VAR_0);
  VAR_43 &= ~0x04;
  FUNC_1(VAR_0, VAR_43);

  FUNC_3(50);


  FUNC_2(VAR_14, VAR_36);
  FUNC_2(VAR_13, VAR_35);
  FUNC_2(VAR_15, VAR_34);

  FUNC_3(50);


  FUNC_1(VAR_1, VAR_12);
  VAR_43 = FUNC_0(VAR_0);
  VAR_43 |= 0x04;
  FUNC_2(VAR_12, VAR_43);

  FUNC_3(500);


  FUNC_1(VAR_1, VAR_3);
  VAR_43 = FUNC_0(VAR_0);
  VAR_43 &= ~VAR_6;
  VAR_43 |= VAR_7;
  FUNC_1(VAR_0, VAR_43);

  FUNC_1(VAR_1, VAR_8);
  VAR_43 = FUNC_0(VAR_0);
  VAR_43 &= ~VAR_10;
  VAR_43 |= VAR_11;
  FUNC_1(VAR_0, VAR_43);


  FUNC_1(VAR_21, 1);
  VAR_43 = FUNC_0(VAR_20);
  VAR_43 &= ~0x8;
  FUNC_1(VAR_20, VAR_43);

  FUNC_1(VAR_1, VAR_3);
  VAR_43 = FUNC_0(VAR_0);
  VAR_43 &= ~VAR_4;
  FUNC_1(VAR_0, VAR_43);

  VAR_41 = FUNC_0(VAR_22);

  for (VAR_39 = 0; VAR_39 < 30 && VAR_42 == 0; VAR_39++) {
   VAR_40 = FUNC_0(VAR_22);
   if (VAR_40 < VAR_41)
    VAR_41 = 0;
   if ((VAR_40 - VAR_41) > 2)
    VAR_42 = 1;
   else
    FUNC_3(5);
  }
 }
 FUNC_1(VAR_1, VAR_8);
 VAR_43 = FUNC_0(VAR_0);
 VAR_43 &= ~VAR_9;
 FUNC_2(VAR_8, VAR_43);
 return 0;
}
