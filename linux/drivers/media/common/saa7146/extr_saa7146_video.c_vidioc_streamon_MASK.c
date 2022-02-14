
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_fh {int vbi_q; int video_q; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct saa7146_fh*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, enum v4l2_buf_type VAR_5)
{
 struct saa7146_fh *VAR_6 = VAR_4;
 int VAR_7;

 FUNC_0("VIDIOC_STREAMON, type:%d\n", VAR_5);

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  return VAR_7;
 if (VAR_5 == VAR_2)
  return FUNC_2(&VAR_6->video_q);
 if (VAR_5 == VAR_1)
  return FUNC_2(&VAR_6->vbi_q);
 return -VAR_0;
}
