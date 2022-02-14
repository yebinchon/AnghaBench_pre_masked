
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_client {int super; int * data; struct nvkm_object object; } ;
struct nvif_ioctl_v0 {int token; int route; int owner; int type; int object; int version; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_object*,char*,int,...) ;
 int FUNC_1 (int,void**,int*,struct nvif_ioctl_v0,int ,int ,int) ;
 int FUNC_2 (struct nvkm_client*,int ,int ,void*,int,int ,int *,int *) ;

int
FUNC_3(struct nvkm_client *VAR_1, bool VAR_2,
    void *VAR_3, u32 VAR_4, void **VAR_5)
{
 struct nvkm_object *VAR_6 = &VAR_1->object;
 union {
  struct nvif_ioctl_v0 v0;
 } *VAR_7 = VAR_3;
 int VAR_8 = -VAR_0;

 VAR_1->super = VAR_2;
 FUNC_0(VAR_6, "size %d\n", VAR_4);

 if (!(VAR_8 = FUNC_1(VAR_8, &VAR_3, &VAR_4, VAR_7->v0, 0, 0, 1))) {
  FUNC_0(VAR_6,
      "vers %d type %02x object %016llx owner %02x\n",
      VAR_7->v0.version, VAR_7->v0.type, VAR_7->v0.object,
      VAR_7->v0.owner);
  VAR_8 = FUNC_2(VAR_1, VAR_7->v0.object, VAR_7->v0.type,
          VAR_3, VAR_4, VAR_7->v0.owner,
          &VAR_7->v0.route, &VAR_7->v0.token);
 }

 if (VAR_8 != 1) {
  FUNC_0(VAR_6, "return %d\n", VAR_8);
  if (VAR_5) {
   *VAR_5 = VAR_1->data;
   VAR_1->data = ((void*)0);
  }
 }

 return VAR_8;
}
