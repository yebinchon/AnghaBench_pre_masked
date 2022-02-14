
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_scaler {scalar_t__ mode; scalar_t__ in_use; } ;
struct intel_crtc_scaler_state {int scaler_id; struct intel_scaler* scalers; } ;
struct intel_crtc_state {struct intel_crtc_scaler_state scaler_state; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {int num_scalers; size_t pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int* num_scalers; } ;


 TYPE_2__* FUNC_0 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct intel_crtc *VAR_0,
        struct intel_crtc_state *VAR_1)
{
 struct intel_crtc_scaler_state *VAR_2 =
  &VAR_1->scaler_state;
 struct drm_i915_private *VAR_3 = FUNC_1(VAR_0->base.dev);
 int VAR_4;

 VAR_0->num_scalers = FUNC_0(VAR_3)->num_scalers[VAR_0->pipe];
 if (!VAR_0->num_scalers)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_scalers; VAR_4++) {
  struct intel_scaler *VAR_5 = &VAR_2->scalers[VAR_4];

  VAR_5->in_use = 0;
  VAR_5->mode = 0;
 }

 VAR_2->scaler_id = -1;
}
