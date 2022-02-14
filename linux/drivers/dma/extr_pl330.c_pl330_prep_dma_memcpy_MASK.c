
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_bus_width; } ;
struct pl330_dmac {TYPE_1__ pcfg; } ;
struct dma_async_tx_descriptor {unsigned long flags; } ;
struct TYPE_4__ {int src_inc; int dst_inc; int brst_size; int brst_len; } ;
struct dma_pl330_desc {size_t bytes_requested; struct dma_async_tx_descriptor txd; TYPE_2__ rqcfg; int rqtype; } ;
struct dma_pl330_chan {struct pl330_dmac* dmac; } ;
struct dma_chan {int dummy; } ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 struct dma_pl330_desc* FUNC_0 (struct dma_pl330_chan*,size_t,size_t,size_t) ;
 int FUNC_1 (struct dma_pl330_desc*,size_t) ;
 struct dma_pl330_chan* FUNC_2 (struct dma_chan*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_4(struct dma_chan *VAR_1, dma_addr_t VAR_2,
  dma_addr_t VAR_3, size_t VAR_4, unsigned long VAR_5)
{
 struct dma_pl330_desc *VAR_6;
 struct dma_pl330_chan *VAR_7 = FUNC_2(VAR_1);
 struct pl330_dmac *VAR_8;
 int VAR_9;

 if (FUNC_3(!VAR_7 || !VAR_4))
  return ((void*)0);

 VAR_8 = VAR_7->dmac;

 VAR_6 = FUNC_0(VAR_7, VAR_2, VAR_3, VAR_4);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->rqcfg.src_inc = 1;
 VAR_6->rqcfg.dst_inc = 1;
 VAR_6->rqtype = VAR_0;


 VAR_9 = VAR_8->pcfg.data_bus_width / 8;






 while ((VAR_3 | VAR_2 | VAR_4) & (VAR_9 - 1))
  VAR_9 /= 2;

 VAR_6->rqcfg.brst_size = 0;
 while (VAR_9 != (1 << VAR_6->rqcfg.brst_size))
  VAR_6->rqcfg.brst_size++;





 if (VAR_6->rqcfg.brst_size * 8 < VAR_8->pcfg.data_bus_width)
  VAR_6->rqcfg.brst_len = 1;

 VAR_6->rqcfg.brst_len = FUNC_1(VAR_6, VAR_4);
 VAR_6->bytes_requested = VAR_4;

 VAR_6->txd.flags = VAR_5;

 return &VAR_6->txd;
}
