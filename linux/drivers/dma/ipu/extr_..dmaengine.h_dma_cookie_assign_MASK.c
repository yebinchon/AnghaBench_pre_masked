
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {scalar_t__ cookie; } ;
struct dma_async_tx_descriptor {scalar_t__ cookie; struct dma_chan* chan; } ;
typedef scalar_t__ dma_cookie_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline dma_cookie_t FUNC_0(struct dma_async_tx_descriptor *VAR_1)
{
 struct dma_chan *VAR_2 = VAR_1->chan;
 dma_cookie_t VAR_3;

 VAR_3 = VAR_2->cookie + 1;
 if (VAR_3 < VAR_0)
  VAR_3 = VAR_0;
 VAR_1->cookie = VAR_2->cookie = VAR_3;

 return VAR_3;
}
