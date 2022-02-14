
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct intel_crtc_state {int has_psr; } ;
struct TYPE_2__ {int work; int lock; } ;
struct drm_i915_private {TYPE_1__ psr; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct intel_dp *VAR_0,
         const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0);

 if (!VAR_1->has_psr)
  return;

 if (FUNC_1(!FUNC_0(VAR_2)))
  return;

 FUNC_5(&VAR_2->psr.lock);

 FUNC_4(VAR_0);

 FUNC_6(&VAR_2->psr.lock);
 FUNC_2(&VAR_2->psr.work);
}
