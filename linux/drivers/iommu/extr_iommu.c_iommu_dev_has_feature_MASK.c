
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_ops {int (* dev_has_feat ) (struct device*,int) ;} ;
struct device {TYPE_1__* bus; } ;
typedef enum iommu_dev_features { ____Placeholder_iommu_dev_features } iommu_dev_features ;
struct TYPE_2__ {struct iommu_ops* iommu_ops; } ;


 int FUNC_0 (struct device*,int) ;

bool FUNC_1(struct device *VAR_0, enum iommu_dev_features VAR_1)
{
 const struct iommu_ops *VAR_2 = VAR_0->bus->iommu_ops;

 if (VAR_2 && VAR_2->dev_has_feat)
  return VAR_2->dev_has_feat(VAR_0, VAR_1);

 return 0;
}
