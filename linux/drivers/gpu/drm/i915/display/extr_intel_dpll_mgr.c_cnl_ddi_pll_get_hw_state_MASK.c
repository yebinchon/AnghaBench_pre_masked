
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_1__* info; } ;
struct intel_dpll_hw_state {int cfgcr0; void* cfgcr1; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int VAR_0 ;
 void* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct drm_i915_private *VAR_3,
         struct intel_shared_dpll *VAR_4,
         struct intel_dpll_hw_state *VAR_5)
{
 const enum intel_dpll_id VAR_6 = VAR_4->info->id;
 intel_wakeref_t VAR_7;
 u32 VAR_8;
 bool VAR_9;

 VAR_7 = FUNC_4(VAR_3,
           VAR_2);
 if (!VAR_7)
  return 0;

 VAR_9 = 0;

 VAR_8 = FUNC_3(FUNC_2(VAR_6));
 if (!(VAR_8 & VAR_1))
  goto out;

 VAR_8 = FUNC_3(FUNC_0(VAR_6));
 VAR_5->cfgcr0 = VAR_8;


 if (VAR_8 & VAR_0) {
  VAR_5->cfgcr1 = FUNC_3(FUNC_1(VAR_6));
 }
 VAR_9 = 1;

out:
 FUNC_5(VAR_3, VAR_2, VAR_7);

 return VAR_9;
}
