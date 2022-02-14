
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; size_t cnt; int paddr; } ;
struct TYPE_4__ {TYPE_1__ cyclic; } ;
struct dw_edma_transfer {int direction; unsigned long flags; int cyclic; TYPE_2__ xfer; struct dma_chan* dchan; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_addr_t ;


 struct dma_async_tx_descriptor* FUNC_0 (struct dw_edma_transfer*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_1(struct dma_chan *VAR_0, dma_addr_t VAR_1,
          size_t VAR_2, size_t VAR_3,
          enum dma_transfer_direction VAR_4,
          unsigned long VAR_5)
{
 struct dw_edma_transfer VAR_6;

 VAR_6.dchan = VAR_0;
 VAR_6.direction = VAR_4;
 VAR_6.xfer.cyclic.paddr = VAR_1;
 VAR_6.xfer.cyclic.len = VAR_2;
 VAR_6.xfer.cyclic.cnt = VAR_3;
 VAR_6.flags = VAR_5;
 VAR_6.cyclic = 1;

 return FUNC_0(&VAR_6);
}
