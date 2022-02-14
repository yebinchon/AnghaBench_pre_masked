
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ enabled; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {TYPE_3__ pch_pfit; TYPE_1__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_5(VAR_0->base.crtc);
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_1->base.dev);
 enum pipe VAR_3 = VAR_1->pipe;



 if (VAR_0->pch_pfit.enabled) {
  FUNC_0(FUNC_1(VAR_3), 0);
  FUNC_0(FUNC_2(VAR_3), 0);
  FUNC_0(FUNC_3(VAR_3), 0);
 }
}
