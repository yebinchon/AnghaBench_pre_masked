
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uc; } ;
struct drm_i915_private {int bridge_dev; int uncore; TYPE_1__ gt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct drm_i915_private *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_2))
  return -VAR_1;

 if (FUNC_1(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_9(&VAR_2->uncore);
 if (VAR_3 < 0)
  goto err_bridge;


 FUNC_5(VAR_2);

 FUNC_3(VAR_2);

 FUNC_10(&VAR_2->uncore);

 FUNC_7(&VAR_2->gt.uc);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  goto err_uncore;

 FUNC_0(VAR_2);

 return 0;

err_uncore:
 FUNC_6(VAR_2);
 FUNC_8(&VAR_2->uncore);
err_bridge:
 FUNC_11(VAR_2->bridge_dev);

 return VAR_3;
}
