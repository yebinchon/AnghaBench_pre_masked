
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct mcde_dsi {int hs_freq; scalar_t__ regs; TYPE_1__* mdsi; int dev; } ;
struct drm_display_mode {int vdisplay; int vsync_start; int vsync_end; int vtotal; int hsync_start; int hdisplay; int htotal; int hsync_end; int clock; } ;
struct TYPE_2__ {int format; int mode_flags; int lanes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;




 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mcde_dsi *VAR_48,
          const struct drm_display_mode *VAR_49)
{
 u8 VAR_50 = FUNC_3(VAR_48->mdsi->format);
 u64 VAR_51;
 u32 VAR_52;
 u32 VAR_53;
 u32 VAR_54;
 u32 VAR_55, VAR_56;
 u32 VAR_57, VAR_58;
 u32 VAR_59;

 VAR_59 = 0;
 if (VAR_48->mdsi->mode_flags & VAR_42)
  VAR_59 |= VAR_19;
 if (VAR_48->mdsi->mode_flags & VAR_43) {
  VAR_59 |= VAR_24;
  VAR_59 |= VAR_25;
 }

 switch (VAR_48->mdsi->format) {
 case 131:
  VAR_59 |= VAR_44 <<
   VAR_20;
  VAR_59 |= VAR_26;
  break;
 case 129:
  VAR_59 |= VAR_45 <<
   VAR_20;
  VAR_59 |= VAR_27;
  break;
 case 130:
  VAR_59 |= VAR_47
   << VAR_20;
  VAR_59 |= VAR_28;
  break;
 case 128:
  VAR_59 |= VAR_46 <<
   VAR_20;
  VAR_59 |= VAR_29;
  break;
 default:
  FUNC_1(VAR_48->dev, "unknown pixel mode\n");
  return;
 }




 VAR_59 |= VAR_23;

 VAR_59 |= VAR_22;

 VAR_59 |= 1 << VAR_21;

 FUNC_5(VAR_59, VAR_48->regs + VAR_18);


 VAR_59 = VAR_49->vdisplay << VAR_41;

 VAR_59 |= (VAR_49->vsync_start - VAR_49->vdisplay)
  << VAR_40;

 VAR_59 |= (VAR_49->vsync_end - VAR_49->vsync_start)
  << VAR_38;

 VAR_59 |= (VAR_49->vtotal - VAR_49->vsync_end)
  << VAR_39;
 FUNC_5(VAR_59, VAR_48->regs + VAR_37);
 VAR_52 = (VAR_49->hsync_start - VAR_49->hdisplay) * VAR_50 - 6 - 2;
 if (VAR_48->mdsi->mode_flags & VAR_43) {




  VAR_53 = (VAR_49->htotal - VAR_49->hsync_end) * VAR_50 - 4 - 6;





  VAR_54 = (VAR_49->hsync_end - VAR_49->hsync_start) * VAR_50 - 4 - 4 - 6;
 } else {






  VAR_53 = (VAR_49->htotal - VAR_49->hsync_start) * VAR_50 - 4 - 4 - 6;

  VAR_54 = 0;
 }
 FUNC_0(VAR_48->dev, "hfp: %u, hbp: %u, hsa: %u\n",
  VAR_52, VAR_53, VAR_54);


 VAR_59 = VAR_54 << VAR_16;

 VAR_59 |= VAR_53 << VAR_14;

 VAR_59 |= VAR_52 << VAR_15;
 FUNC_5(VAR_59, VAR_48->regs + VAR_13);


 VAR_59 = VAR_49->hdisplay * (VAR_50 / 8);
 FUNC_5(VAR_59, VAR_48->regs + VAR_17);
 VAR_51 = VAR_49->clock * VAR_49->htotal;
 VAR_51 *= (VAR_48->hs_freq / 8);
 FUNC_2(VAR_51, 1000000);
 FUNC_2(VAR_51, 1000000);
 VAR_51 *= VAR_48->mdsi->lanes;
 FUNC_0(VAR_48->dev, "calculated bytes per line: %llu\n", VAR_51);




 if (VAR_48->mdsi->mode_flags & VAR_43) {

  VAR_55 = VAR_51 - (VAR_49->hsync_end - VAR_49->hsync_start) - 6;
  VAR_59 = VAR_55 << VAR_9;
  FUNC_5(VAR_59, VAR_48->regs + VAR_8);
 } else {
  VAR_55 = VAR_51 - 4 - 6;
  VAR_59 = VAR_55 << VAR_7;
  FUNC_5(VAR_59, VAR_48->regs + VAR_5);
 }

 VAR_56 = (VAR_55 + 6) / VAR_48->mdsi->lanes;
 FUNC_0(VAR_48->dev, "line duration %u\n", VAR_56);
 VAR_59 = VAR_56 << VAR_11;




 VAR_59 |= 0 << VAR_12;
 FUNC_5(VAR_59, VAR_48->regs + VAR_10);


 VAR_57 = VAR_51 - VAR_49->hdisplay * VAR_50 - 6;
 VAR_58 = (VAR_57 + 6) / VAR_48->mdsi->lanes;
 FUNC_0(VAR_48->dev, "blkeol pck: %u, duration: %u\n",
   VAR_57, VAR_58);

 if (VAR_48->mdsi->mode_flags & VAR_42) {

  VAR_59 = FUNC_4(VAR_48->regs + VAR_5);
  VAR_59 |= VAR_57 << VAR_6;
  FUNC_5(VAR_59, VAR_48->regs + VAR_5);
  FUNC_5(VAR_57, VAR_48->regs + VAR_35);

  FUNC_5(VAR_58, VAR_48->regs + VAR_33);
  FUNC_5(VAR_58 - 6, VAR_48->regs + VAR_34);
 }


 VAR_59 = FUNC_4(VAR_48->regs + VAR_35);
 VAR_59 |= VAR_55 <<
  VAR_36;
 FUNC_5(VAR_59, VAR_48->regs + VAR_35);


 VAR_59 = FUNC_4(VAR_48->regs + VAR_2);
 VAR_59 |= VAR_3;
 FUNC_5(VAR_59, VAR_48->regs + VAR_2);


 VAR_59 = FUNC_4(VAR_48->regs + VAR_0);
 VAR_59 &= ~VAR_1;
 FUNC_5(VAR_59, VAR_48->regs + VAR_0);


 VAR_59 = FUNC_4(VAR_48->regs + VAR_30);
 VAR_59 |= VAR_32;
 VAR_59 |= VAR_31;
 FUNC_5(VAR_59, VAR_48->regs + VAR_30);


 VAR_59 = FUNC_4(VAR_48->regs + VAR_2);
 VAR_59 |= VAR_4;
 FUNC_5(VAR_59, VAR_48->regs + VAR_2);
}
