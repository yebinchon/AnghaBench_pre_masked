
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irqs_enabled; } ;
struct drm_i915_private {TYPE_1__ runtime_pm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;

void FUNC_2(struct drm_i915_private *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->runtime_pm.irqs_enabled = 0;
 FUNC_1(VAR_0);
}
