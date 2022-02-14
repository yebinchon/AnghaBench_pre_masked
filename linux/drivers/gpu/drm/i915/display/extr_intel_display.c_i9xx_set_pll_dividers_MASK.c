
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fp1; int fp0; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {TYPE_3__ dpll_hw_state; TYPE_1__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_4(VAR_0->base.crtc);
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->base.dev);

 FUNC_2(FUNC_0(VAR_1->pipe), VAR_0->dpll_hw_state.fp0);
 FUNC_2(FUNC_1(VAR_1->pipe), VAR_0->dpll_hw_state.fp1);
}
