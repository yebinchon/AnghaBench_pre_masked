
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (void*) ;

void FUNC_3(struct iommu_table *VAR_7, unsigned long VAR_8,
 unsigned int VAR_9, unsigned long VAR_10, int VAR_11)
{
 u64* VAR_12;
 u64 VAR_13;
 u64 VAR_14;

 VAR_13 = (1 << VAR_3);
 if (VAR_11 != VAR_0)
  VAR_13 |= (1 << VAR_6);

 VAR_12 = ((u64*)VAR_7->it_base) + VAR_8;

 while (VAR_9--) {
  VAR_14 = (FUNC_2((void*)VAR_10)) >> VAR_1;
  VAR_13 &= ~VAR_4;
  VAR_13 |= (VAR_14 << VAR_5);

  *VAR_12 = FUNC_0(VAR_13);
  FUNC_1(VAR_12);

  VAR_10 += VAR_2;
  VAR_12++;
 }
}
