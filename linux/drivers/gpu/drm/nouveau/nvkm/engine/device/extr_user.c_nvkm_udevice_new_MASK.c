
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_udevice {void* device; struct nvkm_object object; } ;
struct nvkm_oclass {struct nvkm_client* client; } ;
struct nvkm_object_func {int dummy; } ;
struct nvkm_client {int device; scalar_t__ super; struct nvkm_object object; } ;
struct nv_device_v0 {int device; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvkm_udevice* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_object*,char*,int ,...) ;
 int FUNC_2 (int,void**,int *,struct nv_device_v0,int ,int ,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct nvkm_object_func const*,struct nvkm_oclass const*,struct nvkm_object*) ;
 struct nvkm_object_func VAR_4 ;
 struct nvkm_object_func VAR_5 ;

__attribute__((used)) static int
FUNC_5(const struct nvkm_oclass *VAR_6, void *VAR_7, u32 VAR_8,
   struct nvkm_object **VAR_9)
{
 union {
  struct nv_device_v0 v0;
 } *VAR_10 = VAR_7;
 struct nvkm_client *VAR_11 = VAR_6->client;
 struct nvkm_object *VAR_12 = &VAR_11->object;
 const struct nvkm_object_func *VAR_13;
 struct nvkm_udevice *VAR_14;
 int VAR_15 = -VAR_2;

 FUNC_1(VAR_12, "create device size %d\n", VAR_8);
 if (!(VAR_15 = FUNC_2(VAR_15, &VAR_7, &VAR_8, VAR_10->v0, 0, 0, 0))) {
  FUNC_1(VAR_12, "create device v%d device %016llx\n",
      VAR_10->v0.version, VAR_10->v0.device);
 } else
  return VAR_15;


 if (VAR_11->super)
  VAR_13 = &VAR_5;
 else
  VAR_13 = &VAR_4;

 if (!(VAR_14 = FUNC_0(sizeof(*VAR_14), VAR_3)))
  return -VAR_1;
 FUNC_4(VAR_13, VAR_6, &VAR_14->object);
 *VAR_9 = &VAR_14->object;


 if (VAR_10->v0.device != ~0)
  VAR_14->device = FUNC_3(VAR_10->v0.device);
 else
  VAR_14->device = FUNC_3(VAR_11->device);
 if (!VAR_14->device)
  return -VAR_0;

 return 0;
}
