
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int port; } ;
struct intel_crtc_state {struct icl_port_dpll* icl_port_dplls; } ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct icl_port_dpll {int hw_state; int pll; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_4 ;
 int FUNC_2 (struct intel_crtc_state*,struct intel_encoder*,int *) ;
 int FUNC_3 (struct intel_atomic_state*,struct intel_crtc*,struct intel_encoder*) ;
 struct intel_crtc_state* FUNC_4 (struct intel_atomic_state*,struct intel_crtc*) ;
 int FUNC_5 (struct intel_atomic_state*,struct intel_crtc*,int *,int ,int ) ;
 int FUNC_6 (struct intel_atomic_state*,struct intel_crtc*,int ,int *) ;
 int FUNC_7 (int) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(struct intel_atomic_state *VAR_5,
       struct intel_crtc *VAR_6,
       struct intel_encoder *VAR_7)
{
 struct intel_crtc_state *VAR_8 =
  FUNC_4(VAR_5, VAR_6);
 struct icl_port_dpll *VAR_9 =
  &VAR_8->icl_port_dplls[VAR_3];
 struct drm_i915_private *VAR_10 = FUNC_8(VAR_6->base.dev);
 enum port VAR_11 = VAR_7->port;
 bool VAR_12 = 0;

 if (!FUNC_2(VAR_8, VAR_7, &VAR_9->hw_state)) {
  FUNC_0("Could not calculate combo PHY PLL state.\n");

  return 0;
 }

 if (FUNC_1(VAR_10) && VAR_11 != VAR_4)
  VAR_12 = 1;

 VAR_9->pll = FUNC_5(VAR_5, VAR_6,
      &VAR_9->hw_state,
      VAR_1,
      VAR_12 ? VAR_0
         : VAR_2);
 if (!VAR_9->pll) {
  FUNC_0("No combo PHY PLL found for port %c\n",
         FUNC_7(VAR_7->port));
  return 0;
 }

 FUNC_6(VAR_5, VAR_6,
        VAR_9->pll, &VAR_9->hw_state);

 FUNC_3(VAR_5, VAR_6, VAR_7);

 return 1;
}
