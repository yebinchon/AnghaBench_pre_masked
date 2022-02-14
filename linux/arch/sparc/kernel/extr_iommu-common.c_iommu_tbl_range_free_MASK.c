
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct iommu_pool {int lock; } ;
struct iommu_map_table {unsigned long table_shift; unsigned long table_map_base; int map; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long,unsigned long) ;
 struct iommu_pool* FUNC_1 (struct iommu_map_table*,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct iommu_map_table *VAR_1, u64 VAR_2,
     unsigned long VAR_3, unsigned long VAR_4)
{
 struct iommu_pool *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_1->table_shift;

 if (VAR_4 == VAR_0)
  VAR_4 = (VAR_2 - VAR_1->table_map_base) >> VAR_7;
 VAR_5 = FUNC_1(VAR_1, VAR_4);

 FUNC_2(&(VAR_5->lock), VAR_6);
 FUNC_0(VAR_1->map, VAR_4, VAR_3);
 FUNC_3(&(VAR_5->lock), VAR_6);
}
