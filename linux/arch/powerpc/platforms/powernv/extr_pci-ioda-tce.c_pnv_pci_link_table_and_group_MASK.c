
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table_group_link {int next; struct iommu_table_group* table_group; } ;
struct iommu_table_group {int * tables; } ;
struct iommu_table {int it_group_list; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iommu_table*) ;
 struct iommu_table_group_link* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,int *) ;

long FUNC_4(int VAR_3, int VAR_4,
  struct iommu_table *VAR_5,
  struct iommu_table_group *VAR_6)
{
 struct iommu_table_group_link *VAR_7 = ((void*)0);

 if (FUNC_0(!VAR_5 || !VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_2(sizeof(struct iommu_table_group_link), VAR_2,
   VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->table_group = VAR_6;
 FUNC_3(&VAR_7->next, &VAR_5->it_group_list);

 VAR_6->tables[VAR_4] = FUNC_1(VAR_5);

 return 0;
}
