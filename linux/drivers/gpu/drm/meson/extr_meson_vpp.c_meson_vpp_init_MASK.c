
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct meson_drm*,int ,int) ;
 int FUNC_6 (struct meson_drm*,int ,int) ;
 scalar_t__ FUNC_7 (struct meson_drm*,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_8 (int,int,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

void FUNC_10(struct meson_drm *VAR_32)
{

 if (FUNC_7(VAR_32, VAR_28))
  FUNC_9(0x108080, VAR_32->io_base + FUNC_4(VAR_4));
 else if (FUNC_7(VAR_32, VAR_29)) {
  FUNC_8(0xff << 16, 0xff << 16,
        VAR_32->io_base + FUNC_4(VAR_1));
  FUNC_9(VAR_17,
          VAR_32->io_base + FUNC_4(VAR_3));
  FUNC_9(0x1020080,
    VAR_32->io_base + FUNC_4(VAR_4));
 } else if (FUNC_7(VAR_32, VAR_27))
  FUNC_9(0xf, VAR_32->io_base + FUNC_4(VAR_0));


 if (FUNC_7(VAR_32, VAR_27))
  FUNC_9(VAR_9,
          VAR_32->io_base + FUNC_4(VAR_8));
 else
  FUNC_8(VAR_10, 0x77f,
        VAR_32->io_base + FUNC_4(VAR_8));
 FUNC_9(FUNC_1(4) | FUNC_2(4),
         VAR_32->io_base + FUNC_4(VAR_5));

 if (!FUNC_7(VAR_32, VAR_27)) {

  FUNC_8(VAR_18, 0,
        VAR_32->io_base + FUNC_4(VAR_7));


  FUNC_8(VAR_16, 0,
        VAR_32->io_base + FUNC_4(VAR_7));


  FUNC_8(VAR_11 | VAR_12 |
        VAR_23 | VAR_25 |
        VAR_24 | VAR_26, 0,
        VAR_32->io_base + FUNC_4(VAR_7));


  FUNC_9(4096,
    VAR_32->io_base + FUNC_4(VAR_19));
  FUNC_9(4096,
    VAR_32->io_base + FUNC_4(VAR_2));
 }


 FUNC_9(0, VAR_32->io_base + FUNC_4(VAR_14));
 FUNC_9(0, VAR_32->io_base + FUNC_4(VAR_15));
 FUNC_9(0, VAR_32->io_base + FUNC_4(VAR_13));


 FUNC_9(FUNC_3(4) | FUNC_0(4) |
         VAR_21,
         VAR_32->io_base + FUNC_4(VAR_20));


 FUNC_9(VAR_6,
         VAR_32->io_base + FUNC_4(VAR_22));


 FUNC_5(VAR_32,
    VAR_30, 0);
 FUNC_5(VAR_32,
    VAR_30, 1);


 FUNC_6(VAR_32, VAR_31,
      0);
 FUNC_6(VAR_32, VAR_31,
      1);
}
