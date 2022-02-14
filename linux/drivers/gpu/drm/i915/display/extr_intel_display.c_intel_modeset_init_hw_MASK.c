
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw; int actual; int logical; } ;
struct drm_i915_private {TYPE_1__ cdclk; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_2 (struct drm_device*) ;

void FUNC_3(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->cdclk.hw, "Current CDCLK");
 VAR_1->cdclk.logical = VAR_1->cdclk.actual = VAR_1->cdclk.hw;
}
