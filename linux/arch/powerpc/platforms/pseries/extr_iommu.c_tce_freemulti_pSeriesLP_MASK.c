
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_index; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int ,long) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 () ;
 void FUNC_5 (struct iommu_table*,long,long) ;

__attribute__((used)) static void FUNC_6(struct iommu_table *VAR_1, long VAR_2, long VAR_3)
{
 u64 VAR_4;

 if (!FUNC_1(VAR_0))
  return FUNC_5(VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_2((u64)VAR_1->it_index, (u64)VAR_2 << 12, 0, VAR_3);

 if (VAR_4 && FUNC_4()) {
  FUNC_3("tce_freemulti_pSeriesLP: plpar_tce_stuff failed\n");
  FUNC_3("\trc      = %lld\n", VAR_4);
  FUNC_3("\tindex   = 0x%llx\n", (u64)VAR_1->it_index);
  FUNC_3("\tnpages  = 0x%llx\n", (u64)VAR_3);
  FUNC_0();
 }
}
