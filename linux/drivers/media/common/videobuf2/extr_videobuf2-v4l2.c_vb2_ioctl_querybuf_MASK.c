
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int queue; } ;
struct v4l2_buffer {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,struct v4l2_buffer*) ;
 struct video_device* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct video_device *VAR_3 = FUNC_1(VAR_0);


 return FUNC_0(VAR_3->queue, VAR_2);
}
