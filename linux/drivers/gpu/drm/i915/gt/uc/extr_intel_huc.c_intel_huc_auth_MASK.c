
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; int mask; int reg; } ;
struct intel_huc {int fw; TYPE_2__ status; int rsa_data; } ;
struct intel_guc {int dummy; } ;
struct TYPE_3__ {struct intel_guc guc; } ;
struct intel_gt {int i915; int uncore; TYPE_1__ uc; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ,int,int,int *) ;
 struct intel_gt* FUNC_3 (struct intel_huc*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct intel_guc*,int ) ;
 int FUNC_7 (struct intel_guc*,int ) ;
 int FUNC_8 (struct intel_huc*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct intel_huc *VAR_4)
{
 struct intel_gt *VAR_5 = FUNC_3(VAR_4);
 struct intel_guc *VAR_6 = &VAR_5->uc.guc;
 int VAR_7;

 FUNC_1(FUNC_8(VAR_4));

 if (!FUNC_10(&VAR_4->fw))
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_5->i915, -VAR_1);
 if (VAR_7)
  goto fail;

 VAR_7 = FUNC_6(VAR_6,
     FUNC_7(VAR_6, VAR_4->rsa_data));
 if (VAR_7) {
  FUNC_0("HuC: GuC did not ack Auth request %d\n", VAR_7);
  goto fail;
 }


 VAR_7 = FUNC_2(VAR_5->uncore,
     VAR_4->status.reg,
     VAR_4->status.mask,
     VAR_4->status.value,
     2, 50, ((void*)0));
 if (VAR_7) {
  FUNC_0("HuC: Firmware not verified %d\n", VAR_7);
  goto fail;
 }

 FUNC_9(&VAR_4->fw, VAR_3);
 return 0;

fail:
 FUNC_5(VAR_5->i915, "HuC: Authentication failed %d\n", VAR_7);
 FUNC_9(&VAR_4->fw, VAR_2);
 return VAR_7;
}
