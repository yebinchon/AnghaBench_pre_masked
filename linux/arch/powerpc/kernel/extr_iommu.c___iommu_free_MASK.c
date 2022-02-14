
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_table {unsigned long it_page_shift; unsigned long it_offset; int it_map; TYPE_1__* it_ops; } ;
struct iommu_pool {int lock; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_2__ {int (* clear ) (struct iommu_table*,unsigned long,unsigned int) ;} ;


 int FUNC_0 (int ,unsigned long,unsigned int) ;
 struct iommu_pool* FUNC_1 (struct iommu_table*,unsigned long) ;
 int FUNC_2 (struct iommu_table*,unsigned long,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct iommu_table*,unsigned long,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct iommu_table *VAR_0, dma_addr_t VAR_1,
    unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4;
 unsigned long VAR_5;
 struct iommu_pool *VAR_6;

 VAR_3 = VAR_1 >> VAR_0->it_page_shift;
 VAR_4 = VAR_3 - VAR_0->it_offset;

 VAR_6 = FUNC_1(VAR_0, VAR_4);

 if (!FUNC_2(VAR_0, VAR_1, VAR_2))
  return;

 VAR_0->it_ops->clear(VAR_0, VAR_3, VAR_2);

 FUNC_3(&(VAR_6->lock), VAR_5);
 FUNC_0(VAR_0->it_map, VAR_4, VAR_2);
 FUNC_4(&(VAR_6->lock), VAR_5);
}
