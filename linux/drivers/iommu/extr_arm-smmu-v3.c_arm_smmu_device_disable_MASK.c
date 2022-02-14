
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arm_smmu_device*,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct arm_smmu_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, 0, VAR_0, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_2->dev, "failed to clear cr0\n");

 return VAR_3;
}
