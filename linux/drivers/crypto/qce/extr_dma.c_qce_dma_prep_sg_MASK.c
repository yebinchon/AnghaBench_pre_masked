
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {void* callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_cookie_t ;
typedef int dma_async_tx_callback ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dma_async_tx_descriptor* FUNC_1 (struct dma_chan*,struct scatterlist*,int,int,unsigned long) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_1, struct scatterlist *VAR_2,
      int VAR_3, unsigned long VAR_4,
      enum dma_transfer_direction VAR_5,
      dma_async_tx_callback VAR_6, void *VAR_7)
{
 struct dma_async_tx_descriptor *VAR_8;
 dma_cookie_t VAR_9;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->callback = VAR_6;
 VAR_8->callback_param = VAR_7;
 VAR_9 = FUNC_2(VAR_8);

 return FUNC_0(VAR_9);
}
