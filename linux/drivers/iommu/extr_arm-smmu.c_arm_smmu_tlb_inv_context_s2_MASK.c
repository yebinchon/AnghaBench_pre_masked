
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vmid; } ;
struct arm_smmu_domain {TYPE_1__ cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct arm_smmu_device*,int ,int ) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct arm_smmu_domain *VAR_2 = VAR_1;
 struct arm_smmu_device *VAR_3 = VAR_2->smmu;


 FUNC_2();
 FUNC_0(VAR_3, VAR_0, VAR_2->cfg.vmid);
 FUNC_1(VAR_3);
}
