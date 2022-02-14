
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_ops {int dummy; } ;
struct bus_type {struct iommu_ops const* iommu_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct bus_type*,struct iommu_ops const*) ;

int FUNC_1(struct bus_type *VAR_1, const struct iommu_ops *VAR_2)
{
 int VAR_3;

 if (VAR_1->iommu_ops != ((void*)0))
  return -VAR_0;

 VAR_1->iommu_ops = VAR_2;


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  VAR_1->iommu_ops = ((void*)0);

 return VAR_3;
}
