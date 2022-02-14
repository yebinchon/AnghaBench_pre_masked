
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu {int group; } ;
struct iommu_group {int dummy; } ;
struct device {int dummy; } ;


 struct iommu_group* FUNC_0 (int ) ;
 struct rk_iommu* FUNC_1 (struct device*) ;

__attribute__((used)) static struct iommu_group *FUNC_2(struct device *VAR_0)
{
 struct rk_iommu *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->group);
}
