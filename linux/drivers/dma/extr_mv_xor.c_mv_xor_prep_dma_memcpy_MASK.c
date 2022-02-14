
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int ,int *,int,size_t,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_1(struct dma_chan *VAR_0, dma_addr_t VAR_1, dma_addr_t VAR_2,
  size_t VAR_3, unsigned long VAR_4)
{




 return FUNC_0(VAR_0, VAR_1, &VAR_2, 1, VAR_3, VAR_4);
}
