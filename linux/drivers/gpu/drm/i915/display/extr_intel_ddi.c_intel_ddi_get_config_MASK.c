
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int dev; } ;
struct intel_encoder {scalar_t__ type; TYPE_1__ base; } ;
struct TYPE_12__ {int drm; int hdmi; int spd; int avi; int enable; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {TYPE_2__ adjusted_mode; int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; int pipe_bpp; int has_hdmi_sink; int has_infoframe; int hdmi_scrambling; int hdmi_high_tmds_clock_ratio; int lane_count; TYPE_6__ infoframes; int lane_lat_optim_mask; int has_audio; int output_types; TYPE_3__ base; } ;
struct intel_crtc {int dummy; } ;
struct TYPE_10__ {scalar_t__ bpp; } ;
struct TYPE_11__ {TYPE_4__ edp; } ;
struct drm_i915_private {TYPE_5__ vbt; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;




 int VAR_15 ;
 int FUNC_4 (int) ;
 int VAR_16 ;
 int VAR_17 ;





 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct intel_encoder*) ;
 int FUNC_7 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_8 (struct drm_i915_private*,struct intel_crtc_state*) ;
 int FUNC_9 (struct drm_i915_private*,int) ;
 int FUNC_10 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_11 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_12 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_13 (struct intel_encoder*,struct intel_crtc_state*,int ,int *) ;
 struct drm_i915_private* FUNC_14 (int ) ;
 struct intel_crtc* FUNC_15 (int ) ;
 int FUNC_16 (int) ;

void FUNC_17(struct intel_encoder *VAR_21,
     struct intel_crtc_state *VAR_22)
{
 struct drm_i915_private *VAR_23 = FUNC_14(VAR_21->base.dev);
 struct intel_crtc *VAR_24 = FUNC_15(VAR_22->base.crtc);
 enum transcoder VAR_25 = VAR_22->cpu_transcoder;
 u32 VAR_26, VAR_27 = 0;


 if (FUNC_5(FUNC_16(VAR_25)))
  return;

 VAR_26 = FUNC_2(FUNC_4(VAR_25));
 if (VAR_26 & VAR_19)
  VAR_27 |= VAR_4;
 else
  VAR_27 |= VAR_2;
 if (VAR_26 & VAR_20)
  VAR_27 |= VAR_5;
 else
  VAR_27 |= VAR_3;

 VAR_22->base.adjusted_mode.flags |= VAR_27;

 switch (VAR_26 & VAR_15) {
 case 134:
  VAR_22->pipe_bpp = 18;
  break;
 case 133:
  VAR_22->pipe_bpp = 24;
  break;
 case 136:
  VAR_22->pipe_bpp = 30;
  break;
 case 135:
  VAR_22->pipe_bpp = 36;
  break;
 default:
  break;
 }

 switch (VAR_26 & VAR_18) {
 case 128:
  VAR_22->has_hdmi_sink = 1;

  VAR_22->infoframes.enable |=
   FUNC_11(VAR_21, VAR_22);

  if (VAR_22->infoframes.enable)
   VAR_22->has_infoframe = 1;

  if (VAR_26 & VAR_16)
   VAR_22->hdmi_scrambling = 1;
  if (VAR_26 & VAR_17)
   VAR_22->hdmi_high_tmds_clock_ratio = 1;

 case 130:
  VAR_22->output_types |= FUNC_0(VAR_14);
  VAR_22->lane_count = 4;
  break;
 case 129:
  VAR_22->output_types |= FUNC_0(VAR_10);
  break;
 case 131:
  if (VAR_21->type == VAR_13)
   VAR_22->output_types |= FUNC_0(VAR_13);
  else
   VAR_22->output_types |= FUNC_0(VAR_11);
  VAR_22->lane_count =
   ((VAR_26 & VAR_0) >> VAR_1) + 1;
  FUNC_10(VAR_24, VAR_22);
  break;
 case 132:
  VAR_22->output_types |= FUNC_0(VAR_12);
  VAR_22->lane_count =
   ((VAR_26 & VAR_0) >> VAR_1) + 1;
  FUNC_10(VAR_24, VAR_22);
  break;
 default:
  break;
 }

 VAR_22->has_audio =
  FUNC_9(VAR_23, VAR_25);

 if (VAR_21->type == VAR_13 && VAR_23->vbt.edp.bpp &&
     VAR_22->pipe_bpp > VAR_23->vbt.edp.bpp) {
  FUNC_1("pipe has %d bpp for eDP panel, overriding BIOS-provided max %d bpp\n",
         VAR_22->pipe_bpp, VAR_23->vbt.edp.bpp);
  VAR_23->vbt.edp.bpp = VAR_22->pipe_bpp;
 }

 FUNC_7(VAR_21, VAR_22);

 if (FUNC_3(VAR_23))
  VAR_22->lane_lat_optim_mask =
   FUNC_6(VAR_21);

 FUNC_8(VAR_23, VAR_22);

 FUNC_12(VAR_21, VAR_22);

 FUNC_13(VAR_21, VAR_22,
        VAR_6,
        &VAR_22->infoframes.avi);
 FUNC_13(VAR_21, VAR_22,
        VAR_8,
        &VAR_22->infoframes.spd);
 FUNC_13(VAR_21, VAR_22,
        VAR_9,
        &VAR_22->infoframes.hdmi);
 FUNC_13(VAR_21, VAR_22,
        VAR_7,
        &VAR_22->infoframes.drm);
}
