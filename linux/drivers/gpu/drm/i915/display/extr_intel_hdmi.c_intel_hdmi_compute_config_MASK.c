
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_hdmi {int has_audio; scalar_t__ has_hdmi_sink; } ;
struct TYPE_9__ {int dev; } ;
struct intel_encoder {TYPE_4__ base; } ;
struct intel_digital_connector_state {scalar_t__ force_audio; scalar_t__ broadcast_rgb; } ;
struct drm_display_mode {int crtc_clock; int flags; int picture_aspect_ratio; } ;
struct TYPE_7__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int has_hdmi_sink; int has_infoframe; int limited_color_range; int pixel_multiplier; int has_pch_encoder; int has_audio; int port_clock; int pipe_bpp; int lane_count; int hdmi_scrambling; int hdmi_high_tmds_clock_ratio; int bw_constrained; int output_format; TYPE_2__ base; } ;
struct TYPE_8__ {scalar_t__ low_rates; scalar_t__ supported; } ;
struct drm_scdc {TYPE_3__ scrambling; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int picture_aspect_ratio; struct drm_connector* connector; } ;
struct TYPE_6__ {struct drm_scdc scdc; } ;
struct TYPE_10__ {TYPE_1__ hdmi; } ;
struct drm_connector {TYPE_5__ display_info; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct drm_i915_private*) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 (struct drm_display_mode*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,struct drm_display_mode*) ;
 struct intel_hdmi* FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (struct intel_crtc_state*,int) ;
 scalar_t__ FUNC_10 (struct intel_hdmi*,int,int,int) ;
 int FUNC_11 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_12 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_13 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_14 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_15 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_16 (struct drm_connector*,struct intel_crtc_state*,int*,int*,int*) ;
 struct drm_i915_private* FUNC_17 (int ) ;
 struct intel_digital_connector_state* FUNC_18 (struct drm_connector_state*) ;

int FUNC_19(struct intel_encoder *VAR_11,
         struct intel_crtc_state *VAR_12,
         struct drm_connector_state *VAR_13)
{
 struct intel_hdmi *VAR_14 = FUNC_8(&VAR_11->base);
 struct drm_i915_private *VAR_15 = FUNC_17(VAR_11->base.dev);
 struct drm_display_mode *VAR_16 = &VAR_12->base.adjusted_mode;
 struct drm_connector *VAR_17 = VAR_13->connector;
 struct drm_scdc *VAR_18 = &VAR_17->display_info.hdmi.scdc;
 struct intel_digital_connector_state *VAR_19 =
  FUNC_18(VAR_13);
 int VAR_20 = VAR_12->base.adjusted_mode.crtc_clock;
 int VAR_21 = VAR_20 * 5 / 4;
 int VAR_22 = VAR_20 * 3 / 2;
 int VAR_23;
 bool VAR_24 = VAR_19->force_audio == VAR_4;

 if (VAR_16->flags & VAR_1)
  return -VAR_2;

 VAR_12->output_format = VAR_9;
 VAR_12->has_hdmi_sink = !VAR_24 && VAR_14->has_hdmi_sink;

 if (VAR_12->has_hdmi_sink)
  VAR_12->has_infoframe = 1;

 if (VAR_19->broadcast_rgb == VAR_7) {

  VAR_12->limited_color_range =
   VAR_12->has_hdmi_sink &&
   FUNC_6(VAR_16) ==
   VAR_6;
 } else {
  VAR_12->limited_color_range =
   VAR_19->broadcast_rgb == VAR_8;
 }

 if (VAR_16->flags & VAR_0) {
  VAR_12->pixel_multiplier = 2;
  VAR_20 *= 2;
  VAR_21 *= 2;
  VAR_22 *= 2;
 }

 if (FUNC_7(&VAR_17->display_info, VAR_16)) {
  if (!FUNC_16(VAR_17, VAR_12,
      &VAR_22, &VAR_21,
      &VAR_20)) {
   FUNC_1("Can't support YCBCR420 output\n");
   return -VAR_2;
  }
 }

 if (FUNC_3(VAR_15) && !FUNC_2(VAR_15))
  VAR_12->has_pch_encoder = 1;

 if (VAR_12->has_hdmi_sink) {
  if (VAR_19->force_audio == VAR_3)
   VAR_12->has_audio = VAR_14->has_audio;
  else
   VAR_12->has_audio =
    VAR_19->force_audio == VAR_5;
 }





 if (FUNC_9(VAR_12, 12) &&
     FUNC_10(VAR_14, VAR_22,
      1, VAR_24) == VAR_10) {
  FUNC_0("picking bpc to 12 for HDMI output\n");
  VAR_23 = 12*3;


  VAR_12->port_clock = VAR_22;
 } else if (FUNC_9(VAR_12, 10) &&
     FUNC_10(VAR_14, VAR_21,
      1, VAR_24) == VAR_10) {
  FUNC_0("picking bpc to 10 for HDMI output\n");
  VAR_23 = 10 * 3;


  VAR_12->port_clock = VAR_21;
 } else {
  FUNC_0("picking bpc to 8 for HDMI output\n");
  VAR_23 = 8*3;

  VAR_12->port_clock = VAR_20;
 }

 if (!VAR_12->bw_constrained) {
  FUNC_0("forcing pipe bpp to %i for HDMI\n", VAR_23);
  VAR_12->pipe_bpp = VAR_23;
 }

 if (FUNC_10(VAR_14, VAR_12->port_clock,
      0, VAR_24) != VAR_10) {
  FUNC_0("unsupported HDMI clock, rejecting mode\n");
  return -VAR_2;
 }


 VAR_16->picture_aspect_ratio = VAR_13->picture_aspect_ratio;

 VAR_12->lane_count = 4;

 if (VAR_18->scrambling.supported && (FUNC_4(VAR_15) >= 10 ||
        FUNC_5(VAR_15))) {
  if (VAR_18->scrambling.low_rates)
   VAR_12->hdmi_scrambling = 1;

  if (VAR_12->port_clock > 340000) {
   VAR_12->hdmi_scrambling = 1;
   VAR_12->hdmi_high_tmds_clock_ratio = 1;
  }
 }

 FUNC_13(VAR_11, VAR_12, VAR_13);

 if (!FUNC_11(VAR_11, VAR_12, VAR_13)) {
  FUNC_0("bad AVI infoframe\n");
  return -VAR_2;
 }

 if (!FUNC_15(VAR_11, VAR_12, VAR_13)) {
  FUNC_0("bad SPD infoframe\n");
  return -VAR_2;
 }

 if (!FUNC_14(VAR_11, VAR_12, VAR_13)) {
  FUNC_0("bad HDMI infoframe\n");
  return -VAR_2;
 }

 if (!FUNC_12(VAR_11, VAR_12, VAR_13)) {
  FUNC_0("bad DRM infoframe\n");
  return -VAR_2;
 }

 return 0;
}
