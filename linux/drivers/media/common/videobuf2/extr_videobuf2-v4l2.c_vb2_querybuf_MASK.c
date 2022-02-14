
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; size_t num_buffers; struct vb2_buffer** bufs; } ;
struct vb2_buffer {int dummy; } ;
struct v4l2_buffer {scalar_t__ type; size_t index; } ;


 int VAR_0 ;
 int FUNC_0 (struct vb2_buffer*,struct v4l2_buffer*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct vb2_queue*,size_t,struct v4l2_buffer*) ;

int FUNC_3(struct vb2_queue *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct vb2_buffer *VAR_3;
 int VAR_4;

 if (VAR_2->type != VAR_1->type) {
  FUNC_1(1, "wrong buffer type\n");
  return -VAR_0;
 }

 if (VAR_2->index >= VAR_1->num_buffers) {
  FUNC_1(1, "buffer index out of range\n");
  return -VAR_0;
 }
 VAR_3 = VAR_1->bufs[VAR_2->index];
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_4)
  FUNC_2(VAR_1, VAR_2->index, VAR_2);
 return VAR_4;
}
