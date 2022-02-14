
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int xfer_size; int slave_addr; } ;
struct TYPE_3__ {int xfer_size; int slave_addr; } ;
struct rcar_dmac_chan {TYPE_2__ dst; TYPE_1__ src; } ;
struct dma_slave_config {int dst_addr_width; int src_addr_width; int dst_addr; int src_addr; } ;
struct dma_chan {int dummy; } ;


 struct rcar_dmac_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_1(struct dma_chan *VAR_0,
       struct dma_slave_config *VAR_1)
{
 struct rcar_dmac_chan *VAR_2 = FUNC_0(VAR_0);





 VAR_2->src.slave_addr = VAR_1->src_addr;
 VAR_2->dst.slave_addr = VAR_1->dst_addr;
 VAR_2->src.xfer_size = VAR_1->src_addr_width;
 VAR_2->dst.xfer_size = VAR_1->dst_addr_width;

 return 0;
}
