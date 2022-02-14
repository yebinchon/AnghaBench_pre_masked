
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int queue; } ;
struct v4l2_buffer {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct v4l2_buffer*,int) ;
 scalar_t__ FUNC_1 (struct video_device*,struct file*) ;
 struct video_device* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_2, void *VAR_3, struct v4l2_buffer *VAR_4)
{
 struct video_device *VAR_5 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_5, VAR_2))
  return -VAR_0;
 return FUNC_0(VAR_5->queue, VAR_4, VAR_2->f_flags & VAR_1);
}
