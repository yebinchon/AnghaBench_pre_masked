
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dma_buffer_queue {TYPE_1__* ops; } ;
struct iio_dma_buffer_block {int state; } ;
struct TYPE_2__ {int (* submit ) (struct iio_dma_buffer_queue*,struct iio_dma_buffer_block*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dma_buffer_block*) ;
 int FUNC_1 (struct iio_dma_buffer_block*) ;
 int FUNC_2 (struct iio_dma_buffer_queue*,struct iio_dma_buffer_block*) ;

__attribute__((used)) static void FUNC_3(struct iio_dma_buffer_queue *VAR_1,
 struct iio_dma_buffer_block *VAR_2)
{
 int VAR_3;






 if (!VAR_1->ops)
  return;

 VAR_2->state = VAR_0;
 FUNC_0(VAR_2);
 VAR_3 = VAR_1->ops->submit(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_2);
 }
}
