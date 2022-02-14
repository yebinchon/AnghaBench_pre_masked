
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_9__ {int cnt; void* paddr; scalar_t__ len; } ;
struct TYPE_7__ {int len; struct scatterlist* sgl; } ;
struct TYPE_10__ {TYPE_4__ cyclic; TYPE_2__ sg; } ;
struct dw_edma_transfer {int direction; int flags; scalar_t__ cyclic; TYPE_5__ xfer; int dchan; } ;
struct dw_edma_desc {int vd; int alloc_sz; } ;
struct TYPE_8__ {int sz; } ;
struct dw_edma_chunk {scalar_t__ bursts_alloc; TYPE_3__ ll_region; } ;
struct TYPE_6__ {void* dst_addr; void* src_addr; } ;
struct dw_edma_chan {scalar_t__ dir; scalar_t__ ll_max; int vc; TYPE_1__ config; int configured; } ;
struct dw_edma_burst {void* sar; void* dar; scalar_t__ sz; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef void* phys_addr_t ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dw_edma_chan* FUNC_0 (int ) ;
 struct dw_edma_burst* FUNC_1 (struct dw_edma_chunk*) ;
 struct dw_edma_chunk* FUNC_2 (struct dw_edma_desc*) ;
 struct dw_edma_desc* FUNC_3 (struct dw_edma_chan*) ;
 int FUNC_4 (struct dw_edma_desc*) ;
 void* FUNC_5 (struct scatterlist*) ;
 scalar_t__ FUNC_6 (struct scatterlist*) ;
 struct scatterlist* FUNC_7 (struct scatterlist*) ;
 scalar_t__ FUNC_8 (int) ;
 struct dma_async_tx_descriptor* FUNC_9 (int *,int *,int ) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_10(struct dw_edma_transfer *VAR_4)
{
 struct dw_edma_chan *VAR_5 = FUNC_0(VAR_4->dchan);
 enum dma_transfer_direction VAR_6 = VAR_4->direction;
 phys_addr_t VAR_7, VAR_8;
 struct scatterlist *VAR_9 = ((void*)0);
 struct dw_edma_chunk *VAR_10;
 struct dw_edma_burst *VAR_11;
 struct dw_edma_desc *VAR_12;
 u32 VAR_13;
 int VAR_14;

 if ((VAR_6 == VAR_1 && VAR_5->dir == VAR_3) ||
     (VAR_6 == VAR_0 && VAR_5->dir == VAR_2))
  return ((void*)0);

 if (VAR_4->cyclic) {
  if (!VAR_4->xfer.cyclic.len || !VAR_4->xfer.cyclic.cnt)
   return ((void*)0);
 } else {
  if (VAR_4->xfer.sg.len < 1)
   return ((void*)0);
 }

 if (!VAR_5->configured)
  return ((void*)0);

 VAR_12 = FUNC_3(VAR_5);
 if (FUNC_8(!VAR_12))
  goto err_alloc;

 VAR_10 = FUNC_2(VAR_12);
 if (FUNC_8(!VAR_10))
  goto err_alloc;

 VAR_7 = VAR_5->config.src_addr;
 VAR_8 = VAR_5->config.dst_addr;

 if (VAR_4->cyclic) {
  VAR_13 = VAR_4->xfer.cyclic.cnt;
 } else {
  VAR_13 = VAR_4->xfer.sg.len;
  VAR_9 = VAR_4->xfer.sg.sgl;
 }

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  if (!VAR_4->cyclic && !VAR_9)
   break;

  if (VAR_10->bursts_alloc == VAR_5->ll_max) {
   VAR_10 = FUNC_2(VAR_12);
   if (FUNC_8(!VAR_10))
    goto err_alloc;
  }

  VAR_11 = FUNC_1(VAR_10);
  if (FUNC_8(!VAR_11))
   goto err_alloc;

  if (VAR_4->cyclic)
   VAR_11->sz = VAR_4->xfer.cyclic.len;
  else
   VAR_11->sz = FUNC_6(VAR_9);

  VAR_10->ll_region.sz += VAR_11->sz;
  VAR_12->alloc_sz += VAR_11->sz;

  if (VAR_6 == VAR_0) {
   VAR_11->sar = VAR_7;
   if (VAR_4->cyclic) {
    VAR_11->dar = VAR_4->xfer.cyclic.paddr;
   } else {
    VAR_11->dar = FUNC_5(VAR_9);







    VAR_7 += FUNC_6(VAR_9);
   }
  } else {
   VAR_11->dar = VAR_8;
   if (VAR_4->cyclic) {
    VAR_11->sar = VAR_4->xfer.cyclic.paddr;
   } else {
    VAR_11->sar = FUNC_5(VAR_9);







    VAR_8 += FUNC_6(VAR_9);
   }
  }

  if (!VAR_4->cyclic)
   VAR_9 = FUNC_7(VAR_9);
 }

 return FUNC_9(&VAR_5->vc, &VAR_12->vd, VAR_4->flags);

err_alloc:
 if (VAR_12)
  FUNC_4(VAR_12);

 return ((void*)0);
}
