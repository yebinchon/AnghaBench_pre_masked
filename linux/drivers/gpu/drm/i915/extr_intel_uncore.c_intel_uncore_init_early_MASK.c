
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int * debug; int * rpm; struct drm_i915_private* i915; int lock; } ;
struct drm_i915_private {int mmio_debug; int runtime_pm; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct intel_uncore *VAR_0,
        struct drm_i915_private *VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->i915 = VAR_1;
 VAR_0->rpm = &VAR_1->runtime_pm;
 VAR_0->debug = &VAR_1->mmio_debug;
}
