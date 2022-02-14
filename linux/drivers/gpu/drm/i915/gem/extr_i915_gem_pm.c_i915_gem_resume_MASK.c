
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int uc; } ;
struct TYPE_5__ {int dev; int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ gt; TYPE_1__ drm; int uncore; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct drm_i915_private *VAR_1)
{
 FUNC_0("\n");

 FUNC_10(&VAR_1->drm.struct_mutex);
 FUNC_8(&VAR_1->uncore, VAR_0);

 if (FUNC_2(VAR_1))
  goto err_wedged;






 if (FUNC_5(&VAR_1->gt))
  goto err_wedged;

 FUNC_7(&VAR_1->gt.uc);


 if (!FUNC_3(VAR_1))
  goto err_wedged;

out_unlock:
 FUNC_9(&VAR_1->uncore, VAR_0);
 FUNC_11(&VAR_1->drm.struct_mutex);
 return;

err_wedged:
 if (!FUNC_4(&VAR_1->gt)) {
  FUNC_1(VAR_1->drm.dev,
   "Failed to re-initialize GPU, declaring it wedged!\n");
  FUNC_6(&VAR_1->gt);
 }
 goto out_unlock;
}
