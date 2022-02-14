
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct intel_lspcon {scalar_t__ active; } ;
struct TYPE_13__ {int dev; } ;
struct intel_encoder {int port; TYPE_6__ base; } ;
struct intel_dp {int has_audio; int desc; struct intel_connector* attached_connector; } ;
struct intel_digital_connector_state {scalar_t__ force_audio; } ;
struct TYPE_9__ {int compressed_bpp; scalar_t__ compression_enable; } ;
struct drm_display_mode {int flags; int crtc_clock; } ;
struct TYPE_8__ {int crtc; struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int has_pch_encoder; int has_drrs; int has_audio; int fec_enable; int dp_m2_n2; int port_clock; int lane_count; int dp_m_n; int pipe_bpp; TYPE_2__ dsc_params; int limited_color_range; int output_format; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct TYPE_12__ {TYPE_4__* downclock_mode; scalar_t__ fixed_mode; } ;
struct intel_connector {TYPE_5__ panel; int base; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct drm_i915_private {TYPE_3__ drrs; } ;
struct drm_connector_state {int scaling_mode; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_11__ {int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *,int ) ;
 struct intel_dp* FUNC_6 (TYPE_6__*) ;
 struct intel_lspcon* FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*) ;
 scalar_t__ FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_11 (struct intel_crtc_state*,int ) ;
 int FUNC_12 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_13 (struct intel_dp*,int *,struct intel_crtc_state*) ;
 int FUNC_14 (scalar_t__,struct drm_display_mode*) ;
 int FUNC_15 (struct intel_crtc*,struct intel_crtc_state*,int ) ;
 int FUNC_16 (int,int ,int ,int ,int *,int,int ) ;
 int FUNC_17 (struct intel_crtc*,struct intel_crtc_state*,int ) ;
 int FUNC_18 (struct intel_dp*,struct intel_crtc_state*) ;
 int FUNC_19 (int *,struct intel_crtc_state*) ;
 int FUNC_20 (struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_21 (int ) ;
 struct intel_crtc* FUNC_22 (int ) ;
 struct intel_digital_connector_state* FUNC_23 (struct drm_connector_state*) ;

int
FUNC_24(struct intel_encoder *VAR_10,
   struct intel_crtc_state *VAR_11,
   struct drm_connector_state *VAR_12)
{
 struct drm_i915_private *VAR_13 = FUNC_21(VAR_10->base.dev);
 struct drm_display_mode *VAR_14 = &VAR_11->base.adjusted_mode;
 struct intel_dp *VAR_15 = FUNC_6(&VAR_10->base);
 struct intel_lspcon *VAR_16 = FUNC_7(&VAR_10->base);
 enum port VAR_17 = VAR_10->port;
 struct intel_crtc *VAR_18 = FUNC_22(VAR_11->base.crtc);
 struct intel_connector *VAR_19 = VAR_15->attached_connector;
 struct intel_digital_connector_state *VAR_20 =
  FUNC_23(VAR_12);
 bool VAR_21 = FUNC_5(&VAR_15->desc,
        VAR_0);
 int VAR_22 = 0, VAR_23;

 if (FUNC_2(VAR_13) && !FUNC_0(VAR_13) && VAR_17 != VAR_8)
  VAR_11->has_pch_encoder = 1;

 VAR_11->output_format = VAR_7;
 if (VAR_16->active)
  FUNC_19(&VAR_19->base, VAR_11);
 else
  VAR_22 = FUNC_13(VAR_15, &VAR_19->base,
            VAR_11);

 if (VAR_22)
  return VAR_22;

 VAR_11->has_drrs = 0;
 if (FUNC_4(VAR_13) || VAR_17 == VAR_8)
  VAR_11->has_audio = 0;
 else if (VAR_20->force_audio == VAR_5)
  VAR_11->has_audio = VAR_15->has_audio;
 else
  VAR_11->has_audio = VAR_20->force_audio == VAR_6;

 if (FUNC_9(VAR_15) && VAR_19->panel.fixed_mode) {
  FUNC_14(VAR_19->panel.fixed_mode,
           VAR_14);

  if (FUNC_3(VAR_13) >= 9) {
   VAR_22 = FUNC_20(VAR_11);
   if (VAR_22)
    return VAR_22;
  }

  if (FUNC_1(VAR_13))
   FUNC_15(VAR_18, VAR_11,
       VAR_12->scaling_mode);
  else
   FUNC_17(VAR_18, VAR_11,
      VAR_12->scaling_mode);
 }

 if (VAR_14->flags & VAR_2)
  return -VAR_4;

 if (FUNC_1(VAR_13) &&
     VAR_14->flags & VAR_3)
  return -VAR_4;

 if (VAR_14->flags & VAR_1)
  return -VAR_4;

 VAR_22 = FUNC_8(VAR_10, VAR_11, VAR_12);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_11->limited_color_range =
  FUNC_10(VAR_11, VAR_12);

 if (VAR_11->dsc_params.compression_enable)
  VAR_23 = VAR_11->dsc_params.compressed_bpp;
 else
  VAR_23 = FUNC_11(VAR_11, VAR_11->pipe_bpp);

 FUNC_16(VAR_23,
          VAR_11->lane_count,
          VAR_14->crtc_clock,
          VAR_11->port_clock,
          &VAR_11->dp_m_n,
          VAR_21, VAR_11->fec_enable);

 if (VAR_19->panel.downclock_mode != ((void*)0) &&
  VAR_13->drrs.type == VAR_9) {
   VAR_11->has_drrs = 1;
   FUNC_16(VAR_23,
            VAR_11->lane_count,
            VAR_19->panel.downclock_mode->clock,
            VAR_11->port_clock,
            &VAR_11->dp_m2_n2,
            VAR_21, VAR_11->fec_enable);
 }

 if (!FUNC_0(VAR_13))
  FUNC_12(VAR_10, VAR_11);

 FUNC_18(VAR_15, VAR_11);

 return 0;
}
