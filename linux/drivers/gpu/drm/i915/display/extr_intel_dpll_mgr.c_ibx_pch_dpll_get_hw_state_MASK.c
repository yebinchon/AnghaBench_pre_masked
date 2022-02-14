
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct intel_dpll_hw_state {int dpll; void* fp1; void* fp0; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int VAR_1 ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct drm_i915_private *VAR_2,
          struct intel_shared_dpll *VAR_3,
          struct intel_dpll_hw_state *VAR_4)
{
 const enum intel_dpll_id VAR_5 = VAR_3->info->id;
 intel_wakeref_t VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_4(VAR_2,
           VAR_1);
 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_0(FUNC_1(VAR_5));
 VAR_4->dpll = VAR_7;
 VAR_4->fp0 = FUNC_0(FUNC_2(VAR_5));
 VAR_4->fp1 = FUNC_0(FUNC_3(VAR_5));

 FUNC_5(VAR_2, VAR_1, VAR_6);

 return VAR_7 & VAR_0;
}
