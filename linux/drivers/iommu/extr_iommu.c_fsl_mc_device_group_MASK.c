
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct device*) ;
 struct iommu_group* FUNC_1 () ;
 struct iommu_group* FUNC_2 (struct device*) ;

struct iommu_group *FUNC_3(struct device *VAR_0)
{
 struct device *VAR_1 = FUNC_0(VAR_0);
 struct iommu_group *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_1();
 return VAR_2;
}
