
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_gt {int irq_lock; } ;
struct TYPE_3__ {scalar_t__ pm_iir; } ;
struct TYPE_4__ {TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_2__ gt_pm; struct intel_gt gt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_gt*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_1)
{
 struct intel_gt *VAR_2 = &VAR_1->gt;

 FUNC_1(&VAR_2->irq_lock);

 while (FUNC_0(VAR_2, 0, VAR_0))
  ;

 VAR_1->gt_pm.rps.pm_iir = 0;

 FUNC_2(&VAR_2->irq_lock);
}
