
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group_attribute {int attr; } ;
struct iommu_group {int kobj; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct iommu_group *VAR_0,
       struct iommu_group_attribute *VAR_1)
{
 return FUNC_0(&VAR_0->kobj, &VAR_1->attr);
}
