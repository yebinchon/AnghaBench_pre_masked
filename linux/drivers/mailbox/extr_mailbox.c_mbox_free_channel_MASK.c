
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mbox_chan {scalar_t__ txdone_method; int lock; TYPE_3__* mbox; int * active_req; int * cl; } ;
struct TYPE_8__ {int (* shutdown ) (struct mbox_chan*) ;} ;
struct TYPE_7__ {TYPE_2__* dev; TYPE_4__* ops; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {int owner; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct mbox_chan*) ;

void FUNC_4(struct mbox_chan *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2 || !VAR_2->cl)
  return;

 if (VAR_2->mbox->ops->shutdown)
  VAR_2->mbox->ops->shutdown(VAR_2);


 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_2->cl = ((void*)0);
 VAR_2->active_req = ((void*)0);
 if (VAR_2->txdone_method == VAR_0)
  VAR_2->txdone_method = VAR_1;

 FUNC_0(VAR_2->mbox->dev->driver->owner);
 FUNC_2(&VAR_2->lock, VAR_3);
}
