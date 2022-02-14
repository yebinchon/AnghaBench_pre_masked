
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_huc {int fw; } ;
struct TYPE_3__ {int dev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct TYPE_4__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (int ,char*,int) ;
 TYPE_2__* FUNC_1 (struct intel_huc*) ;
 int FUNC_2 (struct intel_huc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct intel_huc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_1(VAR_0)->i915;
 int VAR_2;

 VAR_2 = FUNC_5(&VAR_0->fw);
 if (VAR_2)
  goto out;






 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto out_fini;

 return 0;

out_fini:
 FUNC_4(&VAR_0->fw);
out:
 FUNC_3(&VAR_0->fw);
 FUNC_0(VAR_1->drm.dev, "failed with %d\n", VAR_2);
 return VAR_2;
}
