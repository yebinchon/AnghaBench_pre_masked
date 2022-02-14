
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct iommu_group* FUNC_1 (struct device*) ;
 struct iommu_group* FUNC_2 (struct device*) ;

__attribute__((used)) static struct iommu_group *FUNC_3(struct device *VAR_0)
{
 struct iommu_group *VAR_1;






 if (FUNC_0(VAR_0))
  VAR_1 = FUNC_2(VAR_0);
 else
  VAR_1 = FUNC_1(VAR_0);

 return VAR_1;
}
