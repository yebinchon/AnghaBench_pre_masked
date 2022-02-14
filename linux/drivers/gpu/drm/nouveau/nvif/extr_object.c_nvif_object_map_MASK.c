
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_4__ {void* ptr; scalar_t__ size; } ;
struct nvif_object {TYPE_2__ map; struct nvif_client* client; } ;
struct nvif_client {TYPE_1__* driver; } ;
struct TYPE_3__ {void* (* map ) (struct nvif_client*,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvif_object*,void*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct nvif_object*) ;
 void* FUNC_2 (struct nvif_client*,scalar_t__,scalar_t__) ;

int
FUNC_3(struct nvif_object *VAR_1, void *VAR_2, u32 VAR_3)
{
 struct nvif_client *VAR_4 = VAR_1->client;
 u64 VAR_5, VAR_6;
 int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6);
 if (VAR_7 >= 0) {
  if (VAR_7) {
   VAR_1->map.ptr = VAR_4->driver->map(VAR_4,
             VAR_5,
             VAR_6);
   if (VAR_7 = -VAR_0, VAR_1->map.ptr) {
    VAR_1->map.size = VAR_6;
    return 0;
   }
  } else {
   VAR_1->map.ptr = (void *)(unsigned long)VAR_5;
   return 0;
  }
  FUNC_1(VAR_1);
 }
 return VAR_7;
}
