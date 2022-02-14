
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vb2_queue*,int) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;

int FUNC_3(struct vb2_queue *VAR_1, enum v4l2_buf_type VAR_2)
{
 if (FUNC_2(VAR_1)) {
  FUNC_0(1, "file io in progress\n");
  return -VAR_0;
 }
 return FUNC_1(VAR_1, VAR_2);
}
