
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {TYPE_1__* queue; } ;
struct v4l2_requestbuffers {int count; int memory; int capabilities; int type; } ;
struct file {int * private_data; } ;
struct TYPE_4__ {int * owner; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_2 (struct video_device*,struct file*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 struct video_device* FUNC_4 (struct file*) ;

int FUNC_5(struct file *VAR_1, void *VAR_2,
     struct v4l2_requestbuffers *VAR_3)
{
 struct video_device *VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = FUNC_3(VAR_4->queue, VAR_3->memory, VAR_3->type);

 FUNC_0(VAR_4->queue, &VAR_3->capabilities);
 if (VAR_5)
  return VAR_5;
 if (FUNC_2(VAR_4, VAR_1))
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_4->queue, VAR_3->memory, &VAR_3->count);


 if (VAR_5 == 0)
  VAR_4->queue->owner = VAR_3->count ? VAR_1->private_data : ((void*)0);
 return VAR_5;
}
