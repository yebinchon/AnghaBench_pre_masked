
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int waiting_in_dqbuf; scalar_t__ error; int streaming; int done_list; int done_wq; scalar_t__ last_buffer_dequeued; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vb2_queue*,int ,struct vb2_queue*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_7, int VAR_8)
{
 for (;;) {
  int VAR_9;

  if (VAR_7->waiting_in_dqbuf) {
   FUNC_1(1, "another dup()ped fd is waiting for a buffer\n");
   return -VAR_1;
  }

  if (!VAR_7->streaming) {
   FUNC_1(1, "streaming off, will not wait for buffers\n");
   return -VAR_2;
  }

  if (VAR_7->error) {
   FUNC_1(1, "Queue in error state, will not wait for buffers\n");
   return -VAR_3;
  }

  if (VAR_7->last_buffer_dequeued) {
   FUNC_1(3, "last buffer dequeued already, will not wait for buffers\n");
   return -VAR_4;
  }

  if (!FUNC_2(&VAR_7->done_list)) {



   break;
  }

  if (VAR_8) {
   FUNC_1(3, "nonblocking and no buffers to dequeue, will not wait\n");
   return -VAR_0;
  }

  VAR_7->waiting_in_dqbuf = 1;





  FUNC_0(VAR_7, VAR_6, VAR_7);




  FUNC_1(3, "will sleep waiting for buffers\n");
  VAR_9 = FUNC_3(VAR_7->done_wq,
    !FUNC_2(&VAR_7->done_list) || !VAR_7->streaming ||
    VAR_7->error);





  FUNC_0(VAR_7, VAR_5, VAR_7);
  VAR_7->waiting_in_dqbuf = 0;
  if (VAR_9) {
   FUNC_1(1, "sleep was interrupted\n");
   return VAR_9;
  }
 }
 return 0;
}
