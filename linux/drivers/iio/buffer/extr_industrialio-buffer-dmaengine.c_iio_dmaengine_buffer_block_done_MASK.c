
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dma_buffer_block {TYPE_1__* queue; int head; } ;
struct TYPE_2__ {int list_lock; } ;


 int FUNC_0 (struct iio_dma_buffer_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct iio_dma_buffer_block *VAR_1 = VAR_0;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->queue->list_lock, VAR_2);
 FUNC_1(&VAR_1->head);
 FUNC_3(&VAR_1->queue->list_lock, VAR_2);
 FUNC_0(VAR_1);
}
