
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ enabled; struct intel_dp* dp; } ;
struct drm_i915_private {TYPE_1__ psr; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct intel_dp *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_1(VAR_0);
 bool VAR_2;

 if (!FUNC_0(VAR_1) || !FUNC_2(VAR_0))
  return 0;

 FUNC_3(&VAR_1->psr.lock);
 VAR_2 = (VAR_1->psr.dp == VAR_0 && VAR_1->psr.enabled);
 FUNC_4(&VAR_1->psr.lock);

 return VAR_2;
}
