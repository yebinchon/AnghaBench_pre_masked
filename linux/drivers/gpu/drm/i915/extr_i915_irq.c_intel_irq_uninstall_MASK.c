
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int irqs_enabled; } ;
struct TYPE_5__ {int irq_enabled; TYPE_1__* pdev; } ;
struct drm_i915_private {TYPE_3__ runtime_pm; TYPE_2__ drm; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int,struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 int VAR_1 = VAR_0->drm.pdev->irq;







 if (!VAR_0->drm.irq_enabled)
  return;

 VAR_0->drm.irq_enabled = 0;

 FUNC_2(VAR_0);

 FUNC_0(VAR_1, VAR_0);

 FUNC_1(VAR_0);
 VAR_0->runtime_pm.irqs_enabled = 0;
}
