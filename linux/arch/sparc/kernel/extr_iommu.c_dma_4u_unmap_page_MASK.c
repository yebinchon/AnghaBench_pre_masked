
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {scalar_t__ strbuf_enabled; } ;
struct TYPE_4__ {unsigned long table_map_base; } ;
struct iommu {TYPE_2__ tbl; int lock; scalar_t__ iommu_ctxflush; int * page_table; } ;
struct TYPE_3__ {struct strbuf* stc; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef int iopte_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iommu*,unsigned long) ;
 int FUNC_3 (TYPE_2__*,unsigned long,unsigned long,int ) ;
 int FUNC_4 (struct iommu*,int *) ;
 unsigned long FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct strbuf*,struct iommu*,unsigned long,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct device *VAR_6, dma_addr_t VAR_7,
         size_t VAR_8, enum dma_data_direction VAR_9,
         unsigned long VAR_10)
{
 struct iommu *VAR_11;
 struct strbuf *VAR_12;
 iopte_t *VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16, VAR_17;

 if (FUNC_10(VAR_9 == VAR_1)) {
  if (FUNC_6())
   FUNC_1(1);
  return;
 }

 VAR_11 = VAR_6->archdata.iommu;
 VAR_12 = VAR_6->archdata.stc;

 VAR_15 = FUNC_0(VAR_7 + VAR_8) - (VAR_7 & VAR_4);
 VAR_15 >>= VAR_5;
 VAR_13 = VAR_11->page_table +
  ((VAR_7 - VAR_11->tbl.table_map_base) >> VAR_5);
 VAR_7 &= VAR_4;

 FUNC_7(&VAR_11->lock, VAR_14);


 VAR_16 = 0;
 if (VAR_11->iommu_ctxflush)
  VAR_16 = (FUNC_5(*VAR_13) & VAR_3) >> 47UL;


 if (VAR_12->strbuf_enabled && !(VAR_10 & VAR_0))
  FUNC_9(VAR_12, VAR_11, VAR_7, VAR_16,
        VAR_15, VAR_9);


 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
  FUNC_4(VAR_11, VAR_13 + VAR_17);

 FUNC_2(VAR_11, VAR_16);
 FUNC_8(&VAR_11->lock, VAR_14);

 FUNC_3(&VAR_11->tbl, VAR_7, VAR_15, VAR_2);
}
