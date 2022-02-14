
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {scalar_t__ limited_color_range; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(const struct intel_crtc_state *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_3(VAR_0->base.crtc->dev);





 return VAR_0->limited_color_range &&
  (FUNC_2(VAR_1) || FUNC_0(VAR_1) ||
   FUNC_1(VAR_1, 9, 10));
}
