
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_slave_config {int src_maxburst; scalar_t__ src_addr_width; scalar_t__ src_addr; int dst_maxburst; scalar_t__ dst_addr_width; scalar_t__ dst_addr; } ;
struct dma_pl330_chan {TYPE_1__* dmac; void* burst_len; void* burst_sz; scalar_t__ fifo_addr; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dma_pl330_chan*) ;
 struct dma_pl330_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_2,
   struct dma_slave_config *VAR_3,
   enum dma_transfer_direction VAR_4)
{
 struct dma_pl330_chan *VAR_5 = FUNC_3(VAR_2);

 FUNC_2(VAR_5);
 if (VAR_4 == VAR_1) {
  if (VAR_3->dst_addr)
   VAR_5->fifo_addr = VAR_3->dst_addr;
  if (VAR_3->dst_addr_width)
   VAR_5->burst_sz = FUNC_0(VAR_3->dst_addr_width);
  VAR_5->burst_len = FUNC_1(VAR_3->dst_maxburst,
   VAR_5->dmac->quirks);
 } else if (VAR_4 == VAR_0) {
  if (VAR_3->src_addr)
   VAR_5->fifo_addr = VAR_3->src_addr;
  if (VAR_3->src_addr_width)
   VAR_5->burst_sz = FUNC_0(VAR_3->src_addr_width);
  VAR_5->burst_len = FUNC_1(VAR_3->src_maxburst,
   VAR_5->dmac->quirks);
 }

 return 0;
}
