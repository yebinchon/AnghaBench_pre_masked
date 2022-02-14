
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int control; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {TYPE_3__ gmch_pfit; TYPE_1__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_5(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_2->base.dev);

 if (!VAR_1->gmch_pfit.control)
  return;

 FUNC_3(VAR_3, VAR_2->pipe);

 FUNC_0("disabling pfit, current: 0x%08x\n",
        FUNC_1(VAR_0));
 FUNC_2(VAR_0, 0);
}
