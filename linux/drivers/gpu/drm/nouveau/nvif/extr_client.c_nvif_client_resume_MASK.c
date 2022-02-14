
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int priv; } ;
struct nvif_client {TYPE_2__ object; TYPE_1__* driver; } ;
struct TYPE_3__ {int (* resume ) (int ) ;} ;


 int FUNC_0 (int ) ;

int
FUNC_1(struct nvif_client *VAR_0)
{
 return VAR_0->driver->resume(VAR_0->object.priv);
}
