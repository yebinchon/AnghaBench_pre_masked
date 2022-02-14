
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_rps {int interrupts_enabled; int work; } ;
struct intel_gt {int irq_lock; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {struct intel_gt gt; TYPE_1__ gt_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct intel_gt*,int ) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*,unsigned int) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct drm_i915_private *VAR_2)
{
 struct intel_rps *VAR_3 = &VAR_2->gt_pm.rps;
 struct intel_gt *VAR_4 = &VAR_2->gt;

 if (!FUNC_2(VAR_3->interrupts_enabled))
  return;

 FUNC_9(&VAR_4->irq_lock);
 VAR_3->interrupts_enabled = 0;

 FUNC_0(VAR_0, FUNC_7(VAR_2, ~0u));

 FUNC_5(VAR_4, VAR_1);

 FUNC_10(&VAR_4->irq_lock);
 FUNC_8(VAR_2);






 FUNC_3(&VAR_3->work);
 if (FUNC_1(VAR_2) >= 11)
  FUNC_4(VAR_2);
 else
  FUNC_6(VAR_2);
}
