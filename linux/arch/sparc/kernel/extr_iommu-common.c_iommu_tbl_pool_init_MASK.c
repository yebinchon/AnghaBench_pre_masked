
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iommu_pool {unsigned int start; unsigned int hint; unsigned long end; int lock; } ;
struct iommu_map_table {unsigned long nr_pools; void (* lazy_flush ) (struct iommu_map_table*) ;unsigned long poolsize; TYPE_1__* pools; int flags; scalar_t__ table_shift; struct iommu_pool large_pool; } ;
struct TYPE_2__ {unsigned int start; unsigned int hint; unsigned int end; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iommu_map_table *VAR_3,
    unsigned long VAR_4,
    u32 VAR_5,
    void (*VAR_6)(struct iommu_map_table *),
    bool VAR_7, u32 VAR_8,
    bool VAR_9)
{
 unsigned int VAR_10, VAR_11;
 struct iommu_pool *VAR_12 = &(VAR_3->large_pool);

 FUNC_1();
 if (VAR_8 == 0)
  VAR_3->nr_pools = VAR_2;
 else
  VAR_3->nr_pools = VAR_8;
 FUNC_0(VAR_8 > VAR_2);

 VAR_3->table_shift = VAR_5;
 VAR_3->lazy_flush = VAR_6;
 VAR_10 = 0;
 if (VAR_9)
  VAR_3->flags |= VAR_1;
 if (VAR_7)
  VAR_3->flags |= VAR_0;

 if (!VAR_7)
  VAR_3->poolsize = VAR_4/VAR_3->nr_pools;
 else
  VAR_3->poolsize = (VAR_4 * 3 / 4)/VAR_3->nr_pools;
 for (VAR_11 = 0; VAR_11 < VAR_3->nr_pools; VAR_11++) {
  FUNC_2(&(VAR_3->pools[VAR_11].lock));
  VAR_3->pools[VAR_11].start = VAR_10;
  VAR_3->pools[VAR_11].hint = VAR_10;
  VAR_10 += VAR_3->poolsize;
  VAR_3->pools[VAR_11].end = VAR_10 - 1;
 }
 if (!VAR_7)
  return;

 FUNC_2(&(VAR_12->lock));
 VAR_12->start = VAR_10;
 VAR_12->hint = VAR_12->start;
 VAR_12->end = VAR_4;
}
