
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_device {TYPE_2__* queue; } ;
struct TYPE_5__ {int type; } ;
struct v4l2_create_buffers {scalar_t__ count; int capabilities; int index; TYPE_1__ format; int memory; } ;
struct file {int private_data; } ;
struct TYPE_6__ {int owner; int num_buffers; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,struct v4l2_create_buffers*) ;
 scalar_t__ FUNC_2 (struct video_device*,struct file*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 struct video_device* FUNC_4 (struct file*) ;

int FUNC_5(struct file *VAR_1, void *VAR_2,
     struct v4l2_create_buffers *VAR_3)
{
 struct video_device *VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = FUNC_3(VAR_4->queue, VAR_3->memory,
   VAR_3->format.type);

 VAR_3->index = VAR_4->queue->num_buffers;
 FUNC_0(VAR_4->queue, &VAR_3->capabilities);




 if (VAR_3->count == 0)
  return VAR_5 != -VAR_0 ? VAR_5 : 0;
 if (VAR_5)
  return VAR_5;
 if (FUNC_2(VAR_4, VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->queue, VAR_3);
 if (VAR_5 == 0)
  VAR_4->queue->owner = VAR_1->private_data;
 return VAR_5;
}
