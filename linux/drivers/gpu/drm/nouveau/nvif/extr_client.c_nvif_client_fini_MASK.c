
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int priv; } ;
struct nvif_client {TYPE_1__* driver; TYPE_2__ object; } ;
struct TYPE_3__ {int (* fini ) (int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct nvif_client *VAR_0)
{
 FUNC_0(&VAR_0->object);
 if (VAR_0->driver) {
  if (VAR_0->driver->fini)
   VAR_0->driver->fini(VAR_0->object.priv);
  VAR_0->driver = ((void*)0);
 }
}
