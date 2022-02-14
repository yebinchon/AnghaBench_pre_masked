
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct drm_i915_private {int pch_ssc_use; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const) ;
 int VAR_0 ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_1,
      struct intel_shared_dpll *VAR_2)
{
 const enum intel_dpll_id VAR_3 = VAR_2->info->id;
 u32 VAR_4;

 VAR_4 = FUNC_1(FUNC_4(VAR_3));
 FUNC_2(FUNC_4(VAR_3), VAR_4 & ~VAR_0);
 FUNC_3(FUNC_4(VAR_3));





 if (VAR_1->pch_ssc_use & FUNC_0(VAR_3))
  FUNC_5(VAR_1);
}
