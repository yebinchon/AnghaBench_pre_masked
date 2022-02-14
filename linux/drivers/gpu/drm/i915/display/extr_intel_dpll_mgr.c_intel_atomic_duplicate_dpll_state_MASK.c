
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_shared_dpll_state {int dummy; } ;
struct intel_shared_dpll {struct intel_shared_dpll_state state; } ;
struct drm_i915_private {int num_shared_dpll; struct intel_shared_dpll* shared_dplls; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;



__attribute__((used)) static void
FUNC_0(struct drm_i915_private *VAR_0,
      struct intel_shared_dpll_state *VAR_1)
{
 enum intel_dpll_id VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->num_shared_dpll; VAR_2++) {
  struct intel_shared_dpll *VAR_3 = &VAR_0->shared_dplls[VAR_2];

  VAR_1[VAR_2] = VAR_3->state;
 }
}
