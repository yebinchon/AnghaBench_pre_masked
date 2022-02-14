
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
struct arm_smmu_device {int dummy; } ;
struct TYPE_2__ {int driver; } ;


 TYPE_1__ VAR_0 ;
 struct arm_smmu_device* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *,struct fwnode_handle*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static
struct arm_smmu_device *FUNC_3(struct fwnode_handle *VAR_1)
{
 struct device *VAR_2 = FUNC_1(&VAR_0.driver,
         VAR_1);
 FUNC_2(VAR_2);
 return VAR_2 ? FUNC_0(VAR_2) : ((void*)0);
}
