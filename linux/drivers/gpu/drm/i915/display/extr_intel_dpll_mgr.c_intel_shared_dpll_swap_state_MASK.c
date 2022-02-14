
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_shared_dpll_state {int dummy; } ;
struct intel_shared_dpll {int state; } ;
struct TYPE_2__ {int dev; } ;
struct intel_atomic_state {int dpll_set; struct intel_shared_dpll_state* shared_dpll; TYPE_1__ base; } ;
struct drm_i915_private {int num_shared_dpll; struct intel_shared_dpll* shared_dplls; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;


 int FUNC_0 (int ,struct intel_shared_dpll_state) ;
 struct drm_i915_private* FUNC_1 (int ) ;

void FUNC_2(struct intel_atomic_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_1(VAR_0->base.dev);
 struct intel_shared_dpll_state *VAR_2 = VAR_0->shared_dpll;
 enum intel_dpll_id VAR_3;

 if (!VAR_0->dpll_set)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_shared_dpll; VAR_3++) {
  struct intel_shared_dpll *VAR_4 =
   &VAR_1->shared_dplls[VAR_3];

  FUNC_0(VAR_4->state, VAR_2[VAR_3]);
 }
}
