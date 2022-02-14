
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vc4_dsi_encoder {struct vc4_dsi* dsi; } ;
struct vc4_dsi {int port; unsigned long divider; int lanes; int mode_flags; int format; int regset; TYPE_3__* pdev; int bridge; int pixel_clock; int pll_phy_clock; int escape_clock; } ;
struct drm_printer {int dummy; } ;
struct drm_encoder {TYPE_2__* crtc; } ;
struct drm_display_mode {int clock; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (char*,int) ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
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
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int FUNC_5 (int,int ) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct device*,char*,unsigned long,int) ;
 int FUNC_10 (struct device*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct drm_printer FUNC_13 (struct device*) ;
 int FUNC_14 (struct drm_printer*,int *) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct device*) ;
 struct vc4_dsi_encoder* FUNC_20 (struct drm_encoder*) ;
 int FUNC_21 (struct vc4_dsi*,int) ;

__attribute__((used)) static void FUNC_22(struct drm_encoder *VAR_81)
{
 struct drm_display_mode *VAR_82 = &VAR_81->crtc->state->adjusted_mode;
 struct vc4_dsi_encoder *VAR_83 = FUNC_20(VAR_81);
 struct vc4_dsi *VAR_84 = VAR_83->dsi;
 struct device *VAR_85 = &VAR_84->pdev->dev;
 bool VAR_86 = 0;
 unsigned long VAR_87;
 u32 VAR_88;

 u32 VAR_89 = FUNC_15(60);
 unsigned long VAR_90 = VAR_82->clock * 1000;
 unsigned long VAR_91;
 unsigned long VAR_92;
 int VAR_93;

 VAR_93 = FUNC_19(VAR_85);
 if (VAR_93) {
  FUNC_1("Failed to runtime PM enable on DSI%d\n", VAR_84->port);
  return;
 }

 if (VAR_86) {
  struct drm_printer VAR_94 = FUNC_13(&VAR_84->pdev->dev);
  FUNC_10(&VAR_84->pdev->dev, "DSI regs before:\n");
  FUNC_14(&VAR_94, &VAR_84->regset);
 }





 VAR_92 = (VAR_90 + 1000) * VAR_84->divider;
 VAR_93 = FUNC_8(VAR_84->pll_phy_clock, VAR_92);
 if (VAR_93) {
  FUNC_9(&VAR_84->pdev->dev,
   "Failed to set phy clock to %ld: %d\n", VAR_92, VAR_93);
 }


 FUNC_4(VAR_0,
         VAR_25 |
         FUNC_2(VAR_1));

 FUNC_4(VAR_0,
         VAR_23 |
         VAR_24);


 FUNC_4(VAR_79, FUNC_3(VAR_79));


 if (VAR_84->port == 0) {
  u32 VAR_95 = (FUNC_5(7, VAR_59) |
        FUNC_5(7, VAR_58));

  if (VAR_84->lanes < 2)
   VAR_95 |= VAR_6;

  if (!(VAR_84->mode_flags & VAR_72))
   VAR_95 |= VAR_7;

  FUNC_4(VAR_76, VAR_95);

  FUNC_4(VAR_77,
          FUNC_5(6, VAR_10) |
          FUNC_5(6, VAR_9) |
          FUNC_5(6, VAR_8));
 } else {
  u32 VAR_96 = (FUNC_5(7, VAR_59) |
        FUNC_5(7, VAR_58) |
        FUNC_5(6, VAR_13) |
        FUNC_5(6, VAR_14) |
        FUNC_5(6, VAR_15) |
        FUNC_5(6, VAR_16) |
        FUNC_5(6, VAR_17));

  if (VAR_84->lanes < 4)
   VAR_96 |= VAR_20;
  if (VAR_84->lanes < 3)
   VAR_96 |= VAR_19;
  if (VAR_84->lanes < 2)
   VAR_96 |= VAR_18;

  VAR_96 |= VAR_21;

  FUNC_4(VAR_76, VAR_96);

  FUNC_4(VAR_77, 0);


  FUNC_18(1);
 }

 VAR_93 = FUNC_7(VAR_84->escape_clock);
 if (VAR_93) {
  FUNC_1("Failed to turn on DSI escape clock: %d\n", VAR_93);
  return;
 }

 VAR_93 = FUNC_7(VAR_84->pll_phy_clock);
 if (VAR_93) {
  FUNC_1("Failed to turn on DSI PLL: %d\n", VAR_93);
  return;
 }

 VAR_87 = FUNC_6(VAR_84->pll_phy_clock);
 VAR_91 = VAR_92 / 8;
 VAR_93 = FUNC_8(VAR_84->pixel_clock, VAR_91);
 if (VAR_93) {
  FUNC_9(VAR_85, "Failed to set pixel clock to %ldHz: %d\n",
   VAR_91, VAR_93);
 }

 VAR_93 = FUNC_7(VAR_84->pixel_clock);
 if (VAR_93) {
  FUNC_1("Failed to turn on DSI pixel clock: %d\n", VAR_93);
  return;
 }




 VAR_88 = FUNC_0(500000000, VAR_87);

 FUNC_4(VAR_62,
         FUNC_5(FUNC_16(VAR_88, 262, 0),
         VAR_38) |
         FUNC_5(FUNC_16(VAR_88, 0, 8),
         VAR_36) |
         FUNC_5(FUNC_16(VAR_88, 38, 0),
         VAR_37));

 FUNC_4(VAR_63,
         FUNC_5(FUNC_16(VAR_88, 60, 0),
         VAR_40) |
         FUNC_5(FUNC_16(VAR_88, 60, 52),
         VAR_39));

 FUNC_4(VAR_64,
         FUNC_5(FUNC_16(VAR_88, 1000000, 0),
         VAR_41));

 FUNC_4(VAR_65,
         FUNC_5(FUNC_16(VAR_88, 100, 0),
         VAR_42) |
         FUNC_5(FUNC_16(VAR_88, 105, 6),
         VAR_44) |
         FUNC_5(FUNC_16(VAR_88, 40, 4),
         VAR_43));

 FUNC_4(VAR_66,
         FUNC_5(FUNC_16(VAR_88, VAR_89 * VAR_60, 0),
         VAR_46) |
         FUNC_5(FUNC_17(FUNC_16(VAR_88, 0, 8),
      FUNC_16(VAR_88, 60, 4)),
         VAR_47) |
         FUNC_5(0, VAR_45));
 FUNC_4(VAR_67, FUNC_5(FUNC_16(VAR_88,
           5 * 1000 * 1000, 0),
           VAR_48));

 FUNC_4(VAR_68,
         FUNC_5(VAR_89 * 5, VAR_50) |
         FUNC_5(VAR_89, VAR_52) |
         FUNC_5(VAR_89 * 4, VAR_51) |
         FUNC_5(VAR_89, VAR_49));

 FUNC_4(VAR_69,
         FUNC_5(FUNC_15(1000000),
         VAR_53));

 FUNC_4(VAR_73,
         VAR_54 |
         (VAR_84->lanes >= 2 ? VAR_55 : 0) |
         (VAR_84->lanes >= 3 ? VAR_56 : 0) |
         (VAR_84->lanes >= 4 ? VAR_57 : 0) |
         FUNC_2(VAR_74) |
         ((VAR_84->mode_flags & VAR_71) ?
   0 : FUNC_2(VAR_75)) |
         (VAR_84->port == 0 ?
   FUNC_5(VAR_89 - 1, VAR_5) :
   FUNC_5(VAR_89 - 1, VAR_12)));

 FUNC_4(VAR_0,
         FUNC_3(VAR_0) |
         VAR_22);


 FUNC_4(VAR_61, 0);

 FUNC_4(VAR_70, 0xffffff);

 FUNC_4(VAR_80, 100000);

 FUNC_4(VAR_78, 100000);




 FUNC_4(VAR_3,
         FUNC_5(VAR_35,
         VAR_34) |
         VAR_33);


 if (VAR_84->port == 0)
  FUNC_4(VAR_0, FUNC_3(VAR_0) | VAR_4);
 else
  FUNC_4(VAR_0, FUNC_3(VAR_0) | VAR_11);


 if (VAR_84->port == 0) {
 } else {
  FUNC_4(VAR_76,
          FUNC_3(VAR_76) &
          ~VAR_21);
 }

 FUNC_21(VAR_84, 0);

 FUNC_12(VAR_84->bridge);

 if (VAR_84->mode_flags & VAR_72) {
  FUNC_4(VAR_2,
          FUNC_5(VAR_84->divider,
          VAR_31) |
          FUNC_5(VAR_84->format, VAR_30) |
          FUNC_5(VAR_29,
          VAR_28) |
          VAR_32 |
          VAR_27);
 } else {
  FUNC_4(VAR_2,
          VAR_26 |
          VAR_27);
 }

 FUNC_11(VAR_84->bridge);

 if (VAR_86) {
  struct drm_printer VAR_97 = FUNC_13(&VAR_84->pdev->dev);
  FUNC_10(&VAR_84->pdev->dev, "DSI regs after:\n");
  FUNC_14(&VAR_97, &VAR_84->regset);
 }
}
