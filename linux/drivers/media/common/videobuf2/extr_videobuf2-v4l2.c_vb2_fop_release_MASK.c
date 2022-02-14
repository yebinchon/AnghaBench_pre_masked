
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {struct mutex* lock; TYPE_1__* queue; } ;
struct mutex {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mutex* lock; } ;


 int FUNC_0 (struct file*,struct mutex*) ;
 struct video_device* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_1(VAR_0);
 struct mutex *VAR_2 = VAR_1->queue->lock ? VAR_1->queue->lock : VAR_1->lock;

 return FUNC_0(VAR_0, VAR_2);
}
