
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dpll; } ;
struct intel_crtc_state {TYPE_1__ dpll_hw_state; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int ,int ,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*,int,int ) ;
 int FUNC_10 (struct drm_i915_private*,int,int ,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct intel_crtc *VAR_2,
       const struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_2->base.dev);
 enum pipe VAR_5 = VAR_2->pipe;
 enum dpio_channel VAR_6 = FUNC_11(VAR_5);
 u32 VAR_7;

 FUNC_7(VAR_4);


 VAR_7 = FUNC_9(VAR_4, VAR_5, FUNC_0(VAR_6));
 VAR_7 |= VAR_0;
 FUNC_10(VAR_4, VAR_5, FUNC_0(VAR_6), VAR_7);

 FUNC_8(VAR_4);




 FUNC_6(1);


 FUNC_3(FUNC_1(VAR_5), VAR_3->dpll_hw_state.dpll);


 if (FUNC_4(VAR_4, FUNC_1(VAR_5), VAR_1, 1))
  FUNC_2("PLL %d failed to lock\n", VAR_5);
}
