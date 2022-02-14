
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int osd1_enabled; int osd1_commit; int osd1_interlace; } ;
struct meson_drm {TYPE_1__ viu; scalar_t__ io_base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_27 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct meson_drm*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct meson_drm*,int ,int) ;
 scalar_t__ FUNC_13 (struct meson_drm*,int ) ;
 int FUNC_14 (int,int,scalar_t__) ;
 int FUNC_15 (int,scalar_t__) ;

void FUNC_16(struct meson_drm *VAR_31)
{
 uint32_t VAR_32;


 FUNC_14(VAR_16 | VAR_17, 0,
       VAR_31->io_base + FUNC_9(VAR_13));
 FUNC_14(VAR_16 | VAR_17, 0,
       VAR_31->io_base + FUNC_9(VAR_18));


 if (FUNC_13(VAR_31, VAR_30) ||
     FUNC_13(VAR_31, VAR_29))
  FUNC_10(VAR_31);
 else if (FUNC_13(VAR_31, VAR_28))
  FUNC_12(VAR_31, VAR_6,
            1);


 VAR_32 = VAR_27 |
  FUNC_7(4) |
  FUNC_5(32) |
  FUNC_8(4) |
  FUNC_6(2);

 if (FUNC_13(VAR_31, VAR_28))
  VAR_32 |= FUNC_11(32);
 else
  VAR_32 |= FUNC_11(64);

 FUNC_15(VAR_32, VAR_31->io_base + FUNC_9(VAR_15));
 FUNC_15(VAR_32, VAR_31->io_base + FUNC_9(VAR_20));


 FUNC_14(0xff << VAR_5,
       0xff << VAR_5,
       VAR_31->io_base + FUNC_9(VAR_14));
 FUNC_14(0xff << VAR_5,
       0xff << VAR_5,
       VAR_31->io_base + FUNC_9(VAR_19));



 FUNC_14(VAR_11, 0,
       VAR_31->io_base + FUNC_9(VAR_12));
 FUNC_15(0, VAR_31->io_base + FUNC_9(VAR_0));

 FUNC_15(0x00FF00C0,
   VAR_31->io_base + FUNC_9(VAR_8));
 FUNC_15(0x00FF00C0,
   VAR_31->io_base + FUNC_9(VAR_10));

 if (FUNC_13(VAR_31, VAR_28)) {
  FUNC_15(FUNC_4(0, 1) |
          FUNC_4(1, 0) |
          FUNC_4(2, 0) |
          FUNC_4(3, 0) |
          FUNC_2(1) |
          VAR_21 |
          VAR_22 |
          VAR_24 |
          FUNC_1(1) |
          FUNC_3(4),
          VAR_31->io_base + FUNC_9(VAR_23));

  FUNC_15(VAR_4,
          VAR_31->io_base + FUNC_9(VAR_2));
  FUNC_15(VAR_4,
          VAR_31->io_base + FUNC_9(VAR_3));
  FUNC_15(0, VAR_31->io_base + FUNC_9(VAR_7));
  FUNC_15(0, VAR_31->io_base + FUNC_9(VAR_9));
  FUNC_15(0,
    VAR_31->io_base + FUNC_9(VAR_26));
  FUNC_15(0,
    VAR_31->io_base + FUNC_9(VAR_25));

  FUNC_14(FUNC_0(0xc), FUNC_0(0xc),
        VAR_31->io_base + FUNC_9(VAR_1));
 }

 VAR_31->viu.osd1_enabled = 0;
 VAR_31->viu.osd1_commit = 0;
 VAR_31->viu.osd1_interlace = 0;
}
