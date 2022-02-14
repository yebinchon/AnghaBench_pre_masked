
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stratix10_svc_chan {int lock; TYPE_3__* ctrl; int * scl; } ;
struct TYPE_6__ {TYPE_2__* dev; int num_active_client; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct stratix10_svc_chan *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_0->scl = ((void*)0);
 VAR_0->ctrl->num_active_client--;
 FUNC_0(VAR_0->ctrl->dev->driver->owner);
 FUNC_2(&VAR_0->lock, VAR_1);
}
