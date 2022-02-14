
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_guc {int fw; int log; int ct; int ads_vma; int shared_data; } ;
struct intel_gt {TYPE_2__* i915; int ggtt; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (struct intel_guc*) ;
 struct intel_gt* FUNC_5 (struct intel_guc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct intel_guc*) ;
 int FUNC_8 (struct intel_guc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct intel_guc*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct intel_guc*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct intel_guc *VAR_0)
{
 struct intel_gt *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_17(&VAR_0->fw);
 if (VAR_2)
  goto err_fetch;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  goto err_fw;
 FUNC_1(!VAR_0->shared_data);

 VAR_2 = FUNC_12(&VAR_0->log);
 if (VAR_2)
  goto err_shared;

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2)
  goto err_log;
 FUNC_1(!VAR_0->ads_vma);

 VAR_2 = FUNC_10(&VAR_0->ct);
 if (VAR_2)
  goto err_ads;

 if (FUNC_11(VAR_0)) {




  VAR_2 = FUNC_14(VAR_0);
  if (VAR_2)
   goto err_ct;
 }


 FUNC_2(VAR_0);


 FUNC_6(VAR_1->ggtt);

 return 0;

err_ct:
 FUNC_9(&VAR_0->ct);
err_ads:
 FUNC_8(VAR_0);
err_log:
 FUNC_13(&VAR_0->log);
err_shared:
 FUNC_4(VAR_0);
err_fw:
 FUNC_16(&VAR_0->fw);
err_fetch:
 FUNC_15(&VAR_0->fw);
 FUNC_0(VAR_1->i915->drm.dev, "failed with %d\n", VAR_2);
 return VAR_2;
}
