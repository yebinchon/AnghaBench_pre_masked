
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct iommu_map_table {unsigned long table_map_base; } ;
struct iommu {struct iommu_map_table tbl; struct atu* atu; } ;
struct TYPE_2__ {struct iommu* iommu; } ;
struct device {int * dma_mask; TYPE_1__ archdata; } ;
struct atu {struct iommu_map_table tbl; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 long VAR_7 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (unsigned long) ;
 long FUNC_3 (unsigned long,int ) ;
 long FUNC_4 (int ) ;
 int FUNC_5 (struct device*,unsigned long,long) ;
 long FUNC_6 (struct device*,struct iommu_map_table*,unsigned long,int *,unsigned long,int ) ;
 int FUNC_7 (struct iommu_map_table*,unsigned long,unsigned long,long) ;
 int FUNC_8 (struct iommu*,int ) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static dma_addr_t FUNC_14(struct device *VAR_11, struct page *VAR_12,
      unsigned long VAR_13, size_t VAR_14,
      enum dma_data_direction VAR_15,
      unsigned long VAR_16)
{
 struct iommu *VAR_17;
 struct atu *VAR_18;
 struct iommu_map_table *VAR_19;
 u64 VAR_20;
 unsigned long VAR_21, VAR_22, VAR_23;
 unsigned long VAR_24, VAR_25;
 unsigned long VAR_26;
 dma_addr_t VAR_27, VAR_28;
 long VAR_29;

 VAR_17 = VAR_11->archdata.iommu;
 VAR_18 = VAR_17->atu;

 if (FUNC_13(VAR_15 == VAR_2))
  goto bad;

 VAR_23 = (unsigned long)(FUNC_11(VAR_12) + VAR_13);
 VAR_22 = FUNC_0(VAR_23 + VAR_14) - (VAR_23 & VAR_8);
 VAR_22 >>= VAR_9;

 VAR_20 = *VAR_11->dma_mask;
 if (!FUNC_8(VAR_17, VAR_20))
  VAR_19 = &VAR_17->tbl;
 else
  VAR_19 = &VAR_18->tbl;

 VAR_29 = FUNC_6(VAR_11, VAR_19, VAR_22, ((void*)0),
          (unsigned long)(-1), 0);

 if (FUNC_13(VAR_29 == VAR_7))
  goto bad;

 VAR_27 = (VAR_19->table_map_base + (VAR_29 << VAR_9));
 VAR_28 = VAR_27 | (VAR_23 & ~VAR_8);
 VAR_25 = FUNC_2(VAR_23 & VAR_8);
 VAR_26 = VAR_4;
 if (VAR_15 != VAR_3)
  VAR_26 |= VAR_6;

 if (VAR_16 & VAR_0)
  VAR_26 |= VAR_5;

 FUNC_10(VAR_21);

 FUNC_5(VAR_11, VAR_26, VAR_29);

 for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++, VAR_25 += VAR_10) {
  long VAR_30 = FUNC_3(VAR_25, VAR_20);
  if (FUNC_13(VAR_30 < 0L))
   goto iommu_map_fail;
 }
 if (FUNC_13(FUNC_4(VAR_20) < 0L))
  goto iommu_map_fail;

 FUNC_9(VAR_21);

 return VAR_28;

bad:
 if (FUNC_12())
  FUNC_1(1);
 return VAR_1;

iommu_map_fail:
 FUNC_9(VAR_21);
 FUNC_7(VAR_19, VAR_27, VAR_22, VAR_7);
 return VAR_1;
}
