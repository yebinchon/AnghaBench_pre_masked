
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
struct TYPE_10__ {int dev; } ;
struct intel_encoder {int port; scalar_t__ type; TYPE_5__ base; } ;
struct intel_dp {int output_reg; } ;
struct TYPE_6__ {int flags; int crtc_clock; } ;
struct TYPE_7__ {TYPE_1__ adjusted_mode; int crtc; } ;
struct intel_crtc_state {int has_audio; int limited_color_range; int lane_count; int port_clock; scalar_t__ pipe_bpp; int dp_m_n; TYPE_2__ base; int output_types; } ;
struct intel_crtc {int pipe; } ;
struct TYPE_8__ {scalar_t__ bpp; } ;
struct TYPE_9__ {TYPE_3__ edp; } ;
struct drm_i915_private {TYPE_4__ vbt; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 struct intel_dp* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (struct intel_crtc*,struct intel_crtc_state*) ;
 scalar_t__ FUNC_9 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 struct intel_crtc* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_18,
    struct intel_crtc_state *VAR_19)
{
 struct drm_i915_private *VAR_20 = FUNC_10(VAR_18->base.dev);
 struct intel_dp *VAR_21 = FUNC_6(&VAR_18->base);
 u32 VAR_22, VAR_23 = 0;
 enum port VAR_24 = VAR_18->port;
 struct intel_crtc *VAR_25 = FUNC_11(VAR_19->base.crtc);

 if (VAR_18->type == VAR_14)
  VAR_19->output_types |= FUNC_0(VAR_14);
 else
  VAR_19->output_types |= FUNC_0(VAR_13);

 VAR_22 = FUNC_3(VAR_21->output_reg);

 VAR_19->has_audio = VAR_22 & VAR_1 && VAR_24 != VAR_15;

 if (FUNC_2(VAR_20) && VAR_24 != VAR_15) {
  u32 VAR_26 = FUNC_3(FUNC_5(VAR_25->pipe));

  if (VAR_26 & VAR_16)
   VAR_23 |= VAR_11;
  else
   VAR_23 |= VAR_9;

  if (VAR_26 & VAR_17)
   VAR_23 |= VAR_12;
  else
   VAR_23 |= VAR_10;
 } else {
  if (VAR_22 & VAR_7)
   VAR_23 |= VAR_11;
  else
   VAR_23 |= VAR_9;

  if (VAR_22 & VAR_8)
   VAR_23 |= VAR_12;
  else
   VAR_23 |= VAR_10;
 }

 VAR_19->base.adjusted_mode.flags |= VAR_23;

 if (FUNC_4(VAR_20) && VAR_22 & VAR_2)
  VAR_19->limited_color_range = 1;

 VAR_19->lane_count =
  ((VAR_22 & VAR_5) >> VAR_6) + 1;

 FUNC_8(VAR_25, VAR_19);

 if (VAR_24 == VAR_15) {
  if ((FUNC_3(VAR_0) & VAR_4) == VAR_3)
   VAR_19->port_clock = 162000;
  else
   VAR_19->port_clock = 270000;
 }

 VAR_19->base.adjusted_mode.crtc_clock =
  FUNC_7(VAR_19->port_clock,
      &VAR_19->dp_m_n);

 if (FUNC_9(VAR_21) && VAR_20->vbt.edp.bpp &&
     VAR_19->pipe_bpp > VAR_20->vbt.edp.bpp) {
  FUNC_1("pipe has %d bpp for eDP panel, overriding BIOS-provided max %d bpp\n",
         VAR_19->pipe_bpp, VAR_20->vbt.edp.bpp);
  VAR_20->vbt.edp.bpp = VAR_19->pipe_bpp;
 }
}
