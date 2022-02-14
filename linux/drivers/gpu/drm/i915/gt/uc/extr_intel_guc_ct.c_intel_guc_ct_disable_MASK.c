
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_ct_channel {int enabled; } ;
struct intel_guc_ct {struct intel_guc_ct_channel host_channel; } ;
struct intel_guc {int dummy; } ;


 struct intel_guc* FUNC_0 (struct intel_guc_ct*) ;
 int FUNC_1 (struct intel_guc*,struct intel_guc_ct_channel*) ;

void FUNC_2(struct intel_guc_ct *VAR_0)
{
 struct intel_guc *VAR_1 = FUNC_0(VAR_0);
 struct intel_guc_ct_channel *VAR_2 = &VAR_0->host_channel;

 if (!VAR_2->enabled)
  return;

 FUNC_1(VAR_1, VAR_2);
}
