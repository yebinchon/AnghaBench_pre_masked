
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


struct TYPE_14__ {int dev; } ;
struct intel_encoder {TYPE_7__ base; } ;
struct intel_dp {struct intel_connector* attached_connector; } ;
struct TYPE_12__ {int active; } ;
struct intel_crtc_state {scalar_t__ has_pch_encoder; TYPE_5__ base; } ;
struct TYPE_11__ {int state; int mutex; } ;
struct intel_crtc {int pipe; TYPE_4__ base; } ;
struct TYPE_10__ {scalar_t__ status; struct drm_connector_state* state; } ;
struct intel_connector {TYPE_3__ base; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_8__ {int connection_mutex; } ;
struct TYPE_9__ {TYPE_1__ mode_config; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct drm_connector_state {TYPE_6__* commit; int crtc; } ;
struct TYPE_13__ {int hw_done; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct drm_modeset_acquire_ctx*) ;
 struct intel_dp* FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (struct intel_crtc_state*) ;
 int FUNC_4 (struct intel_crtc*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct drm_i915_private*,int ,int) ;
 int FUNC_9 (struct drm_i915_private*,int ,int) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_11 (int ) ;
 struct intel_crtc* FUNC_12 (int ) ;
 struct intel_crtc_state* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct intel_encoder *VAR_1,
     struct drm_modeset_acquire_ctx *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_11(VAR_1->base.dev);
 struct intel_dp *VAR_4 = FUNC_2(&VAR_1->base);
 struct intel_connector *VAR_5 = VAR_4->attached_connector;
 struct drm_connector_state *VAR_6;
 struct intel_crtc_state *VAR_7;
 struct intel_crtc *VAR_8;
 int VAR_9;



 if (!VAR_5 || VAR_5->base.status != VAR_0)
  return 0;

 VAR_9 = FUNC_1(&VAR_3->drm.mode_config.connection_mutex,
          VAR_2);
 if (VAR_9)
  return VAR_9;

 VAR_6 = VAR_5->base.state;

 VAR_8 = FUNC_12(VAR_6->crtc);
 if (!VAR_8)
  return 0;

 VAR_9 = FUNC_1(&VAR_8->base.mutex, VAR_2);
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_13(VAR_8->base.state);

 FUNC_0(!FUNC_3(VAR_7));

 if (!VAR_7->base.active)
  return 0;

 if (VAR_6->commit &&
     !FUNC_14(&VAR_6->commit->hw_done))
  return 0;

 if (!FUNC_5(VAR_4))
  return 0;


 FUNC_8(VAR_3, VAR_8->pipe, 0);
 if (VAR_7->has_pch_encoder)
  FUNC_9(VAR_3,
            FUNC_4(VAR_8), 0);

 FUNC_6(VAR_4);
 FUNC_7(VAR_4);


 FUNC_10(VAR_3, VAR_8->pipe);

 FUNC_8(VAR_3, VAR_8->pipe, 1);
 if (VAR_7->has_pch_encoder)
  FUNC_9(VAR_3,
            FUNC_4(VAR_8), 1);

 return 0;
}
