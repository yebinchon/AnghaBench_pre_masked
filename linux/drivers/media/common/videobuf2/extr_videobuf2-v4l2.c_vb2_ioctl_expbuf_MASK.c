
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int queue; } ;
struct v4l2_exportbuffer {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct v4l2_exportbuffer*) ;
 scalar_t__ FUNC_1 (struct video_device*,struct file*) ;
 struct video_device* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_exportbuffer *VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_4, VAR_1))
  return -VAR_0;
 return FUNC_0(VAR_4->queue, VAR_3);
}
