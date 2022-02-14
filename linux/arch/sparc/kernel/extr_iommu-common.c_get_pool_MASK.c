
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_pool {unsigned long start; } ;
struct iommu_map_table {int flags; unsigned long poolsize; unsigned int nr_pools; struct iommu_pool* pools; struct iommu_pool large_pool; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static struct iommu_pool *FUNC_1(struct iommu_map_table *VAR_1,
       unsigned long VAR_2)
{
 struct iommu_pool *VAR_3;
 unsigned long VAR_4 = VAR_1->large_pool.start;
 bool VAR_5 = ((VAR_1->flags & VAR_0) != 0);


 if (VAR_5 && VAR_2 >= VAR_4) {
  VAR_3 = &VAR_1->large_pool;
 } else {
  unsigned int VAR_6 = VAR_2 / VAR_1->poolsize;

  FUNC_0(VAR_6 >= VAR_1->nr_pools);
  VAR_3 = &VAR_1->pools[VAR_6];
 }
 return VAR_3;
}
