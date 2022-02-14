
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_device {scalar_t__ smrs; } ;


 int FUNC_0 (struct arm_smmu_device*,int) ;
 int FUNC_1 (struct arm_smmu_device*,int) ;

__attribute__((used)) static void FUNC_2(struct arm_smmu_device *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_0->smrs)
  FUNC_1(VAR_0, VAR_1);
}
