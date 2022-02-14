
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int queued_count; } ;
struct TYPE_3__ {int req; } ;
struct vb2_buffer {int state; unsigned int index; int * request; TYPE_1__ req_obj; int queued_entry; scalar_t__ prepared; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vb2_buffer*) ;
 int FUNC_2 (struct vb2_queue*,struct vb2_buffer**,void*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct vb2_queue*,int ,struct vb2_buffer*,void*) ;
 int FUNC_4 (struct vb2_buffer*,int ,struct vb2_buffer*) ;
 int FUNC_5 (int,char*,...) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vb2_queue*,struct vb2_buffer*) ;

int FUNC_11(struct vb2_queue *VAR_3, unsigned int *VAR_4, void *VAR_5,
     bool VAR_6)
{
 struct vb2_buffer *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, &VAR_7, VAR_5, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_7->state) {
 case 129:
  FUNC_5(3, "returning done buffer\n");
  break;
 case 128:
  FUNC_5(3, "returning done buffer with errors\n");
  break;
 default:
  FUNC_5(1, "invalid buffer state\n");
  return -VAR_0;
 }

 FUNC_4(VAR_7, VAR_1, VAR_7);
 VAR_7->prepared = 0;

 if (VAR_4)
  *VAR_4 = VAR_7->index;


 if (VAR_5)
  FUNC_3(VAR_3, VAR_2, VAR_7, VAR_5);


 FUNC_6(&VAR_7->queued_entry);
 VAR_3->queued_count--;

 FUNC_10(VAR_3, VAR_7);


 FUNC_1(VAR_7);

 if (FUNC_0(VAR_7->req_obj.req)) {
  FUNC_8(&VAR_7->req_obj);
  FUNC_7(&VAR_7->req_obj);
 }
 if (VAR_7->request)
  FUNC_9(VAR_7->request);
 VAR_7->request = ((void*)0);

 FUNC_5(2, "dqbuf of buffer %d, with state %d\n",
   VAR_7->index, VAR_7->state);

 return 0;

}
