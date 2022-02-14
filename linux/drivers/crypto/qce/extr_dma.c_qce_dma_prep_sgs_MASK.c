
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct qce_dma_data {struct dma_chan* txchan; struct dma_chan* rxchan; } ;
struct dma_chan {int dummy; } ;
typedef int * dma_async_tx_callback ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct dma_chan*,struct scatterlist*,int,unsigned long,int ,int *,void*) ;

int FUNC_1(struct qce_dma_data *VAR_4, struct scatterlist *VAR_5,
       int VAR_6, struct scatterlist *VAR_7, int VAR_8,
       dma_async_tx_callback VAR_9, void *VAR_10)
{
 struct dma_chan *VAR_11 = VAR_4->rxchan;
 struct dma_chan *VAR_12 = VAR_4->txchan;
 unsigned long VAR_13 = VAR_3 | VAR_0;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_11, VAR_5, VAR_6, VAR_13, VAR_2,
        ((void*)0), ((void*)0));
 if (VAR_14)
  return VAR_14;

 return FUNC_0(VAR_12, VAR_7, VAR_8, VAR_13, VAR_1,
          VAR_9, VAR_10);
}
