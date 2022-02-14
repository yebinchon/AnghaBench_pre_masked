
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dpll; int dpll_md; } ;
struct intel_crtc_state {TYPE_2__ dpll_hw_state; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_crtc*,struct intel_crtc_state const*) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_crtc *VAR_1,
      const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_1->base.dev);
 enum pipe VAR_4 = VAR_1->pipe;

 FUNC_5(VAR_3, VAR_4);


 FUNC_4(VAR_3, VAR_4);

 if (VAR_2->dpll_hw_state.dpll & VAR_0)
  FUNC_3(VAR_1, VAR_2);

 FUNC_1(FUNC_0(VAR_4), VAR_2->dpll_hw_state.dpll_md);
 FUNC_2(FUNC_0(VAR_4));
}
