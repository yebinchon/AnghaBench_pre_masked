
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {int hhi; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct meson_drm*,unsigned int) ;
 int FUNC_1 (struct meson_drm*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct meson_drm*,unsigned int) ;
 scalar_t__ FUNC_3 (struct meson_drm*,int ) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct meson_drm *VAR_28, unsigned int VAR_29,
      unsigned int VAR_30, unsigned int VAR_31, unsigned int VAR_32,
      unsigned int VAR_33, unsigned int VAR_34,
      unsigned int VAR_35, unsigned int VAR_36,
      bool VAR_37, bool VAR_38)
{
 unsigned int VAR_39 = 0, VAR_40 = 0;


 FUNC_4(VAR_28->hhi, VAR_12,
      VAR_8, 0);
 FUNC_4(VAR_28->hhi, VAR_12,
      VAR_6, 0);
 FUNC_4(VAR_28->hhi, VAR_12,
      VAR_7, VAR_7);


 if (!VAR_30 && !VAR_31 && !VAR_32) {
  FUNC_0(VAR_28, VAR_29);
 } else if (FUNC_3(VAR_28, VAR_25)) {
  switch (VAR_29) {
  case 2970000:
   VAR_39 = 0x3d;
   VAR_40 = VAR_38 ? 0xd02 : 0xe00;
   break;
  case 4320000:
   VAR_39 = VAR_38 ? 0x59 : 0x5a;
   VAR_40 = VAR_38 ? 0xe8f : 0;
   break;
  case 5940000:
   VAR_39 = 0x7b;
   VAR_40 = VAR_38 ? 0xa05 : 0xc00;
   break;
  }

  FUNC_1(VAR_28, VAR_39, VAR_40, VAR_30, VAR_31, VAR_32);
 } else if (FUNC_3(VAR_28, VAR_27) ||
     FUNC_3(VAR_28, VAR_26)) {
  switch (VAR_29) {
  case 2970000:
   VAR_39 = 0x7b;
   VAR_40 = VAR_38 ? 0x281 : 0x300;
   break;
  case 4320000:
   VAR_39 = VAR_38 ? 0xb3 : 0xb4;
   VAR_40 = VAR_38 ? 0x347 : 0;
   break;
  case 5940000:
   VAR_39 = 0xf7;
   VAR_40 = VAR_38 ? 0x102 : 0x200;
   break;
  }

  FUNC_1(VAR_28, VAR_39, VAR_40, VAR_30, VAR_31, VAR_32);
 } else if (FUNC_3(VAR_28, VAR_24)) {
  switch (VAR_29) {
  case 2970000:
   VAR_39 = 0x7b;
   VAR_40 = VAR_38 ? 0x140b4 : 0x18000;
   break;
  case 4320000:
   VAR_39 = VAR_38 ? 0xb3 : 0xb4;
   VAR_40 = VAR_38 ? 0x1a3ee : 0;
   break;
  case 5940000:
   VAR_39 = 0xf7;
   VAR_40 = VAR_38 ? 0x8148 : 0x10000;
   break;
  }

  FUNC_1(VAR_28, VAR_39, VAR_40, VAR_30, VAR_31, VAR_32);
 }


 FUNC_2(VAR_28, VAR_33);


 FUNC_4(VAR_28->hhi, VAR_13,
      VAR_23, 0);
 FUNC_4(VAR_28->hhi, VAR_15,
      VAR_21, VAR_34 - 1);


 switch (VAR_35) {
 case 1:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_17, VAR_17);


  FUNC_4(VAR_28->hhi, VAR_12,
       VAR_10, 0);
  break;
 case 2:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_18, VAR_18);


  FUNC_4(VAR_28->hhi, VAR_12,
   VAR_10, 1 << VAR_11);
  break;
 case 4:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_19, VAR_19);


  FUNC_4(VAR_28->hhi, VAR_12,
   VAR_10, 2 << VAR_11);
  break;
 case 6:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_20, VAR_20);


  FUNC_4(VAR_28->hhi, VAR_12,
   VAR_10, 3 << VAR_11);
  break;
 case 12:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_16, VAR_16);


  FUNC_4(VAR_28->hhi, VAR_12,
   VAR_10, 4 << VAR_11);
  break;
 }
 FUNC_4(VAR_28->hhi, VAR_14,
       VAR_9, VAR_9);


 switch (VAR_36) {
 case 1:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_17, VAR_17);

  if (VAR_37)

   FUNC_4(VAR_28->hhi, VAR_15,
        VAR_1, 0);
  else

   FUNC_4(VAR_28->hhi, VAR_15,
        VAR_4, 0);
  break;
 case 2:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_18, VAR_18);

  if (VAR_37)

   FUNC_4(VAR_28->hhi, VAR_15,
    VAR_1, 1 << VAR_2);
  else

   FUNC_4(VAR_28->hhi, VAR_15,
    VAR_4, 1 << VAR_5);
  break;
 case 4:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_19, VAR_19);

  if (VAR_37)

   FUNC_4(VAR_28->hhi, VAR_15,
    VAR_1, 2 << VAR_2);
  else

   FUNC_4(VAR_28->hhi, VAR_15,
    VAR_4, 2 << VAR_5);
  break;
 case 6:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_20, VAR_20);

  if (VAR_37)

   FUNC_4(VAR_28->hhi, VAR_15,
    VAR_1, 3 << VAR_2);
  else

   FUNC_4(VAR_28->hhi, VAR_15,
    VAR_4, 3 << VAR_5);
  break;
 case 12:

  FUNC_4(VAR_28->hhi, VAR_13,
       VAR_16, VAR_16);

  if (VAR_37)

   FUNC_4(VAR_28->hhi, VAR_15,
    VAR_1, 4 << VAR_2);
  else

   FUNC_4(VAR_28->hhi, VAR_15,
    VAR_4, 4 << VAR_5);
  break;
 }

 if (VAR_37)

  FUNC_4(VAR_28->hhi, VAR_14,
       VAR_0, VAR_0);
 else

  FUNC_4(VAR_28->hhi, VAR_14,
       VAR_3, VAR_3);

 FUNC_4(VAR_28->hhi, VAR_13, VAR_22, VAR_22);
}
