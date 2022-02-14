
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int owned_by_drv_count; int done_wq; scalar_t__ start_streaming_called; int streaming; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct vb2_queue *VAR_1)
{
 if (!VAR_1->streaming) {
  FUNC_1(1, "streaming off, will not wait for buffers\n");
  return -VAR_0;
 }

 if (VAR_1->start_streaming_called)
  FUNC_2(VAR_1->done_wq, !FUNC_0(&VAR_1->owned_by_drv_count));
 return 0;
}
