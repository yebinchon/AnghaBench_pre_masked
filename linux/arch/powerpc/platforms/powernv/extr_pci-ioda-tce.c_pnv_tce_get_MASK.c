
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {scalar_t__ it_offset; } ;
typedef int __be64 ;


 unsigned long FUNC_0 (int ) ;
 int * FUNC_1 (struct iommu_table*,int,scalar_t__,int) ;

unsigned long FUNC_2(struct iommu_table *VAR_0, long VAR_1)
{
 __be64 *VAR_2 = FUNC_1(VAR_0, 0, VAR_1 - VAR_0->it_offset, 0);

 if (!VAR_2)
  return 0;

 return FUNC_0(*VAR_2);
}
