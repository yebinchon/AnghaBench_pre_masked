
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_async_tx_descriptor {int cookie; } ;
struct ep93xx_dma_desc {size_t size; struct dma_async_tx_descriptor txd; int tx_list; int node; void* dst_addr; void* src_addr; } ;
struct ep93xx_dma_chan {void* runtime_addr; int slave_config; int flags; TYPE_1__* edma; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int m2m; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct dma_chan*) ;
 struct ep93xx_dma_desc* FUNC_3 (struct ep93xx_dma_chan*) ;
 int FUNC_4 (struct ep93xx_dma_chan*,struct ep93xx_dma_desc*) ;
 int FUNC_5 (struct dma_chan*,int,int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct ep93xx_dma_chan* FUNC_8 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_9(struct dma_chan *VAR_4, dma_addr_t VAR_5,
      size_t VAR_6, size_t VAR_7,
      enum dma_transfer_direction VAR_8, unsigned long VAR_9)
{
 struct ep93xx_dma_chan *VAR_10 = FUNC_8(VAR_4);
 struct ep93xx_dma_desc *VAR_11, *VAR_12;
 size_t VAR_13 = 0;

 if (!VAR_10->edma->m2m && VAR_8 != FUNC_2(VAR_4)) {
  FUNC_1(FUNC_0(VAR_10),
    "channel was configured with different direction\n");
  return ((void*)0);
 }

 if (FUNC_7(VAR_3, &VAR_10->flags)) {
  FUNC_1(FUNC_0(VAR_10),
    "channel is already used for cyclic transfers\n");
  return ((void*)0);
 }

 if (VAR_7 > VAR_0) {
  FUNC_1(FUNC_0(VAR_10), "too big period length %zu\n",
    VAR_7);
  return ((void*)0);
 }

 FUNC_5(VAR_4, VAR_8, &VAR_10->slave_config);


 VAR_12 = ((void*)0);
 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13 += VAR_7) {
  VAR_11 = FUNC_3(VAR_10);
  if (!VAR_11) {
   FUNC_1(FUNC_0(VAR_10), "couldn't get descriptor\n");
   goto fail;
  }

  if (VAR_8 == VAR_1) {
   VAR_11->src_addr = VAR_5 + VAR_13;
   VAR_11->dst_addr = VAR_10->runtime_addr;
  } else {
   VAR_11->src_addr = VAR_10->runtime_addr;
   VAR_11->dst_addr = VAR_5 + VAR_13;
  }

  VAR_11->size = VAR_7;

  if (!VAR_12)
   VAR_12 = VAR_11;
  else
   FUNC_6(&VAR_11->node, &VAR_12->tx_list);
 }

 VAR_12->txd.cookie = -VAR_2;

 return &VAR_12->txd;

fail:
 FUNC_4(VAR_10, VAR_12);
 return ((void*)0);
}
