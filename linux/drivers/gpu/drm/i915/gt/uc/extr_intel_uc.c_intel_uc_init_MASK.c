
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_huc {int fw; } ;
struct intel_guc {int dummy; } ;
struct intel_uc {struct intel_huc huc; struct intel_guc guc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (struct intel_huc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_uc*) ;
 int FUNC_5 (struct intel_uc*) ;
 scalar_t__ FUNC_6 (struct intel_uc*) ;

void FUNC_7(struct intel_uc *VAR_0)
{
 struct intel_guc *VAR_1 = &VAR_0->guc;
 struct intel_huc *VAR_2 = &VAR_0->huc;
 int VAR_3;

 if (!FUNC_5(VAR_0))
  return;


 FUNC_0(FUNC_4(VAR_0));

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_3(&VAR_2->fw);
  return;
 }

 if (FUNC_6(VAR_0))
  FUNC_2(VAR_2);
}
