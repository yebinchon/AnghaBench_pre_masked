
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc {int fw; int log; int ct; } ;
struct intel_gt {int ggtt; } ;


 int FUNC_0 (struct intel_guc*) ;
 struct intel_gt* FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct intel_guc*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct intel_guc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct intel_guc *VAR_0)
{
 struct intel_gt *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_10(&VAR_0->fw))
  return;

 FUNC_2(VAR_1->ggtt);

 if (FUNC_5(VAR_0))
  FUNC_7(VAR_0);

 FUNC_4(&VAR_0->ct);

 FUNC_3(VAR_0);
 FUNC_6(&VAR_0->log);
 FUNC_0(VAR_0);
 FUNC_9(&VAR_0->fw);
 FUNC_8(&VAR_0->fw);
}
