
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_ct_channel {int vma; int owner; } ;
struct intel_guc_ct {struct intel_guc_ct_channel host_channel; } ;
struct intel_guc {int dummy; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int) ;
 struct intel_guc* FUNC_2 (struct intel_guc_ct*) ;
 int FUNC_3 (struct intel_guc*,struct intel_guc_ct_channel*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct intel_guc_ct *VAR_0)
{
 struct intel_guc *VAR_1 = FUNC_2(VAR_0);
 struct intel_guc_ct_channel *VAR_2 = &VAR_0->host_channel;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_4(VAR_3)) {
  FUNC_0("CT: can't open channel %d; err=%d\n",
     VAR_2->owner, VAR_3);
  return VAR_3;
 }

 FUNC_1(!VAR_2->vma);
 return 0;
}
