
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_index; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct iommu_table *VAR_0, long VAR_1, long VAR_2)
{
 u64 VAR_3;

 while (VAR_2--) {
  VAR_3 = FUNC_1((u64)VAR_0->it_index, (u64)VAR_1 << 12, 0);

  if (VAR_3 && FUNC_3()) {
   FUNC_2("tce_free_pSeriesLP: plpar_tce_put failed. rc=%lld\n", VAR_3);
   FUNC_2("\tindex   = 0x%llx\n", (u64)VAR_0->it_index);
   FUNC_2("\ttcenum  = 0x%llx\n", (u64)VAR_1);
   FUNC_0();
  }

  VAR_1++;
 }
}
