
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl08x_dma_chan {void* cd; } ;
struct dma_chan {int dummy; } ;


 struct pl08x_dma_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct pl08x_dma_chan *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->cd == VAR_1;
}
