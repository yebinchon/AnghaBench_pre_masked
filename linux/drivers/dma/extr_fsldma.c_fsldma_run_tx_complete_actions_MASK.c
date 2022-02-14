
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int dummy; } ;
struct dma_async_tx_descriptor {scalar_t__ cookie; } ;
struct fsl_desc_sw {struct dma_async_tx_descriptor async_tx; } ;
typedef scalar_t__ dma_cookie_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*,int *) ;

__attribute__((used)) static dma_cookie_t FUNC_4(struct fsldma_chan *VAR_0,
  struct fsl_desc_sw *VAR_1, dma_cookie_t VAR_2)
{
 struct dma_async_tx_descriptor *VAR_3 = &VAR_1->async_tx;
 dma_cookie_t VAR_4 = VAR_2;

 FUNC_0(VAR_3->cookie < 0);

 if (VAR_3->cookie > 0) {
  VAR_4 = VAR_3->cookie;

  FUNC_1(VAR_3);

  FUNC_3(VAR_3, ((void*)0));
 }


 FUNC_2(VAR_3);

 return VAR_4;
}
