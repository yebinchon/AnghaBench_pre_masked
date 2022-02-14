
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int queue; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct video_device*,struct file*) ;
 int FUNC_1 (int ,int) ;
 struct video_device* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_1, void *VAR_2, enum v4l2_buf_type VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_4, VAR_1))
  return -VAR_0;
 return FUNC_1(VAR_4->queue, VAR_3);
}
