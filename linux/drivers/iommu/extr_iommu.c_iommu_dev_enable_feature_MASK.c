
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_ops {int (* dev_enable_feat ) (struct device*,int) ;} ;
struct device {TYPE_1__* bus; } ;
typedef enum iommu_dev_features { ____Placeholder_iommu_dev_features } iommu_dev_features ;
struct TYPE_2__ {struct iommu_ops* iommu_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int) ;

int FUNC_1(struct device *VAR_1, enum iommu_dev_features VAR_2)
{
 const struct iommu_ops *VAR_3 = VAR_1->bus->iommu_ops;

 if (VAR_3 && VAR_3->dev_enable_feat)
  return VAR_3->dev_enable_feat(VAR_1, VAR_2);

 return -VAR_0;
}
