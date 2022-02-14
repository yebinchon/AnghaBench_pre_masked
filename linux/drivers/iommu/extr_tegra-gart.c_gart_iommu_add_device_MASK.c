
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_group {int dummy; } ;
struct device {int iommu_fwspec; } ;
struct TYPE_2__ {int iommu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *,struct device*) ;
 struct iommu_group* FUNC_3 (struct device*) ;
 int FUNC_4 (struct iommu_group*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct iommu_group *VAR_3;

 if (!VAR_2->iommu_fwspec)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4(VAR_3);

 FUNC_2(&VAR_1->iommu, VAR_2);

 return 0;
}
