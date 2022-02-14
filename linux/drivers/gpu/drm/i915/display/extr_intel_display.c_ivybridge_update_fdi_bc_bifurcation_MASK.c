
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int fdi_lanes; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 () ;



 int FUNC_1 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_crtc* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_3(VAR_0->base.crtc);
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_1->base.dev);

 switch (VAR_1->pipe) {
 case 130:
  break;
 case 129:
  if (VAR_0->fdi_lanes > 2)
   FUNC_1(VAR_2, 0);
  else
   FUNC_1(VAR_2, 1);

  break;
 case 128:
  FUNC_1(VAR_2, 1);

  break;
 default:
  FUNC_0();
 }
}
