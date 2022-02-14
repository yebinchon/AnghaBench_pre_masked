
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_buffer {int dummy; } ;
struct dmaengine_buffer {int queue; } ;


 struct dmaengine_buffer* FUNC_0 (struct iio_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dmaengine_buffer*) ;

__attribute__((used)) static void FUNC_3(struct iio_buffer *VAR_0)
{
 struct dmaengine_buffer *VAR_1 =
  FUNC_0(VAR_0);

 FUNC_1(&VAR_1->queue);
 FUNC_2(VAR_1);
}
