
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_device {int dev; int * impl; } ;
struct cavium_smmu {struct arm_smmu_device smmu; } ;


 int VAR_0 ;
 struct arm_smmu_device* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct arm_smmu_device*) ;
 struct cavium_smmu* FUNC_2 (int ,int,int ) ;

__attribute__((used)) static struct arm_smmu_device *FUNC_3(struct arm_smmu_device *VAR_3)
{
 struct cavium_smmu *VAR_4;

 VAR_4 = FUNC_2(VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->smmu = *VAR_3;
 VAR_4->smmu.impl = &VAR_2;

 FUNC_1(VAR_3->dev, VAR_3);

 return &VAR_4->smmu;
}
