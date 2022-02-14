
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int display_irqs_enabled; int irq_lock; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_private*) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 FUNC_1(&VAR_0->irq_lock);

 if (!VAR_0->display_irqs_enabled)
  return;

 VAR_0->display_irqs_enabled = 0;

 if (FUNC_0(VAR_0))
  FUNC_2(VAR_0);
}
