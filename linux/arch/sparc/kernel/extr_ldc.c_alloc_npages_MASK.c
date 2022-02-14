
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_mtable_entry {int dummy; } ;
struct ldc_iommu {struct ldc_mtable_entry* page_table; int iommu_map_table; } ;


 long VAR_0 ;
 long FUNC_0 (int *,int *,unsigned long,int *,unsigned long,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct ldc_mtable_entry *FUNC_2(struct ldc_iommu *VAR_1,
          unsigned long VAR_2)
{
 long VAR_3;

 VAR_3 = FUNC_0(((void*)0), &VAR_1->iommu_map_table,
          VAR_2, ((void*)0), (unsigned long)-1, 0);
 if (FUNC_1(VAR_3 == VAR_0))
  return ((void*)0);

 return VAR_1->page_table + VAR_3;
}
