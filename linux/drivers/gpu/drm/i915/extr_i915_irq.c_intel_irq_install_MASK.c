
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int irq_enabled; TYPE_1__* pdev; } ;
struct TYPE_5__ {int irqs_enabled; } ;
struct drm_i915_private {TYPE_3__ drm; TYPE_2__ runtime_pm; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int,int ,int ,int ,struct drm_i915_private*) ;

int FUNC_4(struct drm_i915_private *VAR_2)
{
 int VAR_3 = VAR_2->drm.pdev->irq;
 int VAR_4;






 VAR_2->runtime_pm.irqs_enabled = 1;

 VAR_2->drm.irq_enabled = 1;

 FUNC_2(VAR_2);

 VAR_4 = FUNC_3(VAR_3, FUNC_0(VAR_2),
     VAR_1, VAR_0, VAR_2);
 if (VAR_4 < 0) {
  VAR_2->drm.irq_enabled = 0;
  return VAR_4;
 }

 FUNC_1(VAR_2);

 return VAR_4;
}
