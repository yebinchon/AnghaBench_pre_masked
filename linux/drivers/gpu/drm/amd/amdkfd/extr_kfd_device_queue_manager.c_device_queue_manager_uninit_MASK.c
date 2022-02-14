
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* uninitialize ) (struct device_queue_manager*) ;} ;
struct device_queue_manager {int hiq_sdma_mqd; int dev; TYPE_1__ ops; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device_queue_manager*) ;
 int FUNC_2 (struct device_queue_manager*) ;

void FUNC_3(struct device_queue_manager *VAR_0)
{
 VAR_0->ops.uninitialize(VAR_0);
 FUNC_0(VAR_0->dev, &VAR_0->hiq_sdma_mqd);
 FUNC_1(VAR_0);
}
