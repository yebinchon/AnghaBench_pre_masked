
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct nvkm_object {struct nvkm_client* client; } ;
struct nvkm_event {int dummy; } ;
struct TYPE_3__ {int token; int route; int version; } ;
struct TYPE_4__ {TYPE_1__ v0; } ;
struct nvkm_client_notify {int size; struct nvkm_client* client; int n; TYPE_2__ rep; int version; } ;
struct nvkm_client {struct nvkm_client_notify** notify; } ;
struct nvif_notify_req_v0 {size_t reply; int token; int route; int version; } ;


 size_t FUNC_0 (struct nvkm_client_notify**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nvkm_client_notify*) ;
 struct nvkm_client_notify* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nvkm_object*,char*,int ,...) ;
 int FUNC_4 (int,void**,int *,struct nvif_notify_req_v0,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_5 (struct nvkm_object*,struct nvkm_event*,int ,int,void*,int ,size_t,int *) ;

int
FUNC_6(struct nvkm_object *VAR_5,
         struct nvkm_event *VAR_6, void *VAR_7, u32 VAR_8)
{
 struct nvkm_client *VAR_9 = VAR_5->client;
 struct nvkm_client_notify *VAR_10;
 union {
  struct nvif_notify_req_v0 v0;
 } *VAR_11 = VAR_7;
 u8 VAR_12, VAR_13;
 int VAR_14 = -VAR_2;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9->notify); VAR_12++) {
  if (!VAR_9->notify[VAR_12])
   break;
 }

 if (VAR_12 == FUNC_0(VAR_9->notify))
  return -VAR_1;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_0;

 FUNC_3(VAR_5, "notify new size %d\n", VAR_8);
 if (!(VAR_14 = FUNC_4(VAR_14, &VAR_7, &VAR_8, VAR_11->v0, 0, 0, 1))) {
  FUNC_3(VAR_5, "notify new vers %d reply %d route %02x "
       "token %llx\n", VAR_11->v0.version,
      VAR_11->v0.reply, VAR_11->v0.route, VAR_11->v0.token);
  VAR_10->version = VAR_11->v0.version;
  VAR_10->size = sizeof(VAR_10->rep.v0);
  VAR_10->rep.v0.version = VAR_11->v0.version;
  VAR_10->rep.v0.route = VAR_11->v0.route;
  VAR_10->rep.v0.token = VAR_11->v0.token;
  VAR_13 = VAR_11->v0.reply;
 }

 if (VAR_14 == 0) {
  VAR_14 = FUNC_5(VAR_5, VAR_6, VAR_4,
           0, VAR_7, VAR_8, VAR_13, &VAR_10->n);
  if (VAR_14 == 0) {
   VAR_9->notify[VAR_12] = VAR_10;
   VAR_10->client = VAR_9;
   return VAR_12;
  }
 }

 FUNC_1(VAR_10);
 return VAR_14;
}
