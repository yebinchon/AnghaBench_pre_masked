
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_dpll_regs {int ctl; } ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct skl_dpll_regs* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_2,
    struct intel_shared_dpll *VAR_3)
{
 const struct skl_dpll_regs *VAR_4 = VAR_1;
 const enum intel_dpll_id VAR_5 = VAR_3->info->id;


 FUNC_1(VAR_4[VAR_5].ctl,
     FUNC_0(VAR_4[VAR_5].ctl) & ~VAR_0);
 FUNC_2(VAR_4[VAR_5].ctl);
}
