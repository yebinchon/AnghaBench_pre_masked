
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_chan {int state; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int *,int ,int *,unsigned int,size_t,unsigned long) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 struct ioatdma_chan* FUNC_2 (struct dma_chan*) ;

struct dma_async_tx_descriptor *
FUNC_3(struct dma_chan *VAR_1, dma_addr_t VAR_2, dma_addr_t *VAR_3,
        unsigned int VAR_4, size_t VAR_5, unsigned long VAR_6)
{
 struct ioatdma_chan *VAR_7 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_0, &VAR_7->state))
  return ((void*)0);

 return FUNC_0(VAR_1, ((void*)0), VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
