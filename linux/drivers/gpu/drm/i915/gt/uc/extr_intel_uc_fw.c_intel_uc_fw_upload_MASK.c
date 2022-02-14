
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uc_fw {int path; int type; } ;
struct intel_gt {int i915; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int ,int ,int) ;
 int FUNC_3 (struct intel_uc_fw*,int ) ;
 int FUNC_4 (struct intel_uc_fw*,struct intel_gt*) ;
 int FUNC_5 (struct intel_uc_fw*,struct intel_gt*) ;
 int FUNC_6 (struct intel_uc_fw*) ;
 int FUNC_7 (struct intel_uc_fw*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct intel_uc_fw*,struct intel_gt*,int ,int ) ;

int FUNC_10(struct intel_uc_fw *VAR_3, struct intel_gt *VAR_4,
         u32 VAR_5, u32 VAR_6)
{
 int VAR_7;


 FUNC_0(FUNC_7(VAR_3));

 VAR_7 = FUNC_1(VAR_4->i915, -VAR_0);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_6(VAR_3))
  return -VAR_0;


 FUNC_4(VAR_3, VAR_4);
 VAR_7 = FUNC_9(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_5(VAR_3, VAR_4);
 if (VAR_7)
  goto fail;

 FUNC_3(VAR_3, VAR_2);
 return 0;

fail:
 FUNC_2(VAR_4->i915, "Failed to load %s firmware %s (%d)\n",
    FUNC_8(VAR_3->type), VAR_3->path,
    VAR_7);
 FUNC_3(VAR_3, VAR_1);
 return VAR_7;
}
