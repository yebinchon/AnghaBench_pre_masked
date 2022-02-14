
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int dummy; } ;
struct intel_uc {struct intel_guc guc; } ;


 int FUNC_0 (struct intel_uc*) ;
 int FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (struct intel_guc*) ;

void FUNC_3(struct intel_uc *VAR_0)
{
 struct intel_guc *VAR_1 = &VAR_0->guc;

 if (!FUNC_2(VAR_1))
  return;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
}
