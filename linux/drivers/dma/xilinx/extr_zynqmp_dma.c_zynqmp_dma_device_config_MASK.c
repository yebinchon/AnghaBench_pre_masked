
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_dma_chan {int dst_burst_len; int src_burst_len; } ;
struct dma_slave_config {int dst_maxburst; int src_maxburst; } ;
struct dma_chan {int dummy; } ;


 struct zynqmp_dma_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_1(struct dma_chan *VAR_0,
        struct dma_slave_config *VAR_1)
{
 struct zynqmp_dma_chan *VAR_2 = FUNC_0(VAR_0);

 VAR_2->src_burst_len = VAR_1->src_maxburst;
 VAR_2->dst_burst_len = VAR_1->dst_maxburst;

 return 0;
}
