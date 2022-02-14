
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gt {int uc; int closed_lock; int closed_vma; int irq_lock; int * uncore; struct drm_i915_private* i915; } ;
struct drm_i915_private {int uncore; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_gt*) ;
 int FUNC_2 (struct intel_gt*) ;
 int FUNC_3 (struct intel_gt*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct intel_gt *VAR_0, struct drm_i915_private *VAR_1)
{
 VAR_0->i915 = VAR_1;
 VAR_0->uncore = &VAR_1->uncore;

 FUNC_5(&VAR_0->irq_lock);

 FUNC_0(&VAR_0->closed_vma);
 FUNC_5(&VAR_0->closed_lock);

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_4(&VAR_0->uc);
}
