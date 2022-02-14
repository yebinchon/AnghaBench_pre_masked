
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dma_buffer_queue {int buffer; } ;
struct iio_dma_buffer_block {int head; int bytes_used; int phys_addr; int size; } ;
struct TYPE_2__ {int list_lock; } ;
struct dmaengine_buffer {int chan; TYPE_1__ queue; int active; int align; int max_size; } ;
struct dma_async_tx_descriptor {struct iio_dma_buffer_block* callback_param; int callback; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 struct dmaengine_buffer* FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct iio_dma_buffer_queue *VAR_4,
 struct iio_dma_buffer_block *VAR_5)
{
 struct dmaengine_buffer *VAR_6 =
  FUNC_4(&VAR_4->buffer);
 struct dma_async_tx_descriptor *VAR_7;
 dma_cookie_t VAR_8;

 VAR_5->bytes_used = FUNC_6(VAR_5->size, VAR_6->max_size);
 VAR_5->bytes_used = FUNC_7(VAR_5->bytes_used,
   VAR_6->align);

 VAR_7 = FUNC_2(VAR_6->chan,
  VAR_5->phys_addr, VAR_5->bytes_used, VAR_0,
  VAR_1);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->callback = VAR_3;
 VAR_7->callback_param = VAR_5;

 VAR_8 = FUNC_3(VAR_7);
 if (FUNC_1(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_8(&VAR_6->queue.list_lock);
 FUNC_5(&VAR_5->head, &VAR_6->active);
 FUNC_9(&VAR_6->queue.list_lock);

 FUNC_0(VAR_6->chan);

 return 0;
}
