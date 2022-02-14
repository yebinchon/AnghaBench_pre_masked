
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*) ;

void FUNC_5(struct drm_i915_private *VAR_0)
{
 if (FUNC_1(VAR_0))
  FUNC_4(VAR_0);

 FUNC_2(VAR_0);

 if (!FUNC_0(VAR_0))
  FUNC_3(&VAR_0->drm.pdev->dev);
}
