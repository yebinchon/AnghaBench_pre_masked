
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvif_notify_rep_v0 {scalar_t__ version; int route; scalar_t__ token; } ;
struct nvif_notify {int size; int * data; int work; int flags; int putcnt; TYPE_1__* object; } ;
struct nvif_client {TYPE_2__* driver; } ;
struct TYPE_4__ {int keep; } ;
struct TYPE_3__ {struct nvif_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,void const*,int) ;
 int FUNC_3 (struct nvif_notify*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int
FUNC_6(const void *VAR_2, u32 VAR_3, const void *VAR_4, u32 VAR_5)
{
 struct nvif_notify *VAR_6 = ((void*)0);
 const union {
  struct nvif_notify_rep_v0 v0;
 } *VAR_7 = VAR_2;
 int VAR_8 = VAR_0;

 if (VAR_3 == sizeof(VAR_7->v0) && VAR_7->v0.version == 0) {
  if (FUNC_0(VAR_7->v0.route))
   return VAR_0;
  VAR_6 = (void *)(unsigned long)VAR_7->v0.token;
 }

 if (!FUNC_0(VAR_6 == ((void*)0))) {
  struct nvif_client *VAR_9 = VAR_6->object->client;
  if (!FUNC_0(VAR_6->size != VAR_5)) {
   FUNC_1(&VAR_6->putcnt);
   if (FUNC_5(VAR_1, &VAR_6->flags)) {
    FUNC_2((void *)VAR_6->data, VAR_4, VAR_5);
    FUNC_4(&VAR_6->work);
    return VAR_0;
   }
   VAR_6->data = VAR_4;
   VAR_8 = FUNC_3(VAR_6, VAR_9->driver->keep);
   VAR_6->data = ((void*)0);
  }
 }

 return VAR_8;
}
