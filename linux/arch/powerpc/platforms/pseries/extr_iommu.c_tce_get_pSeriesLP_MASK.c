
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_index; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int,unsigned long*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static unsigned long FUNC_4(struct iommu_table *VAR_0, long VAR_1)
{
 u64 VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_1((u64)VAR_0->it_index, (u64)VAR_1 << 12, &VAR_3);

 if (VAR_2 && FUNC_3()) {
  FUNC_2("tce_get_pSeriesLP: plpar_tce_get failed. rc=%lld\n", VAR_2);
  FUNC_2("\tindex   = 0x%llx\n", (u64)VAR_0->it_index);
  FUNC_2("\ttcenum  = 0x%llx\n", (u64)VAR_1);
  FUNC_0();
 }

 return VAR_3;
}
