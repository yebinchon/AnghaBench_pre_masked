
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_queue_manager {TYPE_2__* dev; } ;
struct TYPE_3__ {unsigned int num_queue_per_pipe; } ;
struct TYPE_4__ {TYPE_1__ shared_resources; } ;



unsigned int FUNC_0(struct device_queue_manager *VAR_0)
{
 return VAR_0->dev->shared_resources.num_queue_per_pipe;
}
