
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct iommu_map_table {scalar_t__ table_map_base; } ;
struct iommu {TYPE_2__* atu; struct iommu_map_table tbl; } ;
struct TYPE_3__ {int numa_node; struct iommu* iommu; } ;
struct device {int coherent_dma_mask; TYPE_1__ archdata; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {struct iommu_map_table tbl; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 long VAR_4 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_1 (unsigned long) ;
 struct page* FUNC_2 (int,int ,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (size_t) ;
 long FUNC_5 (unsigned long,int ) ;
 long FUNC_6 (int ) ;
 int FUNC_7 (struct device*,unsigned long,long) ;
 long FUNC_8 (struct device*,struct iommu_map_table*,unsigned long,int *,unsigned long,int ) ;
 int FUNC_9 (struct iommu_map_table*,scalar_t__,unsigned long,long) ;
 int FUNC_10 (struct iommu*,int ) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (char*,int ,unsigned long) ;
 scalar_t__ FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static void *FUNC_16(struct device *VAR_8, size_t VAR_9,
       dma_addr_t *VAR_10, gfp_t VAR_11,
       unsigned long VAR_12)
{
 u64 VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19 = 0;
 struct iommu *VAR_20;
 struct iommu_map_table *VAR_21;
 struct page *VAR_22;
 void *VAR_23;
 long VAR_24;
 int VAR_25;

 VAR_9 = FUNC_0(VAR_9);
 VAR_15 = FUNC_4(VAR_9);
 if (FUNC_15(VAR_15 >= VAR_6))
  return ((void*)0);

 VAR_17 = VAR_9 >> VAR_5;

 if (VAR_12 & VAR_0)
  VAR_19 = VAR_2;

 VAR_25 = VAR_8->archdata.numa_node;
 VAR_22 = FUNC_2(VAR_25, VAR_11, VAR_15);
 if (FUNC_15(!VAR_22))
  return ((void*)0);

 VAR_16 = (unsigned long) FUNC_14(VAR_22);
 FUNC_13((char *)VAR_16, 0, VAR_7 << VAR_15);

 VAR_20 = VAR_8->archdata.iommu;
 VAR_13 = VAR_8->coherent_dma_mask;
 if (!FUNC_10(VAR_20, VAR_13))
  VAR_21 = &VAR_20->tbl;
 else
  VAR_21 = &VAR_20->atu->tbl;

 VAR_24 = FUNC_8(VAR_8, VAR_21, VAR_17, ((void*)0),
          (unsigned long)(-1), 0);

 if (FUNC_15(VAR_24 == VAR_4))
  goto range_alloc_fail;

 *VAR_10 = (VAR_21->table_map_base + (VAR_24 << VAR_5));
 VAR_23 = (void *) VAR_16;
 VAR_16 = FUNC_1(VAR_16);

 FUNC_12(VAR_14);

 FUNC_7(VAR_8,
     (VAR_1 | VAR_19 |
      VAR_3),
     VAR_24);

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  long VAR_26 = FUNC_5(VAR_16 + (VAR_18 * VAR_7), VAR_13);
  if (FUNC_15(VAR_26 < 0L))
   goto iommu_map_fail;
 }

 if (FUNC_15(FUNC_6(VAR_13) < 0L))
  goto iommu_map_fail;

 FUNC_11(VAR_14);

 return VAR_23;

iommu_map_fail:
 FUNC_11(VAR_14);
 FUNC_9(VAR_21, *VAR_10, VAR_17, VAR_4);

range_alloc_fail:
 FUNC_3(VAR_16, VAR_15);
 return ((void*)0);
}
