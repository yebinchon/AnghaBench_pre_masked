
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_device {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct arm_smmu_device *VAR_0)
{
 if (FUNC_0(VAR_0->dev))
  return FUNC_1(VAR_0->dev);

 return 0;
}
