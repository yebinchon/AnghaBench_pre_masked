
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arm_smmu_master {int num_sids; int smmu; int * sids; int ats_enabled; } ;
struct TYPE_2__ {int sid; } ;
struct arm_smmu_cmdq_ent {TYPE_1__ atc; } ;


 int FUNC_0 (int ,struct arm_smmu_cmdq_ent*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct arm_smmu_master *VAR_0,
       struct arm_smmu_cmdq_ent *VAR_1)
{
 int VAR_2;

 if (!VAR_0->ats_enabled)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_sids; VAR_2++) {
  VAR_1->atc.sid = VAR_0->sids[VAR_2];
  FUNC_0(VAR_0->smmu, VAR_1);
 }

 return FUNC_1(VAR_0->smmu);
}
