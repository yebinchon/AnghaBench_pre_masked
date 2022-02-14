
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t block_size; struct iio_dma_buffer_block** blocks; int * active_block; } ;
struct TYPE_3__ {int bytes_per_datum; int length; } ;
struct iio_dma_buffer_queue {int lock; int incoming; TYPE_2__ fileio; int list_lock; int outgoing; TYPE_1__ buffer; } ;
struct iio_dma_buffer_block {scalar_t__ state; size_t size; int head; } ;
struct iio_buffer {int dummy; } ;


 int FUNC_0 (struct iio_dma_buffer_block**) ;
 size_t FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (struct iio_dma_buffer_block*) ;
 struct iio_dma_buffer_queue* FUNC_5 (struct iio_buffer*) ;
 int FUNC_6 (struct iio_dma_buffer_block*) ;
 struct iio_dma_buffer_block* FUNC_7 (struct iio_dma_buffer_queue*,size_t) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct iio_buffer *VAR_3)
{
 struct iio_dma_buffer_queue *VAR_4 = FUNC_5(VAR_3);
 struct iio_dma_buffer_block *VAR_5;
 bool VAR_6 = 0;
 size_t VAR_7;
 int VAR_8 = 0;
 int VAR_9;






 VAR_7 = FUNC_1(VAR_4->buffer.bytes_per_datum *
  VAR_4->buffer.length, 2);

 FUNC_9(&VAR_4->lock);


 if (FUNC_3(VAR_4->fileio.block_size) == FUNC_3(VAR_7))
  VAR_6 = 1;

 VAR_4->fileio.block_size = VAR_7;
 VAR_4->fileio.active_block = ((void*)0);

 FUNC_11(&VAR_4->list_lock);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4->fileio.blocks); VAR_9++) {
  VAR_5 = VAR_4->fileio.blocks[VAR_9];


  if (VAR_5 && (!FUNC_6(VAR_5) || !VAR_6))
   VAR_5->state = VAR_1;
 }






 FUNC_2(&VAR_4->outgoing);
 FUNC_12(&VAR_4->list_lock);

 FUNC_2(&VAR_4->incoming);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4->fileio.blocks); VAR_9++) {
  if (VAR_4->fileio.blocks[VAR_9]) {
   VAR_5 = VAR_4->fileio.blocks[VAR_9];
   if (VAR_5->state == VAR_1) {

    FUNC_4(VAR_5);
    VAR_5 = ((void*)0);
   } else {
    VAR_5->size = VAR_7;
   }
  } else {
   VAR_5 = ((void*)0);
  }

  if (!VAR_5) {
   VAR_5 = FUNC_7(VAR_4, VAR_7);
   if (!VAR_5) {
    VAR_8 = -VAR_0;
    goto out_unlock;
   }
   VAR_4->fileio.blocks[VAR_9] = VAR_5;
  }

  VAR_5->state = VAR_2;
  FUNC_8(&VAR_5->head, &VAR_4->incoming);
 }

out_unlock:
 FUNC_10(&VAR_4->lock);

 return VAR_8;
}
