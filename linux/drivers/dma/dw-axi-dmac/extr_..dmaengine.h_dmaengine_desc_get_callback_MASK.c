
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmaengine_desc_callback {int callback_param; int callback_result; int callback; } ;
struct dma_async_tx_descriptor {int callback_param; int callback_result; int callback; } ;



__attribute__((used)) static inline void
FUNC_0(struct dma_async_tx_descriptor *VAR_0,
       struct dmaengine_desc_callback *VAR_1)
{
 VAR_1->callback = VAR_0->callback;
 VAR_1->callback_result = VAR_0->callback_result;
 VAR_1->callback_param = VAR_0->callback_param;
}
