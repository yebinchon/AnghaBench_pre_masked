
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_mtable_entry {int dummy; } ;
struct iommu_map_table {unsigned long poolsize; unsigned long nr_pools; int * map; } ;
struct ldc_iommu {int * page_table; struct iommu_map_table iommu_map_table; } ;
struct ldc_channel {int id; struct ldc_iommu iommu; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ldc_channel *VAR_0)
{
 struct ldc_iommu *VAR_1 = &VAR_0->iommu;
 struct iommu_map_table *VAR_2 = &VAR_1->iommu_map_table;
 unsigned long VAR_3, VAR_4, VAR_5;

 (void) FUNC_3(VAR_0->id, 0, 0);

 VAR_3 = VAR_2->poolsize * VAR_2->nr_pools;
 VAR_4 = VAR_3 * sizeof(struct ldc_mtable_entry);
 VAR_5 = FUNC_1(VAR_4);

 FUNC_0((unsigned long) VAR_1->page_table, VAR_5);
 VAR_1->page_table = ((void*)0);

 FUNC_2(VAR_2->map);
 VAR_2->map = ((void*)0);
}
