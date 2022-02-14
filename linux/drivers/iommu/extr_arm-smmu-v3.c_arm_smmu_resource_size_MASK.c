
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_device {int options; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static unsigned long FUNC_0(struct arm_smmu_device *VAR_3)
{
 if (VAR_3->options & VAR_0)
  return VAR_2;
 else
  return VAR_1;
}
