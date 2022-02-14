
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_shared_dpll {TYPE_2__* info; } ;
struct intel_dpll_hw_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int name; TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* get_hw_state ) (struct drm_i915_private*,struct intel_shared_dpll*,struct intel_dpll_hw_state*) ;} ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,struct intel_shared_dpll*,struct intel_dpll_hw_state*) ;

void FUNC_4(struct drm_i915_private *VAR_0,
   struct intel_shared_dpll *VAR_1,
   bool VAR_2)
{
 bool VAR_3;
 struct intel_dpll_hw_state VAR_4;

 if (FUNC_1(!VAR_1, "asserting DPLL %s with no DPLL\n", FUNC_2(VAR_2)))
  return;

 VAR_3 = VAR_1->info->funcs->get_hw_state(VAR_0, VAR_1, &VAR_4);
 FUNC_0(VAR_3 != VAR_2,
      "%s assertion failure (expected %s, current %s)\n",
   VAR_1->info->name, FUNC_2(VAR_2), FUNC_2(VAR_3));
}
