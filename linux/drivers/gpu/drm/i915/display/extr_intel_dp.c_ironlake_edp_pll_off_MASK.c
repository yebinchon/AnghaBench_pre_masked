
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int DP; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct intel_dp *VAR_2,
     const struct intel_crtc_state *VAR_3)
{
 struct intel_crtc *VAR_4 = FUNC_7(VAR_3->base.crtc);
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_4->base.dev);

 FUNC_5(VAR_5, VAR_4->pipe);
 FUNC_3(VAR_2);
 FUNC_4(VAR_5);

 FUNC_0("disabling eDP PLL\n");

 VAR_2->DP &= ~VAR_1;

 FUNC_1(VAR_0, VAR_2->DP);
 FUNC_2(VAR_0);
 FUNC_8(200);
}
