
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iommu_table *VAR_0, long VAR_1, unsigned int VAR_2)
{
 u64* VAR_3;

 VAR_3 = ((u64*)VAR_0->it_base) + VAR_1;

 while (VAR_2--) {
  *VAR_3 = FUNC_0(0);
  FUNC_1(VAR_3);
  VAR_3++;
 }
}
