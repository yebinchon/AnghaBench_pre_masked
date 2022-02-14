
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {scalar_t__ it_base; } ;
typedef int __be64 ;



__attribute__((used)) static void FUNC_0(struct iommu_table *VAR_0, long VAR_1, long VAR_2)
{
 __be64 *VAR_3;

 VAR_3 = ((__be64 *)VAR_0->it_base) + VAR_1;

 while (VAR_2--)
  *(VAR_3++) = 0;
}
