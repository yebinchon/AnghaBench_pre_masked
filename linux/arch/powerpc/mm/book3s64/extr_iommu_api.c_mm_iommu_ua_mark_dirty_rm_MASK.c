
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct mm_iommu_table_group_mem_t {scalar_t__ dev_hpa; unsigned long ua; int * hpas; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct mm_iommu_table_group_mem_t* FUNC_0 (struct mm_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_1 (void*) ;

extern void FUNC_2(struct mm_struct *VAR_4, unsigned long VAR_5)
{
 struct mm_iommu_table_group_mem_t *VAR_6;
 long VAR_7;
 void *VAR_8;
 unsigned long *VAR_9;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_3);
 if (!VAR_6)
  return;

 if (VAR_6->dev_hpa != VAR_1)
  return;

 VAR_7 = (VAR_5 - VAR_6->ua) >> VAR_2;
 VAR_8 = &VAR_6->hpas[VAR_7];

 VAR_9 = (void *) FUNC_1(VAR_8);
 if (!VAR_9)
  return;

 *VAR_9 |= VAR_0;
}
