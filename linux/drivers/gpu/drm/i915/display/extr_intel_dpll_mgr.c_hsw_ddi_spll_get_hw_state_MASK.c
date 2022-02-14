
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_shared_dpll {int dummy; } ;
struct intel_dpll_hw_state {int spll; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_3,
          struct intel_shared_dpll *VAR_4,
          struct intel_dpll_hw_state *VAR_5)
{
 intel_wakeref_t VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_1(VAR_3,
           VAR_0);
 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_0(VAR_1);
 VAR_5->spll = VAR_7;

 FUNC_2(VAR_3, VAR_0, VAR_6);

 return VAR_7 & VAR_2;
}
