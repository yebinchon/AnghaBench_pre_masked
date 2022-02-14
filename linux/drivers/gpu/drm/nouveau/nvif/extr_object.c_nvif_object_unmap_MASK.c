
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ptr; scalar_t__ size; } ;
struct nvif_object {TYPE_2__ map; struct nvif_client* client; } ;
struct nvif_client {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* unmap ) (struct nvif_client*,int *,scalar_t__) ;} ;


 int FUNC_0 (struct nvif_object*) ;
 int FUNC_1 (struct nvif_client*,int *,scalar_t__) ;

void
FUNC_2(struct nvif_object *VAR_0)
{
 struct nvif_client *VAR_1 = VAR_0->client;
 if (VAR_0->map.ptr) {
  if (VAR_0->map.size) {
   VAR_1->driver->unmap(VAR_1, VAR_0->map.ptr,
            VAR_0->map.size);
   VAR_0->map.size = 0;
  }
  VAR_0->map.ptr = ((void*)0);
  FUNC_0(VAR_0);
 }
}
