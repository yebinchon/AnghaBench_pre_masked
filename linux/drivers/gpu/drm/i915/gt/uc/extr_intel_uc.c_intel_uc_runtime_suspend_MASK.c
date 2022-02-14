
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int dummy; } ;
struct intel_uc {struct intel_guc guc; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (struct intel_guc*) ;

void FUNC_4(struct intel_uc *VAR_0)
{
 struct intel_guc *VAR_1 = &VAR_0->guc;
 int VAR_2;

 if (!FUNC_2(VAR_1))
  return;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_0("Failed to suspend GuC, err=%d", VAR_2);

 FUNC_1(VAR_1);
}
