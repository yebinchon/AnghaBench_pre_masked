
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct video_levels {unsigned int burst; unsigned int black; unsigned int blank; } ;
struct tv_mode {int burst_ena; int oversample; int dda1_inc; int dda2_inc; int dda3_inc; unsigned int sc_reset; unsigned int dda2_size; unsigned int dda3_size; unsigned int hblank_start; unsigned int hblank_end; unsigned int* filter_table; scalar_t__ pal_burst; scalar_t__ trilevel_sync; scalar_t__ progressive; struct color_conversion* svideo_color; struct video_levels* svideo_levels; struct color_conversion* composite_color; struct video_levels* composite_levels; } ;
struct TYPE_10__ {int top; scalar_t__ bottom; } ;
struct intel_tv_connector_state {TYPE_5__ margins; scalar_t__ bypass_vfilter; } ;
struct intel_tv {int type; } ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_7__ {int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_8__ {int left; scalar_t__ right; } ;
struct TYPE_9__ {TYPE_3__ margins; } ;
struct drm_connector_state {TYPE_4__ tv; } ;
struct color_conversion {int dummy; } ;






 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int FUNC_4 (int ) ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 int FUNC_7 (int) ;
 unsigned int VAR_34 ;
 int FUNC_8 (int) ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_9 (struct drm_i915_private*,int ) ;
 struct video_levels VAR_37 ;
 struct intel_tv* FUNC_10 (struct intel_encoder*) ;
 struct color_conversion VAR_38 ;
 struct tv_mode* FUNC_11 (struct drm_connector_state const*) ;
 unsigned int FUNC_12 (struct tv_mode const*) ;
 struct color_conversion VAR_39 ;
 int FUNC_13 (struct drm_i915_private*,struct color_conversion const*) ;
 int FUNC_14 (struct drm_i915_private*,struct tv_mode const*,int) ;
 struct drm_i915_private* FUNC_15 (int ) ;
 struct intel_crtc* FUNC_16 (int ) ;
 struct intel_tv_connector_state* FUNC_17 (struct drm_connector_state const*) ;

__attribute__((used)) static void FUNC_18(struct intel_encoder *VAR_40,
    const struct intel_crtc_state *VAR_41,
    const struct drm_connector_state *VAR_42)
{
 struct drm_i915_private *VAR_43 = FUNC_15(VAR_40->base.dev);
 struct intel_crtc *VAR_44 = FUNC_16(VAR_41->base.crtc);
 struct intel_tv *VAR_45 = FUNC_10(VAR_40);
 const struct intel_tv_connector_state *VAR_46 =
  FUNC_17(VAR_42);
 const struct tv_mode *VAR_47 = FUNC_11(VAR_42);
 u32 VAR_48, VAR_49;
 u32 VAR_50, VAR_51, VAR_52;
 int VAR_53, VAR_54;
 const struct video_levels *VAR_55;
 const struct color_conversion *VAR_56;
 bool VAR_57;
 int VAR_58, VAR_59;
 unsigned int VAR_60, VAR_61;

 if (!VAR_47)
  return;

 VAR_48 = FUNC_0(VAR_6);
 VAR_48 &= VAR_7;

 switch (VAR_45->type) {
 default:
 case 128:
 case 130:
  VAR_48 |= VAR_12;
  VAR_55 = VAR_47->composite_levels;
  VAR_56 = VAR_47->composite_color;
  VAR_57 = VAR_47->burst_ena;
  break;
 case 131:
  VAR_48 |= VAR_11;
  VAR_55 = &VAR_37;
  if (VAR_47->burst_ena)
   VAR_56 = &VAR_39;
  else
   VAR_56 = &VAR_38;
  VAR_57 = 0;
  break;
 case 129:
  VAR_48 |= VAR_13;
  VAR_55 = VAR_47->svideo_levels;
  VAR_56 = VAR_47->svideo_color;
  VAR_57 = VAR_47->burst_ena;
  break;
 }

 VAR_48 |= FUNC_4(VAR_44->pipe);

 switch (VAR_47->oversample) {
 case 8:
  VAR_48 |= VAR_18;
  break;
 case 4:
  VAR_48 |= VAR_17;
  break;
 case 2:
  VAR_48 |= VAR_16;
  break;
 default:
  VAR_48 |= VAR_19;
  break;
 }

 if (VAR_47->progressive)
  VAR_48 |= VAR_21;
 if (VAR_47->trilevel_sync)
  VAR_48 |= VAR_33;
 if (VAR_47->pal_burst)
  VAR_48 |= VAR_20;

 VAR_50 = 0;
 if (VAR_47->dda1_inc)
  VAR_50 |= VAR_30;
 if (VAR_47->dda2_inc)
  VAR_50 |= VAR_31;
 if (VAR_47->dda3_inc)
  VAR_50 |= VAR_32;
 VAR_50 |= VAR_47->sc_reset;
 if (VAR_55)
  VAR_50 |= VAR_55->burst << VAR_3;
 VAR_50 |= VAR_47->dda1_inc << VAR_22;

 VAR_51 = VAR_47->dda2_size << VAR_24 |
  VAR_47->dda2_inc << VAR_23;

 VAR_52 = VAR_47->dda3_size << VAR_26 |
  VAR_47->dda3_inc << VAR_25;


 if (FUNC_3(VAR_43))
  VAR_48 |= VAR_10 | VAR_14;

 FUNC_14(VAR_43, VAR_47, VAR_57);

 FUNC_1(VAR_27, VAR_50);
 FUNC_1(VAR_28, VAR_51);
 FUNC_1(VAR_29, VAR_52);

 FUNC_13(VAR_43, VAR_56);

 if (FUNC_2(VAR_43) >= 4)
  FUNC_1(VAR_4, 0x00404000);
 else
  FUNC_1(VAR_4, 0x00606000);

 if (VAR_55)
  FUNC_1(VAR_5,
      ((VAR_55->black << VAR_1) |
       (VAR_55->blank << VAR_2)));

 FUNC_9(VAR_43, VAR_44->pipe);


 VAR_49 = VAR_0;
 if (VAR_46->bypass_vfilter)
  VAR_49 |= VAR_34;
 FUNC_1(VAR_15, VAR_49);

 VAR_60 = VAR_47->hblank_start - VAR_47->hblank_end;
 VAR_61 = FUNC_12(VAR_47);

 VAR_58 = VAR_42->tv.margins.left;
 VAR_59 = VAR_46->margins.top;
 VAR_60 -= (VAR_42->tv.margins.left +
    VAR_42->tv.margins.right);
 VAR_61 -= (VAR_46->margins.top +
    VAR_46->margins.bottom);
 FUNC_1(VAR_35, (VAR_58<<16)|VAR_59);
 FUNC_1(VAR_36, (VAR_60<<16)|VAR_61);

 VAR_54 = 0;
 for (VAR_53 = 0; VAR_53 < 60; VAR_53++)
  FUNC_1(FUNC_6(VAR_53), VAR_47->filter_table[VAR_54++]);
 for (VAR_53 = 0; VAR_53 < 60; VAR_53++)
  FUNC_1(FUNC_5(VAR_53), VAR_47->filter_table[VAR_54++]);
 for (VAR_53 = 0; VAR_53 < 43; VAR_53++)
  FUNC_1(FUNC_8(VAR_53), VAR_47->filter_table[VAR_54++]);
 for (VAR_53 = 0; VAR_53 < 43; VAR_53++)
  FUNC_1(FUNC_7(VAR_53), VAR_47->filter_table[VAR_54++]);
 FUNC_1(VAR_8, FUNC_0(VAR_8) & VAR_9);
 FUNC_1(VAR_6, VAR_48);
}
