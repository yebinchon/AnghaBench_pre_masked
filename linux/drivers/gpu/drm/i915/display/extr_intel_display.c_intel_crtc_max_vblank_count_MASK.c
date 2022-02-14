
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {int output_types; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_1->base.crtc->dev);





 if (FUNC_3(VAR_2) &&
     (VAR_1->output_types & FUNC_0(VAR_0)))
  return 0;

 if (FUNC_1(VAR_2) >= 5 || FUNC_2(VAR_2))
  return 0xffffffff;
 else if (FUNC_1(VAR_2) >= 3)
  return 0xffffff;
 else
  return 0;
}
