
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {unsigned long it_size; int it_lock; int it_map; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct iommu_table *VAR_1,
 unsigned long VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;

 VAR_4 = VAR_2 >> VAR_0;


 if (VAR_4 >= VAR_1->it_size)
  return;

 VAR_5 = VAR_4 + VAR_3;
 if (VAR_5 > VAR_1->it_size)
  VAR_5 = VAR_1->it_size;

 FUNC_1(&VAR_1->it_lock, VAR_6);

 FUNC_0(VAR_1->it_map, VAR_4, VAR_3);

 FUNC_2(&VAR_1->it_lock, VAR_6);
}
