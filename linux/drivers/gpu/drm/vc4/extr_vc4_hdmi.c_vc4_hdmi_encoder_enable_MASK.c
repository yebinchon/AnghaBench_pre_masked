
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vc4_hdmi_encoder {int limited_rgb_range; scalar_t__ hdmi_monitor; } ;
struct vc4_hdmi {int hd_regset; int hdmi_regset; TYPE_3__* pdev; int pixel_clock; } ;
struct vc4_dev {struct vc4_hdmi* hdmi; } ;
struct drm_printer {int dummy; } ;
struct drm_encoder {struct drm_device* dev; TYPE_2__* crtc; } ;
struct drm_display_mode {int flags; int crtc_vsync_end; int crtc_vsync_start; int crtc_vdisplay; int crtc_vtotal; int clock; int hdisplay; int htotal; int hsync_end; int hsync_start; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
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
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (struct drm_display_mode*) ;
 struct drm_printer FUNC_12 (int *) ;
 int FUNC_13 (struct drm_printer*,int *) ;
 int FUNC_14 (int *) ;
 struct vc4_dev* FUNC_15 (struct drm_device*) ;
 struct vc4_hdmi_encoder* FUNC_16 (struct drm_encoder*) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (struct drm_encoder*) ;
 int FUNC_19 (int,int) ;

__attribute__((used)) static void FUNC_20(struct drm_encoder *VAR_58)
{
 struct drm_display_mode *VAR_59 = &VAR_58->crtc->state->adjusted_mode;
 struct vc4_hdmi_encoder *VAR_60 = FUNC_16(VAR_58);
 struct drm_device *VAR_61 = VAR_58->dev;
 struct vc4_dev *VAR_62 = FUNC_15(VAR_61);
 struct vc4_hdmi *VAR_63 = VAR_62->hdmi;
 bool VAR_64 = 0;
 bool VAR_65 = VAR_59->flags & VAR_2;
 bool VAR_66 = VAR_59->flags & VAR_3;
 bool VAR_67 = VAR_59->flags & VAR_1;
 u32 VAR_68 = (VAR_59->flags & VAR_0) ? 2 : 1;
 u32 VAR_69 = (FUNC_5(VAR_59->crtc_vsync_end - VAR_59->crtc_vsync_start,
       VAR_34) |
       FUNC_5(VAR_59->crtc_vsync_start - VAR_59->crtc_vdisplay,
       VAR_33) |
       FUNC_5(VAR_59->crtc_vdisplay, VAR_32));
 u32 VAR_70 = (FUNC_5(0, VAR_38) |
       FUNC_5(VAR_59->crtc_vtotal - VAR_59->crtc_vsync_end,
       VAR_37));
 u32 VAR_71 = (FUNC_5(0, VAR_38) |
     FUNC_5(VAR_59->crtc_vtotal -
     VAR_59->crtc_vsync_end -
     VAR_67,
     VAR_37));
 u32 VAR_72;
 int VAR_73;

 VAR_73 = FUNC_14(&VAR_63->pdev->dev);
 if (VAR_73 < 0) {
  FUNC_0("Failed to retain power domain: %d\n", VAR_73);
  return;
 }

 VAR_73 = FUNC_9(VAR_63->pixel_clock,
      VAR_59->clock * 1000 *
      ((VAR_59->flags & VAR_0) ? 2 : 1));
 if (VAR_73) {
  FUNC_0("Failed to set pixel clock rate: %d\n", VAR_73);
  return;
 }

 VAR_73 = FUNC_8(VAR_63->pixel_clock);
 if (VAR_73) {
  FUNC_0("Failed to turn on pixel clock: %d\n", VAR_73);
  return;
 }

 FUNC_2(VAR_26,
     VAR_28 |
     VAR_27);

 FUNC_2(VAR_26, 0);




 FUNC_2(VAR_29, 0xf << 16);

 FUNC_2(VAR_29, 0);

 if (VAR_64) {
  struct drm_printer VAR_74 = FUNC_12(&VAR_63->pdev->dev);

  FUNC_10(&VAR_63->pdev->dev, "HDMI regs before:\n");
  FUNC_13(&VAR_74, &VAR_63->hdmi_regset);
  FUNC_13(&VAR_74, &VAR_63->hd_regset);
 }

 FUNC_4(VAR_52, 0);

 FUNC_2(VAR_20,
     FUNC_1(VAR_20) |
     VAR_23 |
     VAR_22);

 FUNC_2(VAR_10,
     (VAR_66 ? VAR_13 : 0) |
     (VAR_65 ? VAR_12 : 0) |
     FUNC_5(VAR_59->hdisplay * VAR_68,
     VAR_11));

 FUNC_2(VAR_14,
     FUNC_5((VAR_59->htotal -
      VAR_59->hsync_end) * VAR_68,
     VAR_15) |
     FUNC_5((VAR_59->hsync_end -
      VAR_59->hsync_start) * VAR_68,
     VAR_17) |
     FUNC_5((VAR_59->hsync_start -
      VAR_59->hdisplay) * VAR_68,
     VAR_16));

 FUNC_2(VAR_30, VAR_69);
 FUNC_2(VAR_31, VAR_69);

 FUNC_2(VAR_35, VAR_71);
 FUNC_2(VAR_36, VAR_70);

 FUNC_4(VAR_52,
   (VAR_66 ? 0 : VAR_57) |
   (VAR_65 ? 0 : VAR_55));

 VAR_72 = FUNC_5(VAR_50,
    VAR_49);

 if (VAR_60->hdmi_monitor &&
     FUNC_11(VAR_59) ==
     VAR_4) {
  VAR_72 |= VAR_46;
  VAR_72 |= VAR_51;
  VAR_72 |= FUNC_5(VAR_48,
      VAR_47);

  FUNC_4(VAR_39, (0x000 << 16) | 0x000);
  FUNC_4(VAR_40, (0x100 << 16) | 0x6e0);
  FUNC_4(VAR_41, (0x6e0 << 16) | 0x000);
  FUNC_4(VAR_42, (0x100 << 16) | 0x000);
  FUNC_4(VAR_43, (0x000 << 16) | 0x6e0);
  FUNC_4(VAR_44, (0x100 << 16) | 0x000);
  VAR_60->limited_rgb_range = 1;
 } else {
  VAR_60->limited_rgb_range = 0;
 }


 FUNC_4(VAR_45, VAR_72);

 FUNC_2(VAR_5, VAR_6);

 if (VAR_64) {
  struct drm_printer VAR_75 = FUNC_12(&VAR_63->pdev->dev);

  FUNC_10(&VAR_63->pdev->dev, "HDMI regs after:\n");
  FUNC_13(&VAR_75, &VAR_63->hdmi_regset);
  FUNC_13(&VAR_75, &VAR_63->hd_regset);
 }

 FUNC_4(VAR_52,
   FUNC_3(VAR_52) |
   VAR_53 |
   VAR_56 |
   VAR_54);

 if (VAR_60->hdmi_monitor) {
  FUNC_2(VAR_20,
      FUNC_1(VAR_20) |
      VAR_24);

  VAR_73 = FUNC_19(FUNC_1(VAR_20) &
          VAR_21, 1000);
  FUNC_7(VAR_73, "Timeout waiting for "
     "VC4_HDMI_SCHEDULER_CONTROL_HDMI_ACTIVE\n");
 } else {
  FUNC_2(VAR_18,
      FUNC_1(VAR_18) &
      ~(VAR_19));
  FUNC_2(VAR_20,
      FUNC_1(VAR_20) &
      ~VAR_24);

  VAR_73 = FUNC_19(!(FUNC_1(VAR_20) &
     VAR_21), 1000);
  FUNC_7(VAR_73, "Timeout waiting for "
     "!VC4_HDMI_SCHEDULER_CONTROL_HDMI_ACTIVE\n");
 }

 if (VAR_60->hdmi_monitor) {
  u32 VAR_76;

  FUNC_6(!(FUNC_1(VAR_20) &
     VAR_21));
  FUNC_2(VAR_20,
      FUNC_1(VAR_20) |
      VAR_25);

  FUNC_2(VAR_18,
      VAR_19);

  FUNC_18(VAR_58);

  VAR_76 = FUNC_1(VAR_5);
  VAR_76 &= VAR_9;

  FUNC_2(VAR_5,
      VAR_76 & ~VAR_7);
  FUNC_2(VAR_5,
      VAR_76 | VAR_7);
  FUNC_17(1000, 1100);
  FUNC_2(VAR_5,
      VAR_76 & ~VAR_7);
  FUNC_2(VAR_5,
      VAR_76 | VAR_7);

  VAR_73 = FUNC_19(FUNC_1(VAR_5) &
          VAR_8, 1);
  FUNC_7(VAR_73, "Timeout waiting for "
     "VC4_HDMI_FIFO_CTL_RECENTER_DONE");
 }
}
