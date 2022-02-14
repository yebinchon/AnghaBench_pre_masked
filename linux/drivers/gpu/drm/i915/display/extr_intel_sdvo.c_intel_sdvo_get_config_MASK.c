
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int dtd_flags; } ;
struct intel_sdvo_dtd {TYPE_2__ part2; } ;
struct intel_sdvo {int sdvo_reg; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_7__ {int flags; int crtc_clock; } ;
struct TYPE_8__ {TYPE_3__ adjusted_mode; } ;
struct intel_crtc_state {int pixel_multiplier; int port_clock; int limited_color_range; int has_audio; int has_hdmi_sink; TYPE_4__ base; int quirks; int output_types; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int,char*,int,int) ;
 int FUNC_6 (struct intel_sdvo*,struct intel_crtc_state*) ;
 int FUNC_7 (struct intel_sdvo*,struct intel_sdvo_dtd*) ;
 scalar_t__ FUNC_8 (struct intel_sdvo*,int ,int*,int) ;
 struct drm_i915_private* FUNC_9 (struct drm_device*) ;
 struct intel_sdvo* FUNC_10 (struct intel_encoder*) ;

__attribute__((used)) static void FUNC_11(struct intel_encoder *VAR_17,
      struct intel_crtc_state *VAR_18)
{
 struct drm_device *VAR_19 = VAR_17->base.dev;
 struct drm_i915_private *VAR_20 = FUNC_9(VAR_19);
 struct intel_sdvo *VAR_21 = FUNC_10(VAR_17);
 struct intel_sdvo_dtd VAR_22;
 int VAR_23 = 0;
 int VAR_24;
 u32 VAR_25 = 0, VAR_26;
 u8 VAR_27;
 bool VAR_28;

 VAR_18->output_types |= FUNC_0(VAR_7);

 VAR_26 = FUNC_2(VAR_21->sdvo_reg);

 VAR_28 = FUNC_7(VAR_21, &VAR_22);
 if (!VAR_28) {




  FUNC_1("failed to retrieve SDVO DTD\n");
  VAR_18->quirks |= VAR_8;
 } else {
  if (VAR_22.part2.dtd_flags & VAR_4)
   VAR_25 |= VAR_2;
  else
   VAR_25 |= VAR_0;

  if (VAR_22.part2.dtd_flags & VAR_5)
   VAR_25 |= VAR_3;
  else
   VAR_25 |= VAR_1;
 }

 VAR_18->base.adjusted_mode.flags |= VAR_25;
 if (FUNC_3(VAR_20) || FUNC_4(VAR_20)) {
  VAR_18->pixel_multiplier =
   ((VAR_26 & VAR_15)
    >> VAR_16) + 1;
 }

 VAR_24 = VAR_18->port_clock;

 if (VAR_18->pixel_multiplier)
  VAR_24 /= VAR_18->pixel_multiplier;

 VAR_18->base.adjusted_mode.crtc_clock = VAR_24;


 if (FUNC_8(VAR_21, VAR_12,
     &VAR_27, 1)) {
  switch (VAR_27) {
  case 130:
   VAR_23 = 1;
   break;
  case 129:
   VAR_23 = 2;
   break;
  case 128:
   VAR_23 = 4;
   break;
  }
 }

 FUNC_5(VAR_23 != VAR_18->pixel_multiplier,
      "SDVO pixel multiplier mismatch, port: %i, encoder: %i\n",
      VAR_18->pixel_multiplier, VAR_23);

 if (VAR_26 & VAR_6)
  VAR_18->limited_color_range = 1;

 if (FUNC_8(VAR_21, VAR_11,
     &VAR_27, 1)) {
  u8 VAR_29 = VAR_9 | VAR_10;

  if ((VAR_27 & VAR_29) == VAR_29)
   VAR_18->has_audio = 1;
 }

 if (FUNC_8(VAR_21, VAR_13,
     &VAR_27, 1)) {
  if (VAR_27 == VAR_14)
   VAR_18->has_hdmi_sink = 1;
 }

 FUNC_6(VAR_21, VAR_18);
}
