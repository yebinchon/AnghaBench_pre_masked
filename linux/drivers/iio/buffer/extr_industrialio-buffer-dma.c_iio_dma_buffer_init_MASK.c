
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int watermark; } ;
struct iio_dma_buffer_queue {int list_lock; int lock; int outgoing; int incoming; struct iio_dma_buffer_ops const* ops; struct device* dev; TYPE_1__ buffer; } ;
struct iio_dma_buffer_ops {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iio_dma_buffer_queue *VAR_1,
 struct device *VAR_2, const struct iio_dma_buffer_ops *VAR_3)
{
 FUNC_1(&VAR_1->buffer);
 VAR_1->buffer.length = VAR_0;
 VAR_1->buffer.watermark = VAR_1->buffer.length / 2;
 VAR_1->dev = VAR_2;
 VAR_1->ops = VAR_3;

 FUNC_0(&VAR_1->incoming);
 FUNC_0(&VAR_1->outgoing);

 FUNC_2(&VAR_1->lock);
 FUNC_3(&VAR_1->list_lock);

 return 0;
}
