
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table_group {struct iommu_table** tables; } ;
struct iommu_table {int it_kref; int it_group_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iommu_table_group*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int,int ,int) ;

__attribute__((used)) static struct iommu_table_group *FUNC_4(int VAR_1)
{
 struct iommu_table_group *VAR_2;
 struct iommu_table *VAR_3;

 VAR_2 = FUNC_3(sizeof(struct iommu_table_group), VAR_0,
      VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_3(sizeof(struct iommu_table), VAR_0, VAR_1);
 if (!VAR_3)
  goto free_group;

 FUNC_0(&VAR_3->it_group_list);
 FUNC_2(&VAR_3->it_kref);

 VAR_2->tables[0] = VAR_3;

 return VAR_2;

free_group:
 FUNC_1(VAR_2);
 return ((void*)0);
}
