
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_queue_manager {TYPE_2__* dev; } ;
struct TYPE_3__ {int queue_bitmap; } ;
struct TYPE_4__ {TYPE_1__ shared_resources; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;

unsigned int FUNC_1(struct device_queue_manager *VAR_1)
{
 return FUNC_0(VAR_1->dev->shared_resources.queue_bitmap,
    VAR_0);
}
