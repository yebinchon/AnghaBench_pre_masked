
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int flags; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_fh {int wait; } ;
struct file {struct v4l2_fh* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct v4l2_fh*) ;
 int FUNC_3 (struct vb2_queue*,struct file*,int *) ;
 struct video_device* FUNC_4 (struct file*) ;

__poll_t FUNC_5(struct vb2_queue *VAR_2, struct file *VAR_3, poll_table *VAR_4)
{
 struct video_device *VAR_5 = FUNC_4(VAR_3);
 __poll_t VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);

 if (FUNC_1(VAR_1, &VAR_5->flags)) {
  struct v4l2_fh *VAR_7 = VAR_3->private_data;

  FUNC_0(VAR_3, &VAR_7->wait, VAR_4);
  if (FUNC_2(VAR_7))
   VAR_6 |= VAR_0;
 }

 return VAR_6;
}
