
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct iommu_sva {int dummy; } ;
struct iommu_ops {struct iommu_sva* (* sva_bind ) (struct device*,struct mm_struct*,void*) ;} ;
struct iommu_group {int mutex; } ;
struct device {TYPE_1__* bus; } ;
struct TYPE_2__ {struct iommu_ops* iommu_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iommu_sva* FUNC_0 (int ) ;
 int FUNC_1 (struct iommu_group*) ;
 struct iommu_group* FUNC_2 (struct device*) ;
 int FUNC_3 (struct iommu_group*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct iommu_sva* FUNC_6 (struct device*,struct mm_struct*,void*) ;

struct iommu_sva *
FUNC_7(struct device *VAR_2, struct mm_struct *VAR_3, void *VAR_4)
{
 struct iommu_group *VAR_5;
 struct iommu_sva *VAR_6 = FUNC_0(-VAR_0);
 const struct iommu_ops *VAR_7 = VAR_2->bus->iommu_ops;

 if (!VAR_7 || !VAR_7->sva_bind)
  return FUNC_0(-VAR_1);

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);


 FUNC_4(&VAR_5->mutex);







 if (FUNC_1(VAR_5) != 1)
  goto out_unlock;

 VAR_6 = VAR_7->sva_bind(VAR_2, VAR_3, VAR_4);

out_unlock:
 FUNC_5(&VAR_5->mutex);
 FUNC_3(VAR_5);

 return VAR_6;
}
