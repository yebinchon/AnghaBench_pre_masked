
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_shared_dpll {TYPE_1__* info; } ;
struct intel_dpll_hw_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
struct TYPE_2__ {scalar_t__ id; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*,struct intel_shared_dpll*,struct intel_dpll_hw_state*,int ) ;

__attribute__((used)) static bool FUNC_4(struct drm_i915_private *VAR_1,
       struct intel_shared_dpll *VAR_2,
       struct intel_dpll_hw_state *VAR_3)
{
 i915_reg_t VAR_4 = FUNC_0(VAR_2->info->id);

 if (FUNC_1(VAR_1) &&
     VAR_2->info->id == VAR_0) {
  VAR_4 = FUNC_2(0);
 }

 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
}
