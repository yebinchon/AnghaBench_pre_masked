
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct link_config_limits {int max_bpp; int min_bpp; int max_lane_count; int min_lane_count; int max_clock; int min_clock; } ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_3__ base; } ;
struct intel_dp_mst_encoder {TYPE_1__* primary; } ;
struct intel_dp {int mst_mgr; } ;
struct intel_digital_connector_state {scalar_t__ force_audio; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int has_pch_encoder; int has_audio; int lane_count; int lane_lat_optim_mask; int limited_color_range; int pipe_bpp; int output_format; TYPE_2__ base; } ;
struct intel_connector {void* port; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;
struct TYPE_4__ {struct intel_dp dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void*) ;
 struct intel_dp_mst_encoder* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct drm_i915_private*,struct intel_crtc_state*) ;
 int FUNC_5 (struct intel_dp*,struct intel_crtc_state*,struct link_config_limits*) ;
 int FUNC_6 (struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_crtc_state*) ;
 int FUNC_10 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*,struct link_config_limits*) ;
 int FUNC_11 (int ,int) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 struct intel_connector* FUNC_13 (int ) ;
 struct intel_digital_connector_state* FUNC_14 (struct drm_connector_state*) ;

__attribute__((used)) static int FUNC_15(struct intel_encoder *VAR_5,
           struct intel_crtc_state *VAR_6,
           struct drm_connector_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_12(VAR_5->base.dev);
 struct intel_dp_mst_encoder *VAR_9 = FUNC_3(&VAR_5->base);
 struct intel_dp *VAR_10 = &VAR_9->primary->dp;
 struct intel_connector *VAR_11 =
  FUNC_13(VAR_7->connector);
 struct intel_digital_connector_state *VAR_12 =
  FUNC_14(VAR_7);
 const struct drm_display_mode *VAR_13 =
  &VAR_6->base.adjusted_mode;
 void *VAR_14 = VAR_11->port;
 struct link_config_limits VAR_15;
 int VAR_16;

 if (VAR_13->flags & VAR_0)
  return -VAR_1;

 VAR_6->output_format = VAR_4;
 VAR_6->has_pch_encoder = 0;

 if (VAR_12->force_audio == VAR_2)
  VAR_6->has_audio =
   FUNC_2(&VAR_10->mst_mgr, VAR_14);
 else
  VAR_6->has_audio =
   VAR_12->force_audio == VAR_3;





 VAR_15.min_clock =
 VAR_15.max_clock = FUNC_8(VAR_10);

 VAR_15.min_lane_count =
 VAR_15.max_lane_count = FUNC_7(VAR_10);

 VAR_15.min_bpp = FUNC_9(VAR_6);
 VAR_15.max_bpp = FUNC_11(VAR_6->pipe_bpp, 24);

 FUNC_5(VAR_10, VAR_6, &VAR_15);

 VAR_16 = FUNC_10(VAR_5, VAR_6,
            VAR_7, &VAR_15);
 if (VAR_16)
  return VAR_16;

 VAR_6->limited_color_range =
  FUNC_6(VAR_6, VAR_7);

 if (FUNC_0(VAR_8))
  VAR_6->lane_lat_optim_mask =
   FUNC_1(VAR_6->lane_count);

 FUNC_4(VAR_8, VAR_6);

 return 0;
}
