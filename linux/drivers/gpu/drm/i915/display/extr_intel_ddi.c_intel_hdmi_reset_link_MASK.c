
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct intel_hdmi {int ddc_bus; struct intel_connector* attached_connector; } ;
struct TYPE_14__ {int dev; } ;
struct intel_encoder {TYPE_7__ base; } ;
struct TYPE_11__ {int active; } ;
struct intel_crtc_state {int hdmi_high_tmds_clock_ratio; int hdmi_scrambling; TYPE_4__ base; } ;
struct TYPE_13__ {int state; int mutex; } ;
struct intel_crtc {TYPE_6__ base; } ;
struct TYPE_10__ {scalar_t__ status; struct drm_connector_state* state; } ;
struct intel_connector {TYPE_3__ base; } ;
struct i2c_adapter {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_8__ {int connection_mutex; } ;
struct TYPE_9__ {TYPE_1__ mode_config; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct drm_connector_state {TYPE_5__* commit; int crtc; } ;
struct TYPE_12__ {int hw_done; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,struct drm_modeset_acquire_ctx*) ;
 int FUNC_3 (struct i2c_adapter*,int ,int*) ;
 struct intel_hdmi* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (struct intel_crtc_state*,int ) ;
 struct i2c_adapter* FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (TYPE_6__*,struct drm_modeset_acquire_ctx*) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_crtc* FUNC_9 (int ) ;
 struct intel_crtc_state* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct intel_encoder *VAR_5,
     struct drm_modeset_acquire_ctx *VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_8(VAR_5->base.dev);
 struct intel_hdmi *VAR_8 = FUNC_4(&VAR_5->base);
 struct intel_connector *VAR_9 = VAR_8->attached_connector;
 struct i2c_adapter *VAR_10 =
  FUNC_6(VAR_7, VAR_8->ddc_bus);
 struct drm_connector_state *VAR_11;
 struct intel_crtc_state *VAR_12;
 struct intel_crtc *VAR_13;
 u8 VAR_14;
 int VAR_15;

 if (!VAR_9 || VAR_9->base.status != VAR_4)
  return 0;

 VAR_15 = FUNC_2(&VAR_7->drm.mode_config.connection_mutex,
          VAR_6);
 if (VAR_15)
  return VAR_15;

 VAR_11 = VAR_9->base.state;

 VAR_13 = FUNC_9(VAR_11->crtc);
 if (!VAR_13)
  return 0;

 VAR_15 = FUNC_2(&VAR_13->base.mutex, VAR_6);
 if (VAR_15)
  return VAR_15;

 VAR_12 = FUNC_10(VAR_13->base.state);

 FUNC_1(!FUNC_5(VAR_12, VAR_0));

 if (!VAR_12->base.active)
  return 0;

 if (!VAR_12->hdmi_high_tmds_clock_ratio &&
     !VAR_12->hdmi_scrambling)
  return 0;

 if (VAR_11->commit &&
     !FUNC_11(&VAR_11->commit->hw_done))
  return 0;

 VAR_15 = FUNC_3(VAR_10, VAR_3, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_0("Failed to read TMDS config: %d\n", VAR_15);
  return 0;
 }

 if (!!(VAR_14 & VAR_2) ==
     VAR_12->hdmi_high_tmds_clock_ratio &&
     !!(VAR_14 & VAR_1) ==
     VAR_12->hdmi_scrambling)
  return 0;
 return FUNC_7(&VAR_13->base, VAR_6);
}
