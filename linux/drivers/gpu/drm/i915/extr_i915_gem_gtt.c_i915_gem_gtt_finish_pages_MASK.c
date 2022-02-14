
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct i915_ggtt {int do_idle_maps; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct drm_i915_private {struct i915_ggtt ggtt; TYPE_3__ drm; } ;
struct TYPE_4__ {int dev; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ,int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct drm_i915_gem_object *VAR_2,
          struct sg_table *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_2->base.dev);
 struct device *VAR_5 = &VAR_4->drm.pdev->dev;
 struct i915_ggtt *VAR_6 = &VAR_4->ggtt;

 if (FUNC_5(VAR_6->do_idle_maps)) {
  if (FUNC_2(VAR_4, 0, VAR_0)) {
   FUNC_0("Failed to wait for idle; VT'd may hang.\n");

   FUNC_4(10);
  }
 }

 FUNC_1(VAR_5, VAR_3->sgl, VAR_3->nents, VAR_1);
}
