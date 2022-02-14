
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dma_buffer_queue {int buffer; int dev; } ;
struct iio_dma_buffer_block {size_t size; int kref; int head; struct iio_dma_buffer_queue* queue; int state; int vaddr; int phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iio_dma_buffer_block*) ;
 int FUNC_5 (int *) ;
 struct iio_dma_buffer_block* FUNC_6 (int,int ) ;

__attribute__((used)) static struct iio_dma_buffer_block *FUNC_7(
 struct iio_dma_buffer_queue *VAR_2, size_t VAR_3)
{
 struct iio_dma_buffer_block *VAR_4;

 VAR_4 = FUNC_6(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->vaddr = FUNC_2(VAR_2->dev, FUNC_1(VAR_3),
  &VAR_4->phys_addr, VAR_0);
 if (!VAR_4->vaddr) {
  FUNC_4(VAR_4);
  return ((void*)0);
 }

 VAR_4->size = VAR_3;
 VAR_4->state = VAR_1;
 VAR_4->queue = VAR_2;
 FUNC_0(&VAR_4->head);
 FUNC_5(&VAR_4->kref);

 FUNC_3(&VAR_2->buffer);

 return VAR_4;
}
