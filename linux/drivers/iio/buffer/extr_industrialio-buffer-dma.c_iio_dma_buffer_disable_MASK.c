
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dma_buffer_queue {int active; int lock; TYPE_1__* ops; } ;
struct iio_dev {int dummy; } ;
struct iio_buffer {int dummy; } ;
struct TYPE_2__ {int (* abort ) (struct iio_dma_buffer_queue*) ;} ;


 struct iio_dma_buffer_queue* FUNC_0 (struct iio_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iio_dma_buffer_queue*) ;

int FUNC_4(struct iio_buffer *VAR_0,
 struct iio_dev *VAR_1)
{
 struct iio_dma_buffer_queue *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->lock);
 VAR_2->active = 0;

 if (VAR_2->ops && VAR_2->ops->abort)
  VAR_2->ops->abort(VAR_2);
 FUNC_2(&VAR_2->lock);

 return 0;
}
