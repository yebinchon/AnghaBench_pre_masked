
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct skl_dpll_regs {int ctl; int cfgcr2; int cfgcr1; } ;
struct TYPE_5__ {int cfgcr1; int cfgcr2; } ;
struct TYPE_6__ {TYPE_2__ hw_state; } ;
struct intel_shared_dpll {TYPE_3__ state; TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int FUNC_1 (char*,int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_6 (struct drm_i915_private*,struct intel_shared_dpll*) ;
 struct skl_dpll_regs* VAR_2 ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_3,
          struct intel_shared_dpll *VAR_4)
{
 const struct skl_dpll_regs *VAR_5 = VAR_2;
 const enum intel_dpll_id VAR_6 = VAR_4->info->id;

 FUNC_6(VAR_3, VAR_4);

 FUNC_3(VAR_5[VAR_6].cfgcr1, VAR_4->state.hw_state.cfgcr1);
 FUNC_3(VAR_5[VAR_6].cfgcr2, VAR_4->state.hw_state.cfgcr2);
 FUNC_4(VAR_5[VAR_6].cfgcr1);
 FUNC_4(VAR_5[VAR_6].cfgcr2);


 FUNC_3(VAR_5[VAR_6].ctl,
     FUNC_2(VAR_5[VAR_6].ctl) | VAR_1);

 if (FUNC_5(VAR_3, VAR_0, FUNC_0(VAR_6), 5))
  FUNC_1("DPLL %d not locked\n", VAR_6);
}
