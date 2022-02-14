
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {scalar_t__ strbuf_enabled; } ;
struct scatterlist {unsigned int dma_length; int dma_address; } ;
struct TYPE_4__ {unsigned long table_map_base; } ;
struct iommu {int lock; TYPE_2__ tbl; int * page_table; } ;
struct TYPE_3__ {struct strbuf* stc; struct iommu* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef int iopte_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (struct iommu*,struct scatterlist*) ;
 int FUNC_2 (struct iommu*,unsigned long) ;
 unsigned long FUNC_3 (int ,unsigned int,int ) ;
 int FUNC_4 (TYPE_2__*,int ,unsigned long,int ) ;
 int FUNC_5 (struct iommu*,int *) ;
 struct scatterlist* FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct strbuf*,struct iommu*,int ,unsigned long,unsigned long,int) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_6, struct scatterlist *VAR_7,
       int VAR_8, enum dma_data_direction VAR_9,
       unsigned long VAR_10)
{
 unsigned long VAR_11, VAR_12;
 struct scatterlist *VAR_13;
 struct strbuf *VAR_14;
 struct iommu *VAR_15;

 FUNC_0(VAR_9 == VAR_1);

 VAR_15 = VAR_6->archdata.iommu;
 VAR_14 = VAR_6->archdata.stc;

 VAR_12 = FUNC_1(VAR_15, VAR_7);

 FUNC_7(&VAR_15->lock, VAR_11);

 VAR_13 = VAR_7;
 while (VAR_8--) {
  dma_addr_t VAR_16 = VAR_13->dma_address;
  unsigned int VAR_17 = VAR_13->dma_length;
  unsigned long VAR_18, VAR_19;
  iopte_t *VAR_20;
  int VAR_21;

  if (!VAR_17)
   break;
  VAR_18 = FUNC_3(VAR_16, VAR_17, VAR_5);

  VAR_19 = ((VAR_16 - VAR_15->tbl.table_map_base)
    >> VAR_4);
  VAR_20 = VAR_15->page_table + VAR_19;

  VAR_16 &= VAR_3;
  if (VAR_14->strbuf_enabled && !(VAR_10 & VAR_0))
   FUNC_9(VAR_14, VAR_15, VAR_16, VAR_12,
         VAR_18, VAR_9);

  for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
   FUNC_5(VAR_15, VAR_20 + VAR_21);

  FUNC_4(&VAR_15->tbl, VAR_16, VAR_18,
         VAR_2);
  VAR_13 = FUNC_6(VAR_13);
 }

 FUNC_2(VAR_15, VAR_12);

 FUNC_8(&VAR_15->lock, VAR_11);
}
