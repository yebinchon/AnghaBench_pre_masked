
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* queue; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_2__ {scalar_t__ owner; } ;



__attribute__((used)) static inline bool FUNC_0(struct video_device *VAR_0, struct file *VAR_1)
{
 return VAR_0->queue->owner && VAR_0->queue->owner != VAR_1->private_data;
}
