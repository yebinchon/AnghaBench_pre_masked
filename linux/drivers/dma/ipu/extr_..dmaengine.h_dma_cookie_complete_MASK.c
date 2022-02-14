
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_async_tx_descriptor {scalar_t__ cookie; TYPE_1__* chan; } ;
struct TYPE_2__ {scalar_t__ completed_cookie; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct dma_async_tx_descriptor *VAR_1)
{
 FUNC_0(VAR_1->cookie < VAR_0);
 VAR_1->chan->completed_cookie = VAR_1->cookie;
 VAR_1->cookie = 0;
}
