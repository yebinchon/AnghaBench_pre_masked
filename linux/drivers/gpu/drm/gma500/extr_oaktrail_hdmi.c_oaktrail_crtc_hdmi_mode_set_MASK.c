
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct oaktrail_hdmi_dev {int dummy; } ;
struct oaktrail_hdmi_clock {int nf; int nr; int np; } ;
struct drm_psb_private {struct oaktrail_hdmi_dev* hdmi_priv; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int crtc_hblank_start; int crtc_hblank_end; int crtc_hsync_start; int crtc_hsync_end; int crtc_vdisplay; int crtc_vtotal; int crtc_vblank_start; int crtc_vblank_end; int crtc_vsync_start; int crtc_vsync_end; int crtc_hdisplay; int crtc_htotal; int vdisplay; int hdisplay; int clock; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_crtc_helper_funcs {int (* mode_set_base ) (struct drm_crtc*,int,int,struct drm_framebuffer*) ;} ;
struct drm_crtc {struct drm_crtc_helper_funcs* helper_private; struct drm_device* dev; } ;


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
 int FUNC_0 (int,int) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_display_mode*) ;
 int FUNC_7 (struct drm_crtc*,int ,int,struct oaktrail_hdmi_clock*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_crtc*,int,int,struct drm_framebuffer*) ;
 int FUNC_10 (int) ;

int FUNC_11(struct drm_crtc *VAR_48,
       struct drm_display_mode *VAR_49,
       struct drm_display_mode *VAR_50,
       int VAR_51, int VAR_52,
       struct drm_framebuffer *VAR_53)
{
 struct drm_device *VAR_54 = VAR_48->dev;
 struct drm_psb_private *VAR_55 = VAR_54->dev_private;
 struct oaktrail_hdmi_dev *VAR_56 = VAR_55->hdmi_priv;
 int VAR_57 = 1;
 int VAR_58 = (VAR_57 == 0) ? VAR_25 : VAR_26;
 int VAR_59 = (VAR_57 == 0) ? VAR_20 : VAR_21;
 int VAR_60 = (VAR_57 == 0) ? VAR_23 : VAR_24;
 int VAR_61 = (VAR_57 == 0) ? VAR_46 : VAR_47;
 int VAR_62 = (VAR_57 == 0) ? VAR_40 : VAR_41;
 int VAR_63 = (VAR_57 == 0) ? VAR_44 : VAR_45;
 int VAR_64 = (VAR_57 == 0) ? VAR_16 : VAR_19;
 int VAR_65 = (VAR_57 == 0) ? VAR_15 : VAR_18;
 int VAR_66 = (VAR_57 == 0) ? VAR_37 : VAR_39;
 int VAR_67 = (VAR_57 == 0) ? VAR_35 : VAR_38;
 int VAR_68;
 struct oaktrail_hdmi_clock VAR_69;
 u32 VAR_70, VAR_71, VAR_72, VAR_73;
 int VAR_74 = VAR_17;

 if (!FUNC_3(VAR_54, 1))
  return 0;


 FUNC_2(VAR_42, VAR_43);


 VAR_72 = FUNC_1(VAR_5);
 if ((VAR_72 & VAR_11) == 0) {
  FUNC_2(VAR_5, VAR_72 | (VAR_11 | VAR_12));
  FUNC_2(VAR_7, 0x00000000);
  FUNC_2(VAR_13, 0x1);
 }
 FUNC_10(150);


 FUNC_8(VAR_54);


 VAR_68 = 25000;
 FUNC_7(VAR_48, VAR_50->clock, VAR_68, &VAR_69);


 VAR_72 = FUNC_1(VAR_5);
 VAR_72 &= ~VAR_9;
 VAR_72 &= ~(VAR_11 | VAR_12);
 FUNC_2(VAR_5, 0x00000008);
 FUNC_2(VAR_7, ((VAR_69.nf << 6) | VAR_69.nr));
 FUNC_2(VAR_3, ((VAR_69.nf >> 14) - 1));
 FUNC_2(VAR_5, (VAR_72 | (VAR_69.np << VAR_10) | VAR_8 | VAR_6));
 FUNC_2(VAR_14, 0x80000000);
 FUNC_2(VAR_4, 0x80050102);
 FUNC_10(150);


 FUNC_0(0x1004, 0x1fd);
 FUNC_0(0x2000, 0x1);
 FUNC_0(0x2008, 0x0);
 FUNC_0(0x3130, 0x8);
 FUNC_0(0x101c, 0x1800810);

 VAR_73 = FUNC_6(VAR_50);
 FUNC_2(VAR_58, VAR_73);
 FUNC_2(VAR_59, (VAR_50->crtc_hblank_start - 1) | ((VAR_50->crtc_hblank_end - 1) << 16));
 FUNC_2(VAR_60, (VAR_50->crtc_hsync_start - 1) | ((VAR_50->crtc_hsync_end - 1) << 16));
 FUNC_2(VAR_61, (VAR_50->crtc_vdisplay - 1) | ((VAR_50->crtc_vtotal - 1) << 16));
 FUNC_2(VAR_62, (VAR_50->crtc_vblank_start - 1) | ((VAR_50->crtc_vblank_end - 1) << 16));
 FUNC_2(VAR_63, (VAR_50->crtc_vsync_start - 1) | ((VAR_50->crtc_vsync_end - 1) << 16));
 FUNC_2(VAR_66, ((VAR_49->crtc_hdisplay - 1) << 16) | (VAR_49->crtc_vdisplay - 1));

 FUNC_2(VAR_29, (VAR_50->crtc_hdisplay - 1) | ((VAR_50->crtc_htotal - 1) << 16));
 FUNC_2(VAR_27, (VAR_50->crtc_hblank_start - 1) | ((VAR_50->crtc_hblank_end - 1) << 16));
 FUNC_2(VAR_28, (VAR_50->crtc_hsync_start - 1) | ((VAR_50->crtc_hsync_end - 1) << 16));
 FUNC_2(VAR_34, (VAR_50->crtc_vdisplay - 1) | ((VAR_50->crtc_vtotal - 1) << 16));
 FUNC_2(VAR_32, (VAR_50->crtc_vblank_start - 1) | ((VAR_50->crtc_vblank_end - 1) << 16));
 FUNC_2(VAR_33, (VAR_50->crtc_vsync_start - 1) | ((VAR_50->crtc_vsync_end - 1) << 16));
 FUNC_2(VAR_31, ((VAR_49->crtc_hdisplay - 1) << 16) | (VAR_49->crtc_vdisplay - 1));

 VAR_73 = VAR_50->crtc_hblank_end - VAR_50->crtc_hblank_start;
 FUNC_0(VAR_22, ((VAR_50->crtc_hdisplay - 1) << 16) | VAR_73);

 FUNC_2(VAR_64, ((VAR_49->vdisplay - 1) << 16) | (VAR_49->hdisplay - 1));
 FUNC_2(VAR_65, 0);


 {
  const struct drm_crtc_helper_funcs *VAR_75 = VAR_48->helper_private;
  VAR_75->mode_set_base(VAR_48, VAR_51, VAR_52, VAR_53);
 }


 VAR_70 = FUNC_1(VAR_74);
 VAR_70 |= VAR_1;
 VAR_70 |= VAR_2;
 VAR_70 |= VAR_0;


 VAR_71 = FUNC_1(VAR_67);
 VAR_71 |= VAR_36;

 FUNC_2(VAR_67, VAR_71);
 FUNC_1(VAR_67);

 FUNC_2(VAR_30, VAR_71);
 FUNC_1(VAR_30);
 FUNC_5(VAR_54);

 FUNC_2(VAR_74, VAR_70);
 FUNC_5(VAR_54);

 FUNC_4(VAR_54);

 return 0;
}
