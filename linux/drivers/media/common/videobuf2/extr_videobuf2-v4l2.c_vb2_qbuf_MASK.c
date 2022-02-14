
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct v4l2_buffer {int index; } ;
struct media_request {int dummy; } ;
struct media_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct media_request*) ;
 int FUNC_2 (struct vb2_queue*,int ,struct v4l2_buffer*,struct media_request*) ;
 scalar_t__ FUNC_3 (struct vb2_queue*) ;
 int FUNC_4 (struct vb2_queue*,struct media_device*,struct v4l2_buffer*,int,struct media_request**) ;

int FUNC_5(struct vb2_queue *VAR_1, struct media_device *VAR_2,
      struct v4l2_buffer *VAR_3)
{
 struct media_request *VAR_4 = ((void*)0);
 int VAR_5;

 if (FUNC_3(VAR_1)) {
  FUNC_0(1, "file io in progress\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, 0, &VAR_4);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_2(VAR_1, VAR_3->index, VAR_3, VAR_4);
 if (VAR_4)
  FUNC_1(VAR_4);
 return VAR_5;
}
