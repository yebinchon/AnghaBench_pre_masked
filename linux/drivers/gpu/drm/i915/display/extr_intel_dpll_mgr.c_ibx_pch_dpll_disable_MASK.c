
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_shared_dpll {TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_0,
     struct intel_shared_dpll *VAR_1)
{
 const enum intel_dpll_id VAR_2 = VAR_1->info->id;

 FUNC_0(FUNC_1(VAR_2), 0);
 FUNC_2(FUNC_1(VAR_2));
 FUNC_3(200);
}
