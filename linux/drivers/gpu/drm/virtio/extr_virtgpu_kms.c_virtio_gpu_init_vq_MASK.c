
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_queue {int dequeue_work; int ack_queue; int qlock; } ;


 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct virtio_gpu_queue *VAR_0,
          void (*VAR_1)(struct work_struct *VAR_2))
{
 FUNC_2(&VAR_0->qlock);
 FUNC_1(&VAR_0->ack_queue);
 FUNC_0(&VAR_0->dequeue_work, VAR_1);
}
