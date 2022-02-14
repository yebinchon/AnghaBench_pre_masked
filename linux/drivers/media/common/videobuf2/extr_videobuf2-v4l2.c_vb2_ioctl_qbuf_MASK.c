
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* v4l2_dev; int queue; } ;
struct v4l2_buffer {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct v4l2_buffer*) ;
 scalar_t__ FUNC_1 (struct video_device*,struct file*) ;
 struct video_device* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_4, VAR_1))
  return -VAR_0;
 return FUNC_0(VAR_4->queue, VAR_4->v4l2_dev->mdev, VAR_3);
}
