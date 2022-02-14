
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc_state {int shared_dpll; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3,
       enum port VAR_4,
       struct intel_crtc_state *VAR_5)
{
 enum intel_dpll_id VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_0) & FUNC_0(VAR_4);
 VAR_6 = VAR_7 >> FUNC_1(VAR_4);

 if (FUNC_3(VAR_6 < VAR_1 || VAR_6 > VAR_2))
  return;

 VAR_5->shared_dpll = FUNC_4(VAR_3, VAR_6);
}
