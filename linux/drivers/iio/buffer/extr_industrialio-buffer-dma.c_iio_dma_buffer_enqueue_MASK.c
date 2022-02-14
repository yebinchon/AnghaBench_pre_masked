
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dma_buffer_queue {int incoming; scalar_t__ active; } ;
struct iio_dma_buffer_block {scalar_t__ state; int head; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iio_dma_buffer_block*) ;
 int FUNC_1 (struct iio_dma_buffer_queue*,struct iio_dma_buffer_block*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct iio_dma_buffer_queue *VAR_2,
 struct iio_dma_buffer_block *VAR_3)
{
 if (VAR_3->state == VAR_0) {
  FUNC_0(VAR_3);
 } else if (VAR_2->active) {
  FUNC_1(VAR_2, VAR_3);
 } else {
  VAR_3->state = VAR_1;
  FUNC_2(&VAR_3->head, &VAR_2->incoming);
 }
}
