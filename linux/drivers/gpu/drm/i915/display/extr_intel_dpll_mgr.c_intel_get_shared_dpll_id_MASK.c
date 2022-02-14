
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_shared_dpll {int dummy; } ;
struct drm_i915_private {size_t num_shared_dpll; struct intel_shared_dpll* shared_dplls; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;


 scalar_t__ FUNC_0 (int) ;

enum intel_dpll_id
FUNC_1(struct drm_i915_private *VAR_0,
    struct intel_shared_dpll *VAR_1)
{
 if (FUNC_0(VAR_1 < VAR_0->shared_dplls||
      VAR_1 > &VAR_0->shared_dplls[VAR_0->num_shared_dpll]))
  return -1;

 return (enum intel_dpll_id) (VAR_1 - VAR_0->shared_dplls);
}
