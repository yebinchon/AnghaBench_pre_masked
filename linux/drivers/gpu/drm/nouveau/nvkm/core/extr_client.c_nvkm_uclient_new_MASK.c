
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_oclass {TYPE_1__* client; int object; int token; int route; int handle; } ;
struct nvkm_object {int object; int token; int route; int handle; TYPE_1__* client; } ;
struct nvkm_client {struct nvkm_object object; int debug; } ;
struct nvif_client_v0 {int device; scalar_t__* name; } ;
struct TYPE_2__ {int debug; int ntfy; } ;


 int VAR_0 ;
 int FUNC_0 (int,void**,int *,struct nvif_client_v0,int ,int ,int) ;
 int FUNC_1 (scalar_t__*,int ,int *,int *,int ,struct nvkm_client**) ;

__attribute__((used)) static int
FUNC_2(const struct nvkm_oclass *VAR_1, void *VAR_2, u32 VAR_3,
   struct nvkm_object **VAR_4)
{
 union {
  struct nvif_client_v0 v0;
 } *VAR_5 = VAR_2;
 struct nvkm_client *VAR_6;
 int VAR_7 = -VAR_0;

 if (!(VAR_7 = FUNC_0(VAR_7, &VAR_2, &VAR_3, VAR_5->v0, 0, 0, 0))){
  VAR_5->v0.name[sizeof(VAR_5->v0.name) - 1] = 0;
  VAR_7 = FUNC_1(VAR_5->v0.name, VAR_5->v0.device, ((void*)0),
          ((void*)0), VAR_1->client->ntfy, &VAR_6);
  if (VAR_7)
   return VAR_7;
 } else
  return VAR_7;

 VAR_6->object.client = VAR_1->client;
 VAR_6->object.handle = VAR_1->handle;
 VAR_6->object.route = VAR_1->route;
 VAR_6->object.token = VAR_1->token;
 VAR_6->object.object = VAR_1->object;
 VAR_6->debug = VAR_1->client->debug;
 *VAR_4 = &VAR_6->object;
 return 0;
}
