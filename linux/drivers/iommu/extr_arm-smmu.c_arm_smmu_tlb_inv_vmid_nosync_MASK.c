
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vmid; } ;
struct arm_smmu_domain {TYPE_1__ cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arm_smmu_device*,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2, size_t VAR_3,
      size_t VAR_4, bool VAR_5, void *VAR_6)
{
 struct arm_smmu_domain *VAR_7 = VAR_6;
 struct arm_smmu_device *VAR_8 = VAR_7->smmu;

 if (VAR_8->features & VAR_0)
  FUNC_1();

 FUNC_0(VAR_8, VAR_1, VAR_7->cfg.vmid);
}
