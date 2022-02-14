
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tv_mode {int htotal; int hsync_end; int hblank_start; int hblank_end; int nbr_end; int vi_end_f1; int vi_end_f2; int vsync_len; int vsync_start_f1; int vsync_start_f2; int progressive; int oversample; int clock; } ;
struct TYPE_3__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_display_mode {int crtc_hdisplay; int crtc_vdisplay; int hdisplay; int vdisplay; int crtc_clock; int clock; int flags; int private_flags; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int port_clock; int output_types; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (struct drm_display_mode*) ;
 int FUNC_5 (struct drm_display_mode*,struct tv_mode*) ;
 int FUNC_6 (struct drm_display_mode*,int,int,int) ;
 int FUNC_7 (struct drm_display_mode*,int,int,int) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct intel_encoder *VAR_31,
      struct intel_crtc_state *VAR_32)
{
 struct drm_i915_private *VAR_33 = FUNC_8(VAR_31->base.dev);
 struct drm_display_mode *VAR_34 =
  &VAR_32->base.adjusted_mode;
 struct drm_display_mode VAR_35 = {};
 u32 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 struct tv_mode VAR_42 = {};
 int VAR_43 = VAR_34->crtc_hdisplay;
 int VAR_44 = VAR_34->crtc_vdisplay;
 int VAR_45, VAR_46, VAR_47, VAR_48;

 VAR_32->output_types |= FUNC_0(VAR_2);

 VAR_36 = FUNC_2(VAR_3);
 VAR_37 = FUNC_2(VAR_11);
 VAR_38 = FUNC_2(VAR_12);
 VAR_39 = FUNC_2(VAR_27);
 VAR_40 = FUNC_2(VAR_28);

 VAR_42.htotal = (VAR_37 & VAR_9) >> VAR_10;
 VAR_42.hsync_end = (VAR_37 & VAR_7) >> VAR_8;

 VAR_42.hblank_start = (VAR_38 & VAR_5) >> VAR_6;
 VAR_42.hblank_end = (VAR_38 & VAR_7) >> VAR_4;

 VAR_42.nbr_end = (VAR_39 & VAR_13) >> VAR_14;
 VAR_42.vi_end_f1 = (VAR_39 & VAR_17) >> VAR_18;
 VAR_42.vi_end_f2 = (VAR_39 & VAR_19) >> VAR_20;

 VAR_42.vsync_len = (VAR_40 & VAR_21) >> VAR_22;
 VAR_42.vsync_start_f1 = (VAR_40 & VAR_23) >> VAR_24;
 VAR_42.vsync_start_f2 = (VAR_40 & VAR_25) >> VAR_26;

 VAR_42.clock = VAR_32->port_clock;

 VAR_42.progressive = VAR_36 & VAR_16;

 switch (VAR_36 & VAR_15) {
 case 128:
  VAR_42.oversample = 8;
  break;
 case 129:
  VAR_42.oversample = 4;
  break;
 case 130:
  VAR_42.oversample = 2;
  break;
 default:
  VAR_42.oversample = 1;
  break;
 }

 VAR_41 = FUNC_2(VAR_29);
 VAR_47 = VAR_41 >> 16;
 VAR_48 = VAR_41 & 0xffff;

 VAR_41 = FUNC_2(VAR_30);
 VAR_45 = VAR_41 >> 16;
 VAR_46 = VAR_41 & 0xffff;

 FUNC_5(&VAR_35, &VAR_42);

 FUNC_1("TV mode:\n");
 FUNC_4(&VAR_35);

 FUNC_6(&VAR_35, VAR_43,
      VAR_47, VAR_35.hdisplay - VAR_45 - VAR_47);
 FUNC_7(&VAR_35, VAR_44,
     VAR_48, VAR_35.vdisplay - VAR_46 - VAR_48);

 VAR_34->crtc_clock = VAR_35.clock;
 if (VAR_34->flags & VAR_0)
  VAR_34->crtc_clock /= 2;


 if (FUNC_3(VAR_33))
  VAR_34->private_flags |=
   VAR_1;
}
