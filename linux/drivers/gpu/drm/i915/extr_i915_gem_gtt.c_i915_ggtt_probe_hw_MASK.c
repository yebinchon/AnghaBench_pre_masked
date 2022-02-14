
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct drm_i915_private {TYPE_1__ drm; int gt; int ggtt; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(struct drm_i915_private *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->ggtt, &VAR_0->gt);
 if (VAR_1)
  return VAR_1;

 if (FUNC_2())
  FUNC_0(VAR_0->drm.dev, "VT-d active for gfx access\n");

 return 0;
}
