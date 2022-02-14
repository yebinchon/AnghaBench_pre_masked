
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,struct scatterlist*,struct scatterlist*,unsigned int,int,unsigned long) ;
 int FUNC_1 (int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_2(struct dma_chan *VAR_0, struct scatterlist *VAR_1,
    unsigned int VAR_2, enum dma_transfer_direction VAR_3,
    unsigned long VAR_4, void *VAR_5)
{
 if (!FUNC_1(VAR_3))
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1, VAR_1, VAR_2, VAR_3, VAR_4);
}
