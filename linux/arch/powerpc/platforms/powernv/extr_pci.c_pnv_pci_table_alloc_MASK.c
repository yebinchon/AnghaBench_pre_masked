
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int it_kref; int it_group_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct iommu_table* FUNC_2 (int,int ,int) ;

struct iommu_table *FUNC_3(int VAR_1)
{
 struct iommu_table *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct iommu_table), VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->it_group_list);
 FUNC_1(&VAR_2->it_kref);

 return VAR_2;
}
