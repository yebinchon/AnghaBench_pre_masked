
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_6__ {int (* color_check ) (struct intel_crtc_state*) ;} ;
struct drm_i915_private {TYPE_3__ display; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_1 (int ) ;

int FUNC_2(struct intel_crtc_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_1(VAR_0->base.crtc->dev);

 return VAR_1->display.color_check(VAR_0);
}
