
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct intel_encoder {int port; } ;
struct TYPE_8__ {int force_thru; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_2__ adjusted_mode; int crtc; } ;
struct intel_crtc_state {int cpu_transcoder; int pipe_bpp; int fdi_lanes; int lane_count; scalar_t__ hdmi_high_tmds_clock_ratio; scalar_t__ hdmi_scrambling; scalar_t__ has_hdmi_sink; TYPE_4__ pch_pfit; TYPE_3__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int) ;
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
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct intel_crtc_state const*,int ) ;
 struct intel_encoder* FUNC_8 (struct intel_crtc*) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 struct intel_crtc* FUNC_10 (int ) ;

void FUNC_11(const struct intel_crtc_state *VAR_24)
{
 struct intel_crtc *VAR_25 = FUNC_10(VAR_24->base.crtc);
 struct intel_encoder *VAR_26 = FUNC_8(VAR_25);
 struct drm_i915_private *VAR_27 = FUNC_9(VAR_25->base.dev);
 enum pipe VAR_28 = VAR_25->pipe;
 enum transcoder VAR_29 = VAR_24->cpu_transcoder;
 enum port VAR_30 = VAR_26->port;
 u32 VAR_31;


 VAR_31 = VAR_14;
 if (FUNC_3(VAR_27) >= 12)
  VAR_31 |= FUNC_4(VAR_30);
 else
  VAR_31 |= FUNC_6(VAR_30);

 switch (VAR_24->pipe_bpp) {
 case 18:
  VAR_31 |= VAR_8;
  break;
 case 24:
  VAR_31 |= VAR_9;
  break;
 case 30:
  VAR_31 |= VAR_6;
  break;
 case 36:
  VAR_31 |= VAR_7;
  break;
 default:
  FUNC_0();
 }

 if (VAR_24->base.adjusted_mode.flags & VAR_1)
  VAR_31 |= VAR_23;
 if (VAR_24->base.adjusted_mode.flags & VAR_0)
  VAR_31 |= VAR_22;

 if (VAR_29 == VAR_5) {
  switch (VAR_28) {
  case 130:




   if (VAR_24->pch_pfit.force_thru)
    VAR_31 |= VAR_11;
   else
    VAR_31 |= VAR_10;
   break;
  case 129:
   VAR_31 |= VAR_12;
   break;
  case 128:
   VAR_31 |= VAR_13;
   break;
  default:
   FUNC_0();
   break;
  }
 }

 if (FUNC_7(VAR_24, VAR_4)) {
  if (VAR_24->has_hdmi_sink)
   VAR_31 |= VAR_21;
  else
   VAR_31 |= VAR_19;

  if (VAR_24->hdmi_scrambling)
   VAR_31 |= VAR_15;
  if (VAR_24->hdmi_high_tmds_clock_ratio)
   VAR_31 |= VAR_16;
 } else if (FUNC_7(VAR_24, VAR_2)) {
  VAR_31 |= VAR_20;
  VAR_31 |= (VAR_24->fdi_lanes - 1) << 1;
 } else if (FUNC_7(VAR_24, VAR_3)) {
  VAR_31 |= VAR_17;
  VAR_31 |= FUNC_1(VAR_24->lane_count);
 } else {
  VAR_31 |= VAR_18;
  VAR_31 |= FUNC_1(VAR_24->lane_count);
 }

 FUNC_2(FUNC_5(VAR_29), VAR_31);
}
