
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int pgsize_bitmap; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 struct iommu_domain* FUNC_1 (struct device*) ;

__attribute__((used)) static unsigned long FUNC_2(struct device *VAR_0)
{
 struct iommu_domain *VAR_1 = FUNC_1(VAR_0);

 return (1UL << FUNC_0(VAR_1->pgsize_bitmap)) - 1;
}
