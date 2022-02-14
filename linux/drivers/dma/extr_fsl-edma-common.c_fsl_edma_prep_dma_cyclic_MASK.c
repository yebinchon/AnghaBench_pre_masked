
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct fsl_edma_desc {int iscyclic; int dirn; int vdesc; TYPE_2__* tcd; } ;
struct TYPE_3__ {size_t dst_addr_width; size_t dst_maxburst; size_t src_addr_width; size_t src_maxburst; } ;
struct fsl_edma_chan {size_t dma_dev_addr; int vchan; void* attr; TYPE_1__ cfg; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {size_t ptcd; int vtcd; } ;


 int VAR_0 ;
 struct fsl_edma_desc* FUNC_0 (struct fsl_edma_chan*,int) ;
 int FUNC_1 (int ,size_t,size_t,void*,size_t,size_t,int ,size_t,size_t,size_t,size_t,int,int,int) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (struct fsl_edma_chan*,int) ;
 int FUNC_4 (int) ;
 struct fsl_edma_chan* FUNC_5 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_6 (int *,int *,unsigned long) ;

struct dma_async_tx_descriptor *FUNC_7(
  struct dma_chan *VAR_1, dma_addr_t VAR_2, size_t VAR_3,
  size_t VAR_4, enum dma_transfer_direction VAR_5,
  unsigned long VAR_6)
{
 struct fsl_edma_chan *VAR_7 = FUNC_5(VAR_1);
 struct fsl_edma_desc *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 u16 VAR_16, VAR_17, VAR_18;

 if (!FUNC_4(VAR_5))
  return ((void*)0);

 if (!FUNC_3(VAR_7, VAR_5))
  return ((void*)0);

 VAR_10 = VAR_3 / VAR_4;
 VAR_8 = FUNC_0(VAR_7, VAR_10);
 if (!VAR_8)
  return ((void*)0);
 VAR_8->iscyclic = 1;
 VAR_8->dirn = VAR_5;

 VAR_9 = VAR_2;
 if (VAR_5 == VAR_0) {
  VAR_7->attr =
   FUNC_2(VAR_7->cfg.dst_addr_width);
  VAR_15 = VAR_7->cfg.dst_addr_width *
   VAR_7->cfg.dst_maxburst;
 } else {
  VAR_7->attr =
   FUNC_2(VAR_7->cfg.src_addr_width);
  VAR_15 = VAR_7->cfg.src_addr_width *
   VAR_7->cfg.src_maxburst;
 }

 VAR_18 = VAR_4 / VAR_15;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  if (VAR_9 >= VAR_2 + VAR_3)
   VAR_9 = VAR_2;


  VAR_14 = VAR_8->tcd[(VAR_11 + 1) % VAR_10].ptcd;

  if (VAR_5 == VAR_0) {
   VAR_12 = VAR_9;
   VAR_13 = VAR_7->dma_dev_addr;
   VAR_16 = VAR_7->cfg.dst_addr_width;
   VAR_17 = 0;
  } else {
   VAR_12 = VAR_7->dma_dev_addr;
   VAR_13 = VAR_9;
   VAR_16 = 0;
   VAR_17 = VAR_7->cfg.src_addr_width;
  }

  FUNC_1(VAR_8->tcd[VAR_11].vtcd, VAR_12, VAR_13,
      VAR_7->attr, VAR_16, VAR_15, 0, VAR_18,
      VAR_18, VAR_17, VAR_14, 1, 0, 1);
  VAR_9 += VAR_4;
 }

 return FUNC_6(&VAR_7->vchan, &VAR_8->vdesc, VAR_6);
}
