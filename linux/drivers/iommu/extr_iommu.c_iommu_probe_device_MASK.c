
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_ops {int (* add_device ) (struct device*) ;} ;
struct device {int iommu_group; TYPE_1__* bus; } ;
struct TYPE_2__ {struct iommu_ops* iommu_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_2)
{
 const struct iommu_ops *VAR_3 = VAR_2->bus->iommu_ops;
 int VAR_4;

 FUNC_0(VAR_2->iommu_group);
 if (!VAR_3)
  return -VAR_0;

 if (!FUNC_2(VAR_2))
  return -VAR_1;

 VAR_4 = VAR_3->add_device(VAR_2);
 if (VAR_4)
  FUNC_1(VAR_2);

 return VAR_4;
}
