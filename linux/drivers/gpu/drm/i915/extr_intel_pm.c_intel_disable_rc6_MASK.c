
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_rps {int lock; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0)
{
 struct intel_rps *VAR_1 = &VAR_0->gt_pm.rps;

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock);
}
