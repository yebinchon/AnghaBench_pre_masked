
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc_dma_chan {int src_tcd_nunits; int dst_tcd_nunits; int lock; int dwidth; int dst_per_paddr; int swidth; int src_per_paddr; int chan; } ;
struct mpc_dma {int is_mpc8308; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; int dst_addr_width; int dst_addr; int src_addr_width; int src_addr; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct mpc_dma* FUNC_1 (int *) ;
 struct mpc_dma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_1,
     struct dma_slave_config *VAR_2)
{
 struct mpc_dma_chan *VAR_3 = FUNC_2(VAR_1);
 struct mpc_dma *VAR_4 = FUNC_1(&VAR_3->chan);
 unsigned long VAR_5;
 if (!FUNC_0(VAR_2->src_addr, VAR_2->src_addr_width) ||
     !FUNC_0(VAR_2->dst_addr, VAR_2->dst_addr_width)) {
  return -VAR_0;
 }

 if (!FUNC_3(VAR_2->src_addr_width, VAR_4->is_mpc8308) ||
     !FUNC_3(VAR_2->dst_addr_width, VAR_4->is_mpc8308))
  return -VAR_0;

 FUNC_4(&VAR_3->lock, VAR_5);

 VAR_3->src_per_paddr = VAR_2->src_addr;
 VAR_3->src_tcd_nunits = VAR_2->src_maxburst;
 VAR_3->swidth = VAR_2->src_addr_width;
 VAR_3->dst_per_paddr = VAR_2->dst_addr;
 VAR_3->dst_tcd_nunits = VAR_2->dst_maxburst;
 VAR_3->dwidth = VAR_2->dst_addr_width;


 if (VAR_3->src_tcd_nunits == 0)
  VAR_3->src_tcd_nunits = 1;
 if (VAR_3->dst_tcd_nunits == 0)
  VAR_3->dst_tcd_nunits = 1;

 FUNC_5(&VAR_3->lock, VAR_5);

 return 0;
}
