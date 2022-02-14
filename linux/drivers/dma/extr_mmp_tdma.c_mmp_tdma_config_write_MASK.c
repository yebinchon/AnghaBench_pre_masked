
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {int dir; int buswidth; int burst_sz; int dev_addr; } ;
struct dma_slave_config {int dst_addr_width; int dst_maxburst; int dst_addr; int src_addr_width; int src_maxburst; int src_addr; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*) ;
 struct mmp_tdma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_1,
     enum dma_transfer_direction VAR_2,
     struct dma_slave_config *VAR_3)
{
 struct mmp_tdma_chan *VAR_4 = FUNC_1(VAR_1);

 if (VAR_2 == VAR_0) {
  VAR_4->dev_addr = VAR_3->src_addr;
  VAR_4->burst_sz = VAR_3->src_maxburst;
  VAR_4->buswidth = VAR_3->src_addr_width;
 } else {
  VAR_4->dev_addr = VAR_3->dst_addr;
  VAR_4->burst_sz = VAR_3->dst_maxburst;
  VAR_4->buswidth = VAR_3->dst_addr_width;
 }
 VAR_4->dir = VAR_2;

 return FUNC_0(VAR_1);
}
