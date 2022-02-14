
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int port; } ;
struct intel_crtc_state {struct icl_port_dpll* icl_port_dplls; } ;
struct intel_crtc {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct intel_atomic_state {TYPE_1__ base; } ;
struct icl_port_dpll {void* pll; int hw_state; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct intel_crtc_state*,struct intel_encoder*,int *) ;
 int FUNC_2 (struct intel_crtc_state*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_atomic_state*,struct intel_crtc*,struct intel_encoder*) ;
 struct intel_crtc_state* FUNC_5 (struct intel_atomic_state*,struct intel_crtc*) ;
 void* FUNC_6 (struct intel_atomic_state*,struct intel_crtc*,int *,int,int) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (struct intel_atomic_state*,struct intel_crtc*,void*,int *) ;
 int FUNC_9 (struct intel_atomic_state*,struct intel_crtc*,void*) ;
 struct drm_i915_private* FUNC_10 (int ) ;

__attribute__((used)) static bool FUNC_11(struct intel_atomic_state *VAR_3,
     struct intel_crtc *VAR_4,
     struct intel_encoder *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_10(VAR_3->base.dev);
 struct intel_crtc_state *VAR_7 =
  FUNC_5(VAR_3, VAR_4);
 struct icl_port_dpll *VAR_8;
 enum intel_dpll_id VAR_9;

 VAR_8 = &VAR_7->icl_port_dplls[VAR_1];
 if (!FUNC_1(VAR_7, VAR_5, &VAR_8->hw_state)) {
  FUNC_0("Could not calculate TBT PLL state.\n");
  return 0;
 }

 VAR_8->pll = FUNC_6(VAR_3, VAR_4,
      &VAR_8->hw_state,
      VAR_0,
      VAR_0);
 if (!VAR_8->pll) {
  FUNC_0("No TBT-ALT PLL found\n");
  return 0;
 }
 FUNC_8(VAR_3, VAR_4,
        VAR_8->pll, &VAR_8->hw_state);


 VAR_8 = &VAR_7->icl_port_dplls[VAR_2];
 if (!FUNC_2(VAR_7, &VAR_8->hw_state)) {
  FUNC_0("Could not calculate MG PHY PLL state.\n");
  goto err_unreference_tbt_pll;
 }

 VAR_9 = FUNC_3(FUNC_7(VAR_6,
        VAR_5->port));
 VAR_8->pll = FUNC_6(VAR_3, VAR_4,
      &VAR_8->hw_state,
      VAR_9,
      VAR_9);
 if (!VAR_8->pll) {
  FUNC_0("No MG PHY PLL found\n");
  goto err_unreference_tbt_pll;
 }
 FUNC_8(VAR_3, VAR_4,
        VAR_8->pll, &VAR_8->hw_state);

 FUNC_4(VAR_3, VAR_4, VAR_5);

 return 1;

err_unreference_tbt_pll:
 VAR_8 = &VAR_7->icl_port_dplls[VAR_1];
 FUNC_9(VAR_3, VAR_4, VAR_8->pll);

 return 0;
}
