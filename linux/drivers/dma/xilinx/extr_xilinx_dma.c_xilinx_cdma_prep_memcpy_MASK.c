
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_async_tx_descriptor {int phys; int tx_submit; } ;
struct xilinx_dma_tx_descriptor {struct dma_async_tx_descriptor async_tx; int segments; } ;
struct xilinx_dma_chan {scalar_t__ ext_addr; int common; TYPE_1__* xdev; } ;
struct xilinx_cdma_desc_hw {size_t control; int next_desc; void* dest_addr_msb; void* src_addr_msb; void* dest_addr; void* src_addr; } ;
struct xilinx_cdma_tx_segment {int phys; int node; struct xilinx_cdma_desc_hw hw; } ;
struct dma_chan {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {size_t max_buffer_len; } ;


 int FUNC_0 (struct dma_async_tx_descriptor*,int *) ;
 int FUNC_1 (int *,int *) ;
 struct xilinx_dma_chan* FUNC_2 (struct dma_chan*) ;
 void* FUNC_3 (void*) ;
 struct xilinx_cdma_tx_segment* FUNC_4 (struct xilinx_dma_chan*) ;
 struct xilinx_dma_tx_descriptor* FUNC_5 (struct xilinx_dma_chan*) ;
 int FUNC_6 (struct xilinx_dma_chan*,struct xilinx_dma_tx_descriptor*) ;
 int VAR_0 ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_7(struct dma_chan *VAR_1, dma_addr_t VAR_2,
   dma_addr_t VAR_3, size_t VAR_4, unsigned long VAR_5)
{
 struct xilinx_dma_chan *VAR_6 = FUNC_2(VAR_1);
 struct xilinx_dma_tx_descriptor *VAR_7;
 struct xilinx_cdma_tx_segment *VAR_8;
 struct xilinx_cdma_desc_hw *VAR_9;

 if (!VAR_4 || VAR_4 > VAR_6->xdev->max_buffer_len)
  return ((void*)0);

 VAR_7 = FUNC_5(VAR_6);
 if (!VAR_7)
  return ((void*)0);

 FUNC_0(&VAR_7->async_tx, &VAR_6->common);
 VAR_7->async_tx.tx_submit = VAR_0;


 VAR_8 = FUNC_4(VAR_6);
 if (!VAR_8)
  goto error;

 VAR_9 = &VAR_8->hw;
 VAR_9->control = VAR_4;
 VAR_9->src_addr = VAR_3;
 VAR_9->dest_addr = VAR_2;
 if (VAR_6->ext_addr) {
  VAR_9->src_addr_msb = FUNC_3(VAR_3);
  VAR_9->dest_addr_msb = FUNC_3(VAR_2);
 }


 FUNC_1(&VAR_8->node, &VAR_7->segments);

 VAR_7->async_tx.phys = VAR_8->phys;
 VAR_9->next_desc = VAR_8->phys;

 return &VAR_7->async_tx;

error:
 FUNC_6(VAR_6, VAR_7);
 return ((void*)0);
}
