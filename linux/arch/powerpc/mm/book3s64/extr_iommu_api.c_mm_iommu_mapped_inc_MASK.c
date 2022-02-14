
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_iommu_table_group_mem_t {int mapped; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

long FUNC_1(struct mm_iommu_table_group_mem_t *VAR_1)
{
 if (FUNC_0(&VAR_1->mapped))
  return 0;


 return -VAR_0;
}
