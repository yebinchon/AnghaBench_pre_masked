
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {TYPE_2__* queue; } ;
struct TYPE_4__ {TYPE_1__* backing_dev_info; } ;
struct TYPE_3__ {int congested_fn; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mapped_device *VAR_1)
{



 VAR_1->queue->backing_dev_info->congested_fn = VAR_0;
}
