
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct v4l2_buffer {int flags; int index; } ;
struct media_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vb2_queue*,int ,struct v4l2_buffer*) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;
 int FUNC_3 (struct vb2_queue*,struct media_device*,struct v4l2_buffer*,int,int *) ;

int FUNC_4(struct vb2_queue *VAR_3, struct media_device *VAR_4,
      struct v4l2_buffer *VAR_5)
{
 int VAR_6;

 if (FUNC_2(VAR_3)) {
  FUNC_0(1, "file io in progress\n");
  return -VAR_0;
 }

 if (VAR_5->flags & VAR_2)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5, 1, ((void*)0));

 return VAR_6 ? VAR_6 : FUNC_1(VAR_3, VAR_5->index, VAR_5);
}
