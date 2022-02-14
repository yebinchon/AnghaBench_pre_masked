
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int hdmi_reg; } ;
struct TYPE_8__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_4__ base; } ;
struct TYPE_7__ {int enable; int hdmi; int spd; int avi; } ;
struct TYPE_5__ {int flags; int crtc_clock; } ;
struct TYPE_6__ {TYPE_1__ adjusted_mode; } ;
struct intel_crtc_state {int has_hdmi_sink; int has_infoframe; int has_audio; int limited_color_range; int port_clock; int pixel_multiplier; int lane_count; TYPE_3__ infoframes; TYPE_2__ base; int output_types; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct intel_hdmi* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_5 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_6 (struct intel_encoder*,struct intel_crtc_state*,int ,int *) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_15,
      struct intel_crtc_state *VAR_16)
{
 struct intel_hdmi *VAR_17 = FUNC_3(&VAR_15->base);
 struct drm_device *VAR_18 = VAR_15->base.dev;
 struct drm_i915_private *VAR_19 = FUNC_7(VAR_18);
 u32 VAR_20, VAR_21 = 0;
 int VAR_22;

 VAR_16->output_types |= FUNC_0(VAR_11);

 VAR_20 = FUNC_2(VAR_17->hdmi_reg);

 if (VAR_20 & VAR_13)
  VAR_21 |= VAR_2;
 else
  VAR_21 |= VAR_0;

 if (VAR_20 & VAR_14)
  VAR_21 |= VAR_3;
 else
  VAR_21 |= VAR_1;

 if (VAR_20 & VAR_10)
  VAR_16->has_hdmi_sink = 1;

 VAR_16->infoframes.enable |=
  FUNC_4(VAR_15, VAR_16);

 if (VAR_16->infoframes.enable)
  VAR_16->has_infoframe = 1;

 if (VAR_20 & VAR_4)
  VAR_16->has_audio = 1;

 if (!FUNC_1(VAR_19) &&
     VAR_20 & VAR_6)
  VAR_16->limited_color_range = 1;

 VAR_16->base.adjusted_mode.flags |= VAR_21;

 if ((VAR_20 & VAR_12) == VAR_5)
  VAR_22 = VAR_16->port_clock * 2 / 3;
 else
  VAR_22 = VAR_16->port_clock;

 if (VAR_16->pixel_multiplier)
  VAR_22 /= VAR_16->pixel_multiplier;

 VAR_16->base.adjusted_mode.crtc_clock = VAR_22;

 VAR_16->lane_count = 4;

 FUNC_5(VAR_15, VAR_16);

 FUNC_6(VAR_15, VAR_16,
        VAR_7,
        &VAR_16->infoframes.avi);
 FUNC_6(VAR_15, VAR_16,
        VAR_8,
        &VAR_16->infoframes.spd);
 FUNC_6(VAR_15, VAR_16,
        VAR_9,
        &VAR_16->infoframes.hdmi);
}
