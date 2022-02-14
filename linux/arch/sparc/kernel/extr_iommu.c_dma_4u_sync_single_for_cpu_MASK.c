
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {scalar_t__ strbuf_ctxflush; int strbuf_enabled; } ;
struct iommu_map_table {unsigned long table_map_base; } ;
struct iommu {int lock; int * page_table; struct iommu_map_table tbl; scalar_t__ iommu_ctxflush; } ;
struct TYPE_2__ {struct strbuf* stc; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef int iopte_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct strbuf*,struct iommu*,unsigned long,unsigned long,unsigned long,int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_3,
           dma_addr_t VAR_4, size_t VAR_5,
           enum dma_data_direction VAR_6)
{
 struct iommu *VAR_7;
 struct strbuf *VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;

 VAR_7 = VAR_3->archdata.iommu;
 VAR_8 = VAR_3->archdata.stc;

 if (!VAR_8->strbuf_enabled)
  return;

 FUNC_2(&VAR_7->lock, VAR_9);

 VAR_11 = FUNC_0(VAR_4 + VAR_5) - (VAR_4 & VAR_1);
 VAR_11 >>= VAR_2;
 VAR_4 &= VAR_1;


 VAR_10 = 0;
 if (VAR_7->iommu_ctxflush &&
     VAR_8->strbuf_ctxflush) {
  iopte_t *VAR_12;
  struct iommu_map_table *VAR_13 = &VAR_7->tbl;

  VAR_12 = VAR_7->page_table +
   ((VAR_4 - VAR_13->table_map_base)>>VAR_2);
  VAR_10 = (FUNC_1(*VAR_12) & VAR_0) >> 47UL;
 }


 FUNC_4(VAR_8, VAR_7, VAR_4, VAR_10, VAR_11, VAR_6);

 FUNC_3(&VAR_7->lock, VAR_9);
}
