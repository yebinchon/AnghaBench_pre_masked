
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_dpll_hw_state {int dummy; } ;
struct intel_crtc_state {int port_clock; int shared_dpll; struct intel_dpll_hw_state dpll_hw_state; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,struct intel_dpll_hw_state*) ;
 int FUNC_1 (struct intel_crtc_state*) ;
 int FUNC_2 (struct drm_i915_private*,struct intel_dpll_hw_state*) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_1,
         struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_7(VAR_1->base.dev);
 struct intel_dpll_hw_state *VAR_4 = &VAR_2->dpll_hw_state;
 enum port VAR_5 = VAR_1->port;
 enum phy VAR_6 = FUNC_6(VAR_3, VAR_5);
 int VAR_7;

 if (FUNC_5(VAR_3, VAR_6)) {
  VAR_7 = FUNC_0(VAR_3, VAR_4);
 } else {
  enum intel_dpll_id VAR_8 = FUNC_4(VAR_3,
      VAR_2->shared_dpll);

  if (VAR_8 == VAR_0)
   VAR_7 = FUNC_3(VAR_3, VAR_5);
  else
   VAR_7 = FUNC_2(VAR_3, VAR_4);
 }

 VAR_2->port_clock = VAR_7;

 FUNC_1(VAR_2);
}
