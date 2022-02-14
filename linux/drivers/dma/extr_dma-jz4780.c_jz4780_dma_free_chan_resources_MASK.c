
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_dma_chan {int * desc_pool; int vchan; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 struct jz4780_dma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dma_chan *VAR_0)
{
 struct jz4780_dma_chan *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->vchan);
 FUNC_0(VAR_1->desc_pool);
 VAR_1->desc_pool = ((void*)0);
}
