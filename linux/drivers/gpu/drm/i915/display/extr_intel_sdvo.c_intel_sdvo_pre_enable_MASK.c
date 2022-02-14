
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct intel_sdvo_in_out_map {scalar_t__ in1; int in0; } ;
struct TYPE_10__ {int sdvo_flags; } ;
struct intel_sdvo_dtd {TYPE_5__ part2; } ;
struct intel_sdvo_connector_state {int dummy; } ;
struct TYPE_8__ {struct drm_display_mode const* fixed_mode; } ;
struct TYPE_9__ {TYPE_3__ panel; } ;
struct intel_sdvo_connector {TYPE_4__ base; } ;
struct intel_sdvo {int dtd_sdvo_flags; scalar_t__ port; int sdvo_reg; int attached_output; } ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_7__ {struct drm_display_mode mode; struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {int pixel_multiplier; scalar_t__ limited_color_range; scalar_t__ has_hdmi_sink; TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;
typedef int in_out ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct intel_sdvo_connector const*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct intel_sdvo_connector const*) ;
 scalar_t__ VAR_1 ;
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
 int FUNC_11 (struct intel_sdvo*) ;
 int VAR_13 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (struct intel_sdvo_dtd*,struct drm_display_mode const*) ;
 int FUNC_16 (struct intel_sdvo*,struct intel_crtc_state const*) ;
 int FUNC_17 (struct intel_sdvo*,int) ;
 int FUNC_18 (struct intel_sdvo*,int ) ;
 int FUNC_19 (struct intel_sdvo*,int ) ;
 int FUNC_20 (struct intel_sdvo*,struct intel_sdvo_dtd*) ;
 int FUNC_21 (struct intel_sdvo*,struct intel_sdvo_dtd*) ;
 int FUNC_22 (struct intel_sdvo*) ;
 int FUNC_23 (struct intel_sdvo*,int ) ;
 int FUNC_24 (struct intel_sdvo*,struct drm_connector_state const*) ;
 int FUNC_25 (struct intel_sdvo*,int ,struct intel_sdvo_in_out_map*,int) ;
 int FUNC_26 (struct intel_sdvo*,struct intel_sdvo_connector_state const*) ;
 int FUNC_27 (struct intel_sdvo*,int) ;
 struct drm_i915_private* FUNC_28 (int ) ;
 struct intel_crtc* FUNC_29 (int ) ;
 struct intel_sdvo_connector* FUNC_30 (int ) ;
 struct intel_sdvo_connector_state* FUNC_31 (struct drm_connector_state const*) ;
 struct intel_sdvo* FUNC_32 (struct intel_encoder*) ;

__attribute__((used)) static void FUNC_33(struct intel_encoder *VAR_17,
      const struct intel_crtc_state *VAR_18,
      const struct drm_connector_state *VAR_19)
{
 struct drm_i915_private *VAR_20 = FUNC_28(VAR_17->base.dev);
 struct intel_crtc *VAR_21 = FUNC_29(VAR_18->base.crtc);
 const struct drm_display_mode *VAR_22 = &VAR_18->base.adjusted_mode;
 const struct intel_sdvo_connector_state *VAR_23 =
  FUNC_31(VAR_19);
 const struct intel_sdvo_connector *VAR_24 =
  FUNC_30(VAR_19->connector);
 const struct drm_display_mode *VAR_25 = &VAR_18->base.mode;
 struct intel_sdvo *VAR_26 = FUNC_32(VAR_17);
 u32 VAR_27;
 struct intel_sdvo_in_out_map VAR_28;
 struct intel_sdvo_dtd VAR_29, VAR_30;
 int VAR_31;

 FUNC_26(VAR_26, VAR_23);
 VAR_28.in0 = VAR_26->attached_output;
 VAR_28.in1 = 0;

 FUNC_25(VAR_26,
        VAR_8,
        &VAR_28, sizeof(VAR_28));


 if (!FUNC_23(VAR_26,
       VAR_26->attached_output))
  return;


 if (FUNC_8(VAR_24))
  FUNC_15(&VAR_30,
          VAR_24->base.panel.fixed_mode);
 else
  FUNC_15(&VAR_30, VAR_25);
 if (!FUNC_21(VAR_26, &VAR_30))
  FUNC_0("Setting output timings on %s failed\n",
    FUNC_11(VAR_26));


 if (!FUNC_22(VAR_26))
  return;

 if (VAR_18->has_hdmi_sink) {
  FUNC_19(VAR_26, VAR_11);
  FUNC_18(VAR_26,
        VAR_9);
  FUNC_16(VAR_26, VAR_18);
 } else
  FUNC_19(VAR_26, VAR_10);

 if (FUNC_10(VAR_24) &&
     !FUNC_24(VAR_26, VAR_19))
  return;

 FUNC_15(&VAR_29, VAR_22);

 if (FUNC_10(VAR_24) || FUNC_8(VAR_24))
  VAR_29.part2.sdvo_flags = VAR_26->dtd_sdvo_flags;
 if (!FUNC_20(VAR_26, &VAR_29))
  FUNC_0("Setting input timings on %s failed\n",
    FUNC_11(VAR_26));

 switch (VAR_18->pixel_multiplier) {
 default:
  FUNC_14(1, "unknown pixel multiplier specified\n");

 case 1: VAR_31 = VAR_5; break;
 case 2: VAR_31 = VAR_6; break;
 case 4: VAR_31 = VAR_7; break;
 }
 if (!FUNC_17(VAR_26, VAR_31))
  return;


 if (FUNC_4(VAR_20) >= 4) {


  VAR_27 = VAR_16 | VAR_12;
  if (!FUNC_2(VAR_20) && VAR_18->limited_color_range)
   VAR_27 |= VAR_0;
  if (FUNC_4(VAR_20) < 5)
   VAR_27 |= VAR_4;
 } else {
  VAR_27 = FUNC_3(VAR_26->sdvo_reg);
  if (VAR_26->port == VAR_1)
   VAR_27 &= VAR_2;
  else
   VAR_27 &= VAR_3;
  VAR_27 |= (9 << 19) | VAR_4;
 }

 if (FUNC_1(VAR_20))
  VAR_27 |= FUNC_13(VAR_21->pipe);
 else
  VAR_27 |= FUNC_12(VAR_21->pipe);

 if (FUNC_4(VAR_20) >= 4) {

 } else if (FUNC_6(VAR_20) || FUNC_7(VAR_20) ||
     FUNC_5(VAR_20) || FUNC_9(VAR_20)) {

 } else {
  VAR_27 |= (VAR_18->pixel_multiplier - 1)
   << VAR_14;
 }

 if (VAR_29.part2.sdvo_flags & VAR_13 &&
     FUNC_4(VAR_20) < 5)
  VAR_27 |= VAR_15;
 FUNC_27(VAR_26, VAR_27);
}
