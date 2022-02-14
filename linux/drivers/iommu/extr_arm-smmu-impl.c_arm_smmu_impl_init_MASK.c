
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arm_smmu_device {int model; int * impl; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct arm_smmu_device* FUNC_0 (struct arm_smmu_device*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

struct arm_smmu_device *FUNC_2(struct arm_smmu_device *VAR_2)
{






 switch (VAR_2->model) {
 case 129:
  VAR_2->impl = &VAR_0;
  break;
 case 128:
  return FUNC_0(VAR_2);
 default:
  break;
 }

 if (FUNC_1(VAR_2->dev->of_node,
      "calxeda,smmu-secure-config-access"))
  VAR_2->impl = &VAR_1;

 return VAR_2;
}
