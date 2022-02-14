
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct tegra_plane {struct tegra_dc* dc; } ;
struct TYPE_8__ {unsigned long value; int mode; } ;
struct TYPE_6__ {unsigned int x; unsigned int y; unsigned int w; unsigned int h; } ;
struct TYPE_5__ {int h; int w; int x; int y; } ;
struct tegra_dc_window {unsigned int format; int bits_per_pixel; unsigned int swap; unsigned int* base; int* stride; scalar_t__ bottom_up; TYPE_4__ tiling; TYPE_2__ src; TYPE_1__ dst; } ;
struct tegra_dc {TYPE_3__* soc; } ;
struct TYPE_7__ {scalar_t__ has_legacy_blending; scalar_t__ supports_block_linear; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
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
 int FUNC_1 (int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (unsigned int) ;
 int VAR_34 ;
 int VAR_35 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_36 ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (int ) ;



 unsigned int FUNC_7 (unsigned int) ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int FUNC_8 (int ) ;
 unsigned int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 (int ) ;
 unsigned int VAR_39 ;
 unsigned int FUNC_11 (unsigned int,int ,int,unsigned int) ;
 unsigned int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int,int*) ;
 int FUNC_14 (struct tegra_plane*,struct tegra_dc_window const*) ;
 int FUNC_15 (struct tegra_plane*) ;
 scalar_t__ FUNC_16 (struct tegra_plane*,struct tegra_dc_window const*) ;
 scalar_t__ FUNC_17 (struct tegra_plane*,struct tegra_dc_window const*) ;
 int FUNC_18 (struct tegra_plane*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_19(struct tegra_plane *VAR_40,
      const struct tegra_dc_window *VAR_41)
{
 unsigned VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48;
 struct tegra_dc *VAR_49 = VAR_40->dc;
 bool VAR_50, VAR_51;
 u32 VAR_52;





 VAR_50 = FUNC_13(VAR_41->format, &VAR_51);
 if (!VAR_50)
  VAR_48 = VAR_41->bits_per_pixel / 8;
 else
  VAR_48 = VAR_51 ? 1 : 2;

 FUNC_18(VAR_40, VAR_41->format, VAR_18);
 FUNC_18(VAR_40, VAR_41->swap, VAR_17);

 VAR_52 = FUNC_8(VAR_41->dst.y) | FUNC_4(VAR_41->dst.x);
 FUNC_18(VAR_40, VAR_52, VAR_30);

 VAR_52 = FUNC_10(VAR_41->dst.h) | FUNC_6(VAR_41->dst.w);
 FUNC_18(VAR_40, VAR_52, VAR_32);

 VAR_42 = VAR_41->src.x * VAR_48;
 VAR_43 = VAR_41->src.y;
 VAR_44 = VAR_41->src.w * VAR_48;
 VAR_45 = VAR_41->src.h;

 VAR_52 = FUNC_9(VAR_45) | FUNC_5(VAR_44);
 FUNC_18(VAR_40, VAR_52, VAR_31);





 if (VAR_50 && VAR_51)
  VAR_48 = 2;

 VAR_46 = FUNC_11(VAR_41->src.w, VAR_41->dst.w, 0, VAR_48);
 VAR_47 = FUNC_11(VAR_41->src.h, VAR_41->dst.h, 1, VAR_48);

 VAR_52 = FUNC_7(VAR_47) | FUNC_3(VAR_46);
 FUNC_18(VAR_40, VAR_52, VAR_27);

 VAR_46 = FUNC_12(VAR_41->src.x);
 VAR_47 = FUNC_12(VAR_41->src.y);

 FUNC_18(VAR_40, VAR_46, VAR_28);
 FUNC_18(VAR_40, VAR_47, VAR_34);

 FUNC_18(VAR_40, 0, VAR_33);
 FUNC_18(VAR_40, 0, VAR_16);

 FUNC_18(VAR_40, VAR_41->base[0], VAR_4);

 if (VAR_50 && VAR_51) {
  FUNC_18(VAR_40, VAR_41->base[1], VAR_5);
  FUNC_18(VAR_40, VAR_41->base[2], VAR_6);
  VAR_52 = VAR_41->stride[1] << 16 | VAR_41->stride[0];
  FUNC_18(VAR_40, VAR_52, VAR_29);
 } else {
  FUNC_18(VAR_40, VAR_41->stride[0], VAR_29);
 }

 if (VAR_41->bottom_up)
  VAR_43 += VAR_41->src.h - 1;

 FUNC_18(VAR_40, VAR_42, VAR_2);
 FUNC_18(VAR_40, VAR_43, VAR_3);

 if (VAR_49->soc->supports_block_linear) {
  unsigned long VAR_53 = VAR_41->tiling.value;

  switch (VAR_41->tiling.mode) {
  case 129:
   VAR_52 = VAR_9;
   break;

  case 128:
   VAR_52 = VAR_10;
   break;

  case 130:
   VAR_52 = FUNC_0(VAR_53) |
    VAR_8;
   break;
  }

  FUNC_18(VAR_40, VAR_52, VAR_7);
 } else {
  switch (VAR_41->tiling.mode) {
  case 129:
   VAR_52 = VAR_13 |
    VAR_12;
   break;

  case 128:
   VAR_52 = VAR_15 |
    VAR_14;
   break;

  case 130:




   break;
  }

  FUNC_18(VAR_40, VAR_52, VAR_11);
 }

 VAR_52 = VAR_39;

 if (VAR_50) {

  FUNC_18(VAR_40, 0x00f0, VAR_26);
  FUNC_18(VAR_40, 0x012a, VAR_25);
  FUNC_18(VAR_40, 0x0000, VAR_21);
  FUNC_18(VAR_40, 0x0198, VAR_24);
  FUNC_18(VAR_40, 0x039b, VAR_20);
  FUNC_18(VAR_40, 0x032f, VAR_23);
  FUNC_18(VAR_40, 0x0204, VAR_19);
  FUNC_18(VAR_40, 0x0000, VAR_22);

  VAR_52 |= VAR_1;
 } else if (VAR_41->bits_per_pixel < 24) {
  VAR_52 |= VAR_0;
 }

 if (VAR_41->bottom_up)
  VAR_52 |= VAR_37;

 if (FUNC_16(VAR_40, VAR_41)) {




  FUNC_18(VAR_40, 0x00008000, FUNC_1(0));
  FUNC_18(VAR_40, 0x3e087ce1, FUNC_1(1));
  FUNC_18(VAR_40, 0x3b117ac1, FUNC_1(2));
  FUNC_18(VAR_40, 0x591b73aa, FUNC_1(3));
  FUNC_18(VAR_40, 0x57256d9a, FUNC_1(4));
  FUNC_18(VAR_40, 0x552f668b, FUNC_1(5));
  FUNC_18(VAR_40, 0x73385e8b, FUNC_1(6));
  FUNC_18(VAR_40, 0x72435583, FUNC_1(7));
  FUNC_18(VAR_40, 0x714c4c8b, FUNC_1(8));
  FUNC_18(VAR_40, 0x70554393, FUNC_1(9));
  FUNC_18(VAR_40, 0x715e389b, FUNC_1(10));
  FUNC_18(VAR_40, 0x71662faa, FUNC_1(11));
  FUNC_18(VAR_40, 0x536d25ba, FUNC_1(12));
  FUNC_18(VAR_40, 0x55731bca, FUNC_1(13));
  FUNC_18(VAR_40, 0x387a11d9, FUNC_1(14));
  FUNC_18(VAR_40, 0x3c7c08f1, FUNC_1(15));

  VAR_52 |= VAR_36;
 }

 if (FUNC_17(VAR_40, VAR_41)) {
  unsigned int VAR_54, VAR_55;





  for (VAR_54 = 0, VAR_55 = 128; VAR_54 < 16; VAR_54++, VAR_55 -= 8)
   FUNC_18(VAR_40, VAR_55, FUNC_2(VAR_54));

  VAR_52 |= VAR_38;
 }

 FUNC_18(VAR_40, VAR_52, VAR_35);

 if (VAR_49->soc->has_legacy_blending)
  FUNC_15(VAR_40);
 else
  FUNC_14(VAR_40, VAR_41);
}
