
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_rps {int interrupts_enabled; int pm_iir; } ;
struct intel_gt {int irq_lock; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {int pm_rps_events; TYPE_1__ gt_pm; struct intel_gt gt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_gt*,int ,int ) ;
 int FUNC_5 (struct intel_gt*,int) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct drm_i915_private *VAR_1)
{
 struct intel_gt *VAR_2 = &VAR_1->gt;
 struct intel_rps *VAR_3 = &VAR_1->gt_pm.rps;

 if (FUNC_2(VAR_3->interrupts_enabled))
  return;

 FUNC_7(&VAR_2->irq_lock);
 FUNC_3(VAR_3->pm_iir);

 if (FUNC_1(VAR_1) >= 11)
  FUNC_3(FUNC_4(VAR_2, 0, VAR_0));
 else
  FUNC_3(FUNC_0(FUNC_6(VAR_1)) & VAR_1->pm_rps_events);

 VAR_3->interrupts_enabled = 1;
 FUNC_5(VAR_2, VAR_1->pm_rps_events);

 FUNC_8(&VAR_2->irq_lock);
}
