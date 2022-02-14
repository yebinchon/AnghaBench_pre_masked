
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_iommu_table_group_mem_t {int* hpas; long entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static void FUNC_3(struct mm_iommu_table_group_mem_t *VAR_2)
{
 long VAR_3;
 struct page *VAR_4 = ((void*)0);

 if (!VAR_2->hpas)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->entries; ++VAR_3) {
  if (!VAR_2->hpas[VAR_3])
   continue;

  VAR_4 = FUNC_1(VAR_2->hpas[VAR_3] >> VAR_1);
  if (!VAR_4)
   continue;

  if (VAR_2->hpas[VAR_3] & VAR_0)
   FUNC_0(VAR_4);

  FUNC_2(VAR_4);
  VAR_2->hpas[VAR_3] = 0;
 }
}
