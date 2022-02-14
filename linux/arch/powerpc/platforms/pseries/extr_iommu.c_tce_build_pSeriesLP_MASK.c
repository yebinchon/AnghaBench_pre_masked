
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_table {scalar_t__ it_index; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct iommu_table*,long,long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct iommu_table *VAR_7, long VAR_8,
    long VAR_9, unsigned long VAR_10,
    enum dma_data_direction VAR_11,
    unsigned long VAR_12)
{
 u64 VAR_13 = 0;
 u64 VAR_14, VAR_15;
 u64 VAR_16;
 int VAR_17 = 0;
 long VAR_18 = VAR_8, VAR_19 = VAR_9;

 VAR_16 = FUNC_0(VAR_10) >> VAR_6;
 VAR_14 = VAR_2;
 if (VAR_11 != VAR_0)
  VAR_14 |= VAR_3;

 while (VAR_9--) {
  VAR_15 = VAR_14 | (VAR_16 & VAR_4) << VAR_5;
  VAR_13 = FUNC_2((u64)VAR_7->it_index, (u64)VAR_8 << 12, VAR_15);

  if (FUNC_6(VAR_13 == VAR_1)) {
   VAR_17 = (int)VAR_13;
   FUNC_5(VAR_7, VAR_18,
                      (VAR_19 - (VAR_9 + 1)));
   break;
  }

  if (VAR_13 && FUNC_4()) {
   FUNC_3("tce_build_pSeriesLP: plpar_tce_put failed. rc=%lld\n", VAR_13);
   FUNC_3("\tindex   = 0x%llx\n", (u64)VAR_7->it_index);
   FUNC_3("\ttcenum  = 0x%llx\n", (u64)VAR_8);
   FUNC_3("\ttce val = 0x%llx\n", VAR_15 );
   FUNC_1();
  }

  VAR_8++;
  VAR_16++;
 }
 return VAR_17;
}
