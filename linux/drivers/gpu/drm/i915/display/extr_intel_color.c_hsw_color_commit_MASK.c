
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int gamma_mode; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_4(VAR_0->base.crtc);
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->base.dev);

 FUNC_1(FUNC_0(VAR_1->pipe), VAR_0->gamma_mode);

 FUNC_2(VAR_0);
}
