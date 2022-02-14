
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_dma_chan {int status; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 struct mxs_dma_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_1(struct dma_chan *VAR_1)
{
 struct mxs_dma_chan *VAR_2 = FUNC_0(VAR_1);

 VAR_2->status = VAR_0;
}
