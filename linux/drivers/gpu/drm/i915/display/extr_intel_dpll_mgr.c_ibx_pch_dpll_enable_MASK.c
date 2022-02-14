
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dpll; } ;
struct TYPE_6__ {TYPE_2__ hw_state; } ;
struct intel_shared_dpll {TYPE_3__ state; TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_0,
    struct intel_shared_dpll *VAR_1)
{
 const enum intel_dpll_id VAR_2 = VAR_1->info->id;


 FUNC_3(VAR_0);

 FUNC_0(FUNC_1(VAR_2), VAR_1->state.hw_state.dpll);


 FUNC_2(FUNC_1(VAR_2));
 FUNC_4(150);






 FUNC_0(FUNC_1(VAR_2), VAR_1->state.hw_state.dpll);
 FUNC_2(FUNC_1(VAR_2));
 FUNC_4(200);
}
