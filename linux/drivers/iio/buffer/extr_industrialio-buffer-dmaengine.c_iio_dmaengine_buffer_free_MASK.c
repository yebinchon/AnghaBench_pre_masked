
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_buffer {int dummy; } ;
struct dmaengine_buffer {int chan; int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_buffer*) ;
 struct dmaengine_buffer* FUNC_2 (struct iio_buffer*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iio_buffer *VAR_0)
{
 struct dmaengine_buffer *VAR_1 =
  FUNC_2(VAR_0);

 FUNC_3(&VAR_1->queue);
 FUNC_0(VAR_1->chan);

 FUNC_1(VAR_0);
}
