
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dma_buffer_queue {int buffer; } ;
struct dmaengine_buffer {int active; int chan; } ;


 int FUNC_0 (int ) ;
 struct dmaengine_buffer* FUNC_1 (int *) ;
 int FUNC_2 (struct iio_dma_buffer_queue*,int *) ;

__attribute__((used)) static void FUNC_3(struct iio_dma_buffer_queue *VAR_0)
{
 struct dmaengine_buffer *VAR_1 =
  FUNC_1(&VAR_0->buffer);

 FUNC_0(VAR_1->chan);
 FUNC_2(VAR_0, &VAR_1->active);
}
