
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * active_block; TYPE_2__** blocks; } ;
struct iio_dma_buffer_queue {int lock; int * ops; TYPE_1__ fileio; int incoming; int list_lock; int outgoing; } ;
struct TYPE_5__ {int state; } ;


 unsigned int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct iio_dma_buffer_queue *VAR_1)
{
 unsigned int VAR_2;

 FUNC_3(&VAR_1->lock);

 FUNC_5(&VAR_1->list_lock);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->fileio.blocks); VAR_2++) {
  if (!VAR_1->fileio.blocks[VAR_2])
   continue;
  VAR_1->fileio.blocks[VAR_2]->state = VAR_0;
 }
 FUNC_1(&VAR_1->outgoing);
 FUNC_6(&VAR_1->list_lock);

 FUNC_1(&VAR_1->incoming);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->fileio.blocks); VAR_2++) {
  if (!VAR_1->fileio.blocks[VAR_2])
   continue;
  FUNC_2(VAR_1->fileio.blocks[VAR_2]);
  VAR_1->fileio.blocks[VAR_2] = ((void*)0);
 }
 VAR_1->fileio.active_block = ((void*)0);
 VAR_1->ops = ((void*)0);

 FUNC_4(&VAR_1->lock);
}
