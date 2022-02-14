
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct intel_dpll_hw_state {void* cfgcr1; void* cfgcr0; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;
typedef int i915_reg_t ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; } ;


 int const VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static bool FUNC_9(struct drm_i915_private *VAR_3,
     struct intel_shared_dpll *VAR_4,
     struct intel_dpll_hw_state *VAR_5,
     i915_reg_t VAR_6)
{
 const enum intel_dpll_id VAR_7 = VAR_4->info->id;
 intel_wakeref_t VAR_8;
 bool VAR_9 = 0;
 u32 VAR_10;

 VAR_8 = FUNC_7(VAR_3,
           VAR_2);
 if (!VAR_8)
  return 0;

 VAR_10 = FUNC_0(VAR_6);
 if (!(VAR_10 & VAR_1))
  goto out;

 if (FUNC_3(VAR_3) >= 12) {
  VAR_5->cfgcr0 = FUNC_0(FUNC_5(VAR_7));
  VAR_5->cfgcr1 = FUNC_0(FUNC_6(VAR_7));
 } else {
  if (FUNC_4(VAR_3) && VAR_7 == VAR_0) {
   VAR_5->cfgcr0 = FUNC_0(FUNC_1(4));
   VAR_5->cfgcr1 = FUNC_0(FUNC_2(4));
  } else {
   VAR_5->cfgcr0 = FUNC_0(FUNC_1(VAR_7));
   VAR_5->cfgcr1 = FUNC_0(FUNC_2(VAR_7));
  }
 }

 VAR_9 = 1;
out:
 FUNC_8(VAR_3, VAR_2, VAR_8);
 return VAR_9;
}
