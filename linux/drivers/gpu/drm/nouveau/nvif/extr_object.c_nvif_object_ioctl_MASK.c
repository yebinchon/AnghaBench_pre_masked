
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvif_object {int priv; struct nvif_client* client; } ;
struct nvif_ioctl_v0 {scalar_t__ version; int owner; scalar_t__ object; } ;
struct nvif_client {int super; struct nvif_object object; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* ioctl ) (int ,int ,void*,int,void**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nvif_object*) ;
 int FUNC_1 (int ,int ,void*,int,void**) ;

int
FUNC_2(struct nvif_object *VAR_2, void *VAR_3, u32 VAR_4, void **VAR_5)
{
 struct nvif_client *VAR_6 = VAR_2->client;
 union {
  struct nvif_ioctl_v0 v0;
 } *VAR_7 = VAR_3;

 if (VAR_4 >= sizeof(*VAR_7) && VAR_7->v0.version == 0) {
  if (VAR_2 != &VAR_6->object)
   VAR_7->v0.object = FUNC_0(VAR_2);
  else
   VAR_7->v0.object = 0;
  VAR_7->v0.owner = VAR_1;
 } else
  return -VAR_0;

 return VAR_6->driver->ioctl(VAR_6->object.priv, VAR_6->super,
         VAR_3, VAR_4, VAR_5);
}
