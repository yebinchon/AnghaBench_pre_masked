
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct TYPE_4__ {int (* update_wm ) (struct intel_crtc*) ;} ;
struct drm_i915_private {TYPE_2__ display; } ;


 int FUNC_0 (struct intel_crtc*) ;
 struct drm_i915_private* FUNC_1 (int ) ;

void FUNC_2(struct intel_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_1(VAR_0->base.dev);

 if (VAR_1->display.update_wm)
  VAR_1->display.update_wm(VAR_0);
}
