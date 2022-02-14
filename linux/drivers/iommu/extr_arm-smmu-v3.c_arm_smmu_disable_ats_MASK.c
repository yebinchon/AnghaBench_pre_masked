
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_master {int dev; int ats_enabled; struct arm_smmu_domain* domain; } ;
struct arm_smmu_domain {int nr_ats_masters; } ;
struct arm_smmu_cmdq_ent {int dummy; } ;


 int FUNC_0 (struct arm_smmu_master*,struct arm_smmu_cmdq_ent*) ;
 int FUNC_1 (int ,int ,int ,struct arm_smmu_cmdq_ent*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct arm_smmu_master *VAR_0)
{
 struct arm_smmu_cmdq_ent VAR_1;
 struct arm_smmu_domain *VAR_2 = VAR_0->domain;

 if (!VAR_0->ats_enabled)
  return;

 FUNC_3(FUNC_4(VAR_0->dev));




 FUNC_5();
 FUNC_1(0, 0, 0, &VAR_1);
 FUNC_0(VAR_0, &VAR_1);
 FUNC_2(&VAR_2->nr_ats_masters);
}
