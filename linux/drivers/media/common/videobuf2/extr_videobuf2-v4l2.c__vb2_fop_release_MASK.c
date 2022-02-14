
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* queue; } ;
struct mutex {int dummy; } ;
struct file {int * private_data; } ;
struct TYPE_2__ {int * owner; } ;


 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct video_device* FUNC_4 (struct file*) ;

int FUNC_5(struct file *VAR_0, struct mutex *VAR_1)
{
 struct video_device *VAR_2 = FUNC_4(VAR_0);

 if (VAR_1)
  FUNC_0(VAR_1);
 if (VAR_0->private_data == VAR_2->queue->owner) {
  FUNC_3(VAR_2->queue);
  VAR_2->queue->owner = ((void*)0);
 }
 if (VAR_1)
  FUNC_1(VAR_1);
 return FUNC_2(VAR_0);
}
