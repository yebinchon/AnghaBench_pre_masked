
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_pool {unsigned long start; unsigned long end; unsigned long hint; int lock; } ;
struct iommu_map_table {unsigned int nr_pools; int flags; unsigned long table_map_base; unsigned long table_shift; unsigned long poolsize; int (* lazy_flush ) (struct iommu_map_table*) ;struct iommu_pool* pools; int map; struct iommu_pool large_pool; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (unsigned long long,int) ;
 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct iommu_map_table*) ;
 unsigned long long FUNC_4 (struct device*) ;
 unsigned long FUNC_5 (int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct iommu_map_table*) ;
 int FUNC_8 (struct iommu_map_table*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct iommu_map_table*) ;
 scalar_t__ FUNC_14 (int) ;

unsigned long FUNC_15(struct device *VAR_6,
    struct iommu_map_table *VAR_7,
    unsigned long VAR_8,
    unsigned long *VAR_9,
    unsigned long VAR_10,
    unsigned int VAR_11)
{
 unsigned int VAR_12 = FUNC_2(VAR_4);
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 struct iommu_pool *VAR_18;
 int VAR_19 = 0;
 unsigned int VAR_20;
 unsigned int VAR_21 = VAR_7->nr_pools;
 unsigned long VAR_22;
 bool VAR_23 = ((VAR_7->flags & VAR_2) != 0);
 bool VAR_24 = (VAR_23 && VAR_8 > VAR_5);
 unsigned long VAR_25;
 unsigned long VAR_26 = 0;

 if (VAR_11 > 0)
  VAR_26 = ~0ul >> (VAR_0 - VAR_11);


 if (FUNC_14(VAR_8 == 0)) {
  FUNC_1(1);
  return VAR_1;
 }

 if (VAR_24) {
  VAR_18 = &(VAR_7->large_pool);
  VAR_20 = 0;
 } else {

  VAR_20 = VAR_12 & (VAR_21 - 1);
  VAR_18 = &(VAR_7->pools[VAR_20]);
 }
 FUNC_10(&VAR_18->lock, VAR_22);

 again:
 if (VAR_19 == 0 && VAR_9 && *VAR_9 &&
     (*VAR_9 >= VAR_18->start) && (*VAR_9 < VAR_18->end))
  VAR_15 = *VAR_9;
 else
  VAR_15 = VAR_18->hint;

 VAR_16 = VAR_18->end;







 if (VAR_15 >= VAR_16)
  VAR_15 = VAR_18->start;
 VAR_25 = VAR_7->table_map_base >> VAR_7->table_shift;
 if (VAR_16 + VAR_25 > VAR_10) {
  VAR_16 = VAR_10 - VAR_25 + 1;




  if ((VAR_15 & VAR_10) >= VAR_16 || VAR_19 > 0) {
   FUNC_11(&(VAR_18->lock));
   VAR_18 = &(VAR_7->pools[0]);
   FUNC_9(&(VAR_18->lock));
   VAR_15 = VAR_18->start;
  } else {
   VAR_15 &= VAR_10;
  }
 }

 if (VAR_6)
  VAR_17 = FUNC_0(FUNC_4(VAR_6) + 1,
          1 << VAR_7->table_shift);
 else
  VAR_17 = FUNC_0(1ULL << 32, 1 << VAR_7->table_shift);

 VAR_17 = VAR_17 >> VAR_7->table_shift;





 if ((VAR_7->flags & VAR_3) != 0) {
  VAR_25 = 0;
  VAR_17 = VAR_7->poolsize * VAR_7->nr_pools;
 }
 VAR_13 = FUNC_5(VAR_7->map, VAR_16, VAR_15, VAR_8, VAR_25,
        VAR_17, VAR_26);
 if (VAR_13 == -1) {
  if (FUNC_6(VAR_19 == 0)) {

   VAR_18->hint = VAR_18->start;
   FUNC_8(VAR_7);
   VAR_19++;
   goto again;
  } else if (!VAR_24 && VAR_19 <= VAR_7->nr_pools) {
   FUNC_11(&(VAR_18->lock));
   VAR_20 = (VAR_20 + 1) & (VAR_7->nr_pools - 1);
   VAR_18 = &(VAR_7->pools[VAR_20]);
   FUNC_9(&(VAR_18->lock));
   VAR_18->hint = VAR_18->start;
   FUNC_8(VAR_7);
   VAR_19++;
   goto again;
  } else {

   VAR_13 = VAR_1;
   goto bail;
  }
 }
 if (VAR_7->lazy_flush &&
     (VAR_13 < VAR_18->hint || FUNC_7(VAR_7))) {
  FUNC_3(VAR_7);
  VAR_7->lazy_flush(VAR_7);
 }

 VAR_14 = VAR_13 + VAR_8;
 VAR_18->hint = VAR_14;


 if (VAR_9)
  *VAR_9 = VAR_14;
bail:
 FUNC_12(&(VAR_18->lock), VAR_22);

 return VAR_13;
}
