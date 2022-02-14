
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_dmac_chan {int lock; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct rcar_dmac_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct rcar_dmac_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_0)
{
 unsigned long VAR_1;
 struct rcar_dmac_chan *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->lock, VAR_1);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock, VAR_1);

 return 0;
}
