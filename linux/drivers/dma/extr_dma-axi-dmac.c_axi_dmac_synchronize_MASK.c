
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct axi_dmac_chan {int vchan; } ;


 struct axi_dmac_chan* FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dma_chan *VAR_0)
{
 struct axi_dmac_chan *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->vchan);
}
