
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_shared_dpll {int dummy; } ;
struct drm_i915_private {struct intel_shared_dpll* shared_dplls; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;



struct intel_shared_dpll *
FUNC_0(struct drm_i915_private *VAR_0,
       enum intel_dpll_id VAR_1)
{
 return &VAR_0->shared_dplls[VAR_1];
}
