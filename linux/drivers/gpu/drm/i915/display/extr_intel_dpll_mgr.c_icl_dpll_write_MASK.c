
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dpll_hw_state {int cfgcr1; int cfgcr0; } ;
struct TYPE_3__ {struct intel_dpll_hw_state hw_state; } ;
struct intel_shared_dpll {TYPE_2__* info; TYPE_1__ state; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_4__ {int id; } ;


 int const VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_1,
      struct intel_shared_dpll *VAR_2)
{
 struct intel_dpll_hw_state *VAR_3 = &VAR_2->state.hw_state;
 const enum intel_dpll_id VAR_4 = VAR_2->info->id;
 i915_reg_t VAR_5, VAR_6;

 if (FUNC_3(VAR_1) >= 12) {
  VAR_5 = FUNC_6(VAR_4);
  VAR_6 = FUNC_7(VAR_4);
 } else {
  if (FUNC_4(VAR_1) && VAR_4 == VAR_0) {
   VAR_5 = FUNC_1(4);
   VAR_6 = FUNC_2(4);
  } else {
   VAR_5 = FUNC_1(VAR_4);
   VAR_6 = FUNC_2(VAR_4);
  }
 }

 FUNC_0(VAR_5, VAR_3->cfgcr0);
 FUNC_0(VAR_6, VAR_3->cfgcr1);
 FUNC_5(VAR_6);
}
