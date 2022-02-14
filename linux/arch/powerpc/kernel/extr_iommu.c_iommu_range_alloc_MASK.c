
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_pool {unsigned long start; unsigned long end; unsigned long hint; int lock; } ;
struct iommu_table {int nr_pools; unsigned long it_offset; int it_page_shift; unsigned long it_blocksize; struct iommu_pool* pools; int it_map; struct iommu_pool large_pool; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (struct device*) ;
 unsigned long FUNC_3 (int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static unsigned long FUNC_13(struct device *VAR_2,
           struct iommu_table *VAR_3,
                                       unsigned long VAR_4,
                                       unsigned long *VAR_5,
                                       unsigned long VAR_6,
                                       unsigned int VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12 = VAR_4 > 15;
 int VAR_13 = 0;
 unsigned long VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16;
 unsigned int VAR_17;
 struct iommu_pool *VAR_18;

 VAR_14 = (1ull << VAR_7) - 1;




 if (FUNC_12(VAR_4 == 0)) {
  if (FUNC_5())
   FUNC_1(1);
  return VAR_0;
 }

 if (FUNC_7(VAR_2))
  return VAR_0;





 VAR_17 = FUNC_6(VAR_1) & (VAR_3->nr_pools - 1);

 if (VAR_12)
  VAR_18 = &(VAR_3->large_pool);
 else
  VAR_18 = &(VAR_3->pools[VAR_17]);

 FUNC_9(&(VAR_18->lock), VAR_16);

again:
 if ((VAR_13 == 0) && VAR_5 && *VAR_5 &&
     (*VAR_5 >= VAR_18->start) && (*VAR_5 < VAR_18->end))
  VAR_10 = *VAR_5;
 else
  VAR_10 = VAR_18->hint;

 VAR_11 = VAR_18->end;





 if (VAR_10 >= VAR_11)
  VAR_10 = VAR_18->start;

 if (VAR_11 + VAR_3->it_offset > VAR_6) {
  VAR_11 = VAR_6 - VAR_3->it_offset + 1;




  if ((VAR_10 & VAR_6) >= VAR_11 || VAR_13 > 0) {
   FUNC_10(&(VAR_18->lock));
   VAR_18 = &(VAR_3->pools[0]);
   FUNC_8(&(VAR_18->lock));
   VAR_10 = VAR_18->start;
  } else {
   VAR_10 &= VAR_6;
  }
 }

 if (VAR_2)
  VAR_15 = FUNC_0(FUNC_2(VAR_2) + 1,
          1 << VAR_3->it_page_shift);
 else
  VAR_15 = FUNC_0(1UL << 32, 1 << VAR_3->it_page_shift);


 VAR_8 = FUNC_3(VAR_3->it_map, VAR_11, VAR_10, VAR_4, VAR_3->it_offset,
        VAR_15 >> VAR_3->it_page_shift, VAR_14);
 if (VAR_8 == -1) {
  if (FUNC_4(VAR_13 == 0)) {

   VAR_18->hint = VAR_18->start;
   VAR_13++;
   goto again;

  } else if (VAR_13 <= VAR_3->nr_pools) {

   FUNC_10(&(VAR_18->lock));
   VAR_17 = (VAR_17 + 1) & (VAR_3->nr_pools - 1);
   VAR_18 = &VAR_3->pools[VAR_17];
   FUNC_8(&(VAR_18->lock));
   VAR_18->hint = VAR_18->start;
   VAR_13++;
   goto again;

  } else {

   FUNC_11(&(VAR_18->lock), VAR_16);
   return VAR_0;
  }
 }

 VAR_9 = VAR_8 + VAR_4;


 if (VAR_12) {

  VAR_18->hint = VAR_9;
 } else {

  VAR_18->hint = (VAR_9 + VAR_3->it_blocksize - 1) &
                  ~(VAR_3->it_blocksize - 1);
 }


 if (VAR_5)
  *VAR_5 = VAR_9;

 FUNC_11(&(VAR_18->lock), VAR_16);

 return VAR_8;
}
