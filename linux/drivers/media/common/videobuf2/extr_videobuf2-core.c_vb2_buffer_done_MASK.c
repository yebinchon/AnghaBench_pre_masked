
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int done_wq; int done_lock; int owned_by_drv_count; int done_list; } ;
struct TYPE_5__ {scalar_t__ req; } ;
struct vb2_buffer {scalar_t__ state; unsigned int num_planes; TYPE_2__ req_obj; int done_entry; scalar_t__ synced; TYPE_1__* planes; int index; int cnt_buf_done; struct vb2_queue* vb2_queue; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_4__ {int mem_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vb2_buffer*,int ,int ) ;
 int FUNC_3 (int,char*,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct vb2_queue*,struct vb2_buffer*) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct vb2_buffer *VAR_4, enum vb2_buffer_state VAR_5)
{
 struct vb2_queue *VAR_6 = VAR_4->vb2_queue;
 unsigned long VAR_7;
 unsigned int VAR_8;

 if (FUNC_0(VAR_4->state != VAR_0))
  return;

 if (FUNC_0(VAR_5 != VAR_1 &&
      VAR_5 != VAR_2 &&
      VAR_5 != 128))
  VAR_5 = VAR_2;
 FUNC_3(4, "done processing on buffer %d, state: %d\n",
   VAR_4->index, VAR_5);

 if (VAR_5 != 128) {

  for (VAR_8 = 0; VAR_8 < VAR_4->num_planes; ++VAR_8)
   FUNC_2(VAR_4, VAR_3, VAR_4->planes[VAR_8].mem_priv);
  VAR_4->synced = 0;
 }

 FUNC_7(&VAR_6->done_lock, VAR_7);
 if (VAR_5 == 128) {
  VAR_4->state = 128;
 } else {

  FUNC_4(&VAR_4->done_entry, &VAR_6->done_list);
  VAR_4->state = VAR_5;
 }
 FUNC_1(&VAR_6->owned_by_drv_count);

 if (VAR_5 != 128 && VAR_4->req_obj.req) {
  FUNC_6(&VAR_4->req_obj);
  FUNC_5(&VAR_4->req_obj);
 }

 FUNC_8(&VAR_6->done_lock, VAR_7);

 FUNC_9(VAR_6, VAR_4);

 switch (VAR_5) {
 case 128:
  return;
 default:

  FUNC_10(&VAR_6->done_wq);
  break;
 }
}
