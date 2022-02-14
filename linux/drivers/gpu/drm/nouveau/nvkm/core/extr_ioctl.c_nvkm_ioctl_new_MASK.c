
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ oclass; } ;
struct nvkm_oclass {int (* ctor ) (struct nvkm_oclass*,void*,int ,struct nvkm_object**) ;scalar_t__ engine; struct nvkm_object* parent; struct nvkm_client* client; int object; int token; int route; int handle; TYPE_1__ base; } ;
struct nvkm_object {int tree; int head; TYPE_2__* func; } ;
struct nvkm_client {struct nvkm_object* data; } ;
struct nvif_ioctl_new_v0 {scalar_t__ oclass; int object; int token; int route; int handle; int version; } ;
typedef int oclass ;
struct TYPE_4__ {int (* sclass ) (struct nvkm_object*,int ,struct nvkm_oclass*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nvkm_oclass*,int,int) ;
 int FUNC_4 (struct nvkm_object*,char*,...) ;
 int FUNC_5 (int,void**,int *,struct nvif_ioctl_new_v0,int ,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (struct nvkm_object**) ;
 int FUNC_9 (struct nvkm_object*,int) ;
 int FUNC_10 (struct nvkm_object*) ;
 scalar_t__ FUNC_11 (struct nvkm_object*) ;
 int FUNC_12 (struct nvkm_object*,int ,struct nvkm_oclass*) ;
 int FUNC_13 (struct nvkm_oclass*,void*,int ,struct nvkm_object**) ;

__attribute__((used)) static int
FUNC_14(struct nvkm_client *VAR_3,
        struct nvkm_object *VAR_4, void *VAR_5, u32 VAR_6)
{
 union {
  struct nvif_ioctl_new_v0 v0;
 } *VAR_7 = VAR_5;
 struct nvkm_object *VAR_8 = ((void*)0);
 struct nvkm_oclass VAR_9;
 int VAR_10 = -VAR_2, VAR_11 = 0;

 FUNC_4(VAR_4, "new size %d\n", VAR_6);
 if (!(VAR_10 = FUNC_5(VAR_10, &VAR_5, &VAR_6, VAR_7->v0, 0, 0, 1))) {
  FUNC_4(VAR_4, "new vers %d handle %08x class %08x "
       "route %02x token %llx object %016llx\n",
      VAR_7->v0.version, VAR_7->v0.handle, VAR_7->v0.oclass,
      VAR_7->v0.route, VAR_7->v0.token, VAR_7->v0.object);
 } else
  return VAR_10;

 if (!VAR_4->func->sclass) {
  FUNC_4(VAR_4, "cannot have children\n");
  return -VAR_1;
 }

 do {
  FUNC_3(&VAR_9, 0x00, sizeof(VAR_9));
  VAR_9.handle = VAR_7->v0.handle;
  VAR_9.route = VAR_7->v0.route;
  VAR_9.token = VAR_7->v0.token;
  VAR_9.object = VAR_7->v0.object;
  VAR_9.client = VAR_3;
  VAR_9.parent = VAR_4;
  VAR_10 = VAR_4->func->sclass(VAR_4, VAR_11++, &VAR_9);
  if (VAR_10)
   return VAR_10;
 } while (VAR_9.base.oclass != VAR_7->v0.oclass);

 if (VAR_9.engine) {
  VAR_9.engine = FUNC_6(VAR_9.engine);
  if (FUNC_0(VAR_9.engine))
   return FUNC_1(VAR_9.engine);
 }

 VAR_10 = VAR_9.ctor(&VAR_9, VAR_5, VAR_6, &VAR_8);
 FUNC_7(&VAR_9.engine);
 if (VAR_10 == 0) {
  VAR_10 = FUNC_10(VAR_8);
  if (VAR_10 == 0) {
   FUNC_2(&VAR_8->head, &VAR_4->tree);
   if (FUNC_11(VAR_8)) {
    VAR_3->data = VAR_8;
    return 0;
   }
   VAR_10 = -VAR_0;
  }
  FUNC_9(VAR_8, 0);
 }

 FUNC_8(&VAR_8);
 return VAR_10;
}
