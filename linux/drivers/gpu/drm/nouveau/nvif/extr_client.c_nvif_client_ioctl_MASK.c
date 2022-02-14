
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int priv; } ;
struct nvif_client {int super; TYPE_2__ object; TYPE_1__* driver; } ;
struct TYPE_3__ {int (* ioctl ) (int ,int ,void*,int ,int *) ;} ;


 int FUNC_0 (int ,int ,void*,int ,int *) ;

int
FUNC_1(struct nvif_client *VAR_0, void *VAR_1, u32 VAR_2)
{
 return VAR_0->driver->ioctl(VAR_0->object.priv, VAR_0->super, VAR_1, VAR_2, ((void*)0));
}
