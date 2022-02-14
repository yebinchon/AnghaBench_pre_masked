
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_iommu_table_group_mem_t {unsigned long ua; long const entries; unsigned int pageshift; unsigned long dev_hpa; int * hpas; } ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

long FUNC_1(struct mm_iommu_table_group_mem_t *VAR_4,
  unsigned long VAR_5, unsigned int VAR_6, unsigned long *VAR_7)
{
 const long VAR_8 = (VAR_5 - VAR_4->ua) >> VAR_3;
 unsigned long *VAR_9;

 if (VAR_8 >= VAR_4->entries)
  return -VAR_0;

 if (VAR_6 > VAR_4->pageshift)
  return -VAR_0;

 if (!VAR_4->hpas) {
  *VAR_7 = VAR_4->dev_hpa + (VAR_5 - VAR_4->ua);
  return 0;
 }

 VAR_9 = (void *) FUNC_0(&VAR_4->hpas[VAR_8]);
 if (!VAR_9)
  return -VAR_0;

 *VAR_7 = (*VAR_9 & VAR_1) | (VAR_5 & ~VAR_2);

 return 0;
}
