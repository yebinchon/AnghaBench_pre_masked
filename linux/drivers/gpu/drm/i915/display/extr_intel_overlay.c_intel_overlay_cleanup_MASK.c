
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_overlay {int last_flip; int reg_bo; int active; } ;
struct drm_i915_private {int overlay; } ;


 int FUNC_0 (int ) ;
 struct intel_overlay* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_overlay*) ;

void FUNC_5(struct drm_i915_private *VAR_0)
{
 struct intel_overlay *VAR_1;

 VAR_1 = FUNC_1(&VAR_0->overlay);
 if (!VAR_1)
  return;






 FUNC_0(VAR_1->active);

 FUNC_3(VAR_1->reg_bo);
 FUNC_2(&VAR_1->last_flip);

 FUNC_4(VAR_1);
}
