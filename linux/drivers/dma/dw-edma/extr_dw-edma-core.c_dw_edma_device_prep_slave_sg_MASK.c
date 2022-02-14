
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_3__ {unsigned int len; struct scatterlist* sgl; } ;
struct TYPE_4__ {TYPE_1__ sg; } ;
struct dw_edma_transfer {int direction; unsigned long flags; int cyclic; TYPE_2__ xfer; struct dma_chan* dchan; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 struct dma_async_tx_descriptor* FUNC_0 (struct dw_edma_transfer*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_1(struct dma_chan *VAR_0, struct scatterlist *VAR_1,
        unsigned int VAR_2,
        enum dma_transfer_direction VAR_3,
        unsigned long VAR_4, void *VAR_5)
{
 struct dw_edma_transfer VAR_6;

 VAR_6.dchan = VAR_0;
 VAR_6.direction = VAR_3;
 VAR_6.xfer.sg.sgl = VAR_1;
 VAR_6.xfer.sg.len = VAR_2;
 VAR_6.flags = VAR_4;
 VAR_6.cyclic = 0;

 return FUNC_0(&VAR_6);
}
