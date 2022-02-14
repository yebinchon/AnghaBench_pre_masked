
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scaler_users; } ;
struct intel_crtc_state {TYPE_1__ scaler_state; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_private *VAR_0,
          const struct intel_crtc_state *VAR_1)
{

 if (VAR_1->scaler_state.scaler_users > 0 && FUNC_0(VAR_0))
  return 1;

 return 0;
}
