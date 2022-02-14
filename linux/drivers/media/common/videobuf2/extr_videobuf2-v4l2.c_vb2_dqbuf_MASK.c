
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; int last_buffer_dequeued; int is_output; } ;
struct v4l2_buffer {scalar_t__ type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vb2_queue*,int *,struct v4l2_buffer*,int) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;

int FUNC_3(struct vb2_queue *VAR_4, struct v4l2_buffer *VAR_5, bool VAR_6)
{
 int VAR_7;

 if (FUNC_2(VAR_4)) {
  FUNC_0(1, "file io in progress\n");
  return -VAR_0;
 }

 if (VAR_5->type != VAR_4->type) {
  FUNC_0(1, "invalid buffer type\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_1(VAR_4, ((void*)0), VAR_5, VAR_6);

 if (!VAR_4->is_output &&
     VAR_5->flags & VAR_2 &&
     VAR_5->flags & VAR_3)
  VAR_4->last_buffer_dequeued = 1;





 VAR_5->flags &= ~VAR_2;

 return VAR_7;
}
