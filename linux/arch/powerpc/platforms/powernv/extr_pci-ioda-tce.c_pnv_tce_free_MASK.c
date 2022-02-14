
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {long it_offset; int it_level_size; } ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (struct iommu_table*,int,unsigned long,int) ;

void FUNC_2(struct iommu_table *VAR_0, long VAR_1, long VAR_2)
{
 long VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  unsigned long VAR_4 = VAR_1 - VAR_0->it_offset + VAR_3;
  __be64 *VAR_5 = FUNC_1(VAR_0, 0, VAR_4, 0);

  if (VAR_5)
   *VAR_5 = FUNC_0(0);
  else

   VAR_3 |= VAR_0->it_level_size - 1;
 }
}
