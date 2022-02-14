
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_param {int lock; } ;
struct device {struct iommu_param* iommu_param; } ;


 int VAR_0 ;
 struct iommu_param* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct iommu_param *FUNC_2(struct device *VAR_1)
{
 struct iommu_param *VAR_2 = VAR_1->iommu_param;

 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(&VAR_2->lock);
 VAR_1->iommu_param = VAR_2;
 return VAR_2;
}
