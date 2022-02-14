
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pollq; } ;
struct iio_dma_buffer_queue {TYPE_1__ buffer; int list_lock; } ;
struct iio_dma_buffer_block {struct iio_dma_buffer_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dma_buffer_block*) ;
 int FUNC_1 (struct iio_dma_buffer_block*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(struct iio_dma_buffer_block *VAR_2)
{
 struct iio_dma_buffer_queue *VAR_3 = VAR_2->queue;
 unsigned long VAR_4;

 FUNC_2(&VAR_3->list_lock, VAR_4);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_3->list_lock, VAR_4);

 FUNC_1(VAR_2);
 FUNC_4(&VAR_3->buffer.pollq, VAR_0 | VAR_1);
}
