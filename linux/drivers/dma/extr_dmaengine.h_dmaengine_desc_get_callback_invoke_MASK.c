
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmaengine_result {int dummy; } ;
struct dmaengine_desc_callback {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;


 int FUNC_0 (struct dmaengine_desc_callback*,struct dmaengine_result const*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*,struct dmaengine_desc_callback*) ;

__attribute__((used)) static inline void
FUNC_2(struct dma_async_tx_descriptor *VAR_0,
       const struct dmaengine_result *VAR_1)
{
 struct dmaengine_desc_callback VAR_2;

 FUNC_1(VAR_0, &VAR_2);
 FUNC_0(&VAR_2, VAR_1);
}
