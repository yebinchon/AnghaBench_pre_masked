
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dma_buffer_queue {int outgoing; } ;
struct iio_dma_buffer_block {scalar_t__ state; int head; struct iio_dma_buffer_queue* queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct iio_dma_buffer_block *VAR_2)
{
 struct iio_dma_buffer_queue *VAR_3 = VAR_2->queue;





 if (VAR_2->state != VAR_0) {
  VAR_2->state = VAR_1;
  FUNC_0(&VAR_2->head, &VAR_3->outgoing);
 }
}
