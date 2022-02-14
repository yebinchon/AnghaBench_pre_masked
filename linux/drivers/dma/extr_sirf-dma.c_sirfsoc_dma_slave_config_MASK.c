
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_dma_chan {int mode; int lock; } ;
struct dma_slave_config {scalar_t__ src_addr_width; scalar_t__ dst_addr_width; int src_maxburst; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sirfsoc_dma_chan* FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_2,
        struct dma_slave_config *VAR_3)
{
 struct sirfsoc_dma_chan *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;

 if ((VAR_3->src_addr_width != VAR_0) ||
  (VAR_3->dst_addr_width != VAR_0))
  return -VAR_1;

 FUNC_1(&VAR_4->lock, VAR_5);
 VAR_4->mode = (VAR_3->src_maxburst == 4 ? 1 : 0);
 FUNC_2(&VAR_4->lock, VAR_5);

 return 0;
}
