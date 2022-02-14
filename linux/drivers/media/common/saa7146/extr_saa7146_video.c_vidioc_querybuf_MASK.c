
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {scalar_t__ type; } ;
struct saa7146_fh {int vbi_q; int video_q; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, struct v4l2_buffer *VAR_5)
{
 struct saa7146_fh *VAR_6 = VAR_4;

 if (VAR_5->type == VAR_2)
  return FUNC_0(&VAR_6->video_q, VAR_5);
 if (VAR_5->type == VAR_1)
  return FUNC_0(&VAR_6->vbi_q, VAR_5);
 return -VAR_0;
}
