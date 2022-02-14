
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dpll; int dpll_md; } ;
struct intel_crtc_state {TYPE_1__ dpll_hw_state; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int * chv_dpll_md; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct intel_crtc*,struct intel_crtc_state const*) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct intel_crtc *VAR_5,
      const struct intel_crtc_state *VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_10(VAR_5->base.dev);
 enum pipe VAR_8 = VAR_5->pipe;

 FUNC_9(VAR_7, VAR_8);


 FUNC_8(VAR_7, VAR_8);

 if (VAR_6->dpll_hw_state.dpll & VAR_1)
  FUNC_7(VAR_5, VAR_6);

 if (VAR_8 != VAR_3) {






  FUNC_4(VAR_0, FUNC_0(VAR_8));
  FUNC_4(FUNC_2(VAR_4), VAR_6->dpll_hw_state.dpll_md);
  FUNC_4(VAR_0, 0);
  VAR_7->chv_dpll_md[VAR_8] = VAR_6->dpll_hw_state.dpll_md;





  FUNC_6((FUNC_3(FUNC_1(VAR_4)) & VAR_2) == 0);
 } else {
  FUNC_4(FUNC_2(VAR_8), VAR_6->dpll_hw_state.dpll_md);
  FUNC_5(FUNC_2(VAR_8));
 }
}
