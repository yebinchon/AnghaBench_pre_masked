
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_shared_dpll {TYPE_1__* info; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*,struct intel_shared_dpll*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0,
      struct intel_shared_dpll *VAR_1)
{
 i915_reg_t VAR_2 =
  FUNC_0(FUNC_2(VAR_1->info->id));

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
