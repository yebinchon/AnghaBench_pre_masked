
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int buf_struct_size; scalar_t__ is_output; int dma_dir; scalar_t__ bidirectional; int memory; int done_wq; int mmap_lock; int done_lock; int done_list; int queued_list; int supports_requests; scalar_t__ requires_requests; TYPE_1__* ops; int io_modes; int type; int mem_ops; } ;
struct vb2_buffer {int dummy; } ;
struct TYPE_2__ {int buf_queue; int queue_setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct vb2_queue *VAR_5)
{



 if (FUNC_1(!VAR_5) ||
     FUNC_1(!VAR_5->ops) ||
     FUNC_1(!VAR_5->mem_ops) ||
     FUNC_1(!VAR_5->type) ||
     FUNC_1(!VAR_5->io_modes) ||
     FUNC_1(!VAR_5->ops->queue_setup) ||
     FUNC_1(!VAR_5->ops->buf_queue))
  return -VAR_3;

 if (FUNC_1(VAR_5->requires_requests && !VAR_5->supports_requests))
  return -VAR_3;

 FUNC_0(&VAR_5->queued_list);
 FUNC_0(&VAR_5->done_list);
 FUNC_4(&VAR_5->done_lock);
 FUNC_3(&VAR_5->mmap_lock);
 FUNC_2(&VAR_5->done_wq);

 VAR_5->memory = VAR_4;

 if (VAR_5->buf_struct_size == 0)
  VAR_5->buf_struct_size = sizeof(struct vb2_buffer);

 if (VAR_5->bidirectional)
  VAR_5->dma_dir = VAR_0;
 else
  VAR_5->dma_dir = VAR_5->is_output ? VAR_2 : VAR_1;

 return 0;
}
