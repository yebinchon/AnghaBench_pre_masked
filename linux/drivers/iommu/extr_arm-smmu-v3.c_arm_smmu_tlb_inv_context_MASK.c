
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ vmid; } ;
struct TYPE_5__ {int asid; } ;
struct TYPE_6__ {TYPE_1__ cd; } ;
struct arm_smmu_domain {scalar_t__ stage; TYPE_4__ s2_cfg; TYPE_2__ s1_cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ vmid; int asid; } ;
struct arm_smmu_cmdq_ent {TYPE_3__ tlbi; int opcode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arm_smmu_domain*,int ,int ,int ) ;
 int FUNC_1 (struct arm_smmu_device*,struct arm_smmu_cmdq_ent*) ;
 int FUNC_2 (struct arm_smmu_device*) ;

__attribute__((used)) static void FUNC_3(void *VAR_3)
{
 struct arm_smmu_domain *VAR_4 = VAR_3;
 struct arm_smmu_device *VAR_5 = VAR_4->smmu;
 struct arm_smmu_cmdq_ent VAR_6;

 if (VAR_4->stage == VAR_0) {
  VAR_6.opcode = VAR_1;
  VAR_6.tlbi.asid = VAR_4->s1_cfg.cd.asid;
  VAR_6.tlbi.vmid = 0;
 } else {
  VAR_6.opcode = VAR_2;
  VAR_6.tlbi.vmid = VAR_4->s2_cfg.vmid;
 }
 FUNC_1(VAR_5, &VAR_6);
 FUNC_2(VAR_5);
 FUNC_0(VAR_4, 0, 0, 0);
}
