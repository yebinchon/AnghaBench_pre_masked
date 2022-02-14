
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm {int mutex; } ;
struct TYPE_2__ {struct nvkm_client* client; } ;
struct nvkm_uvmm {struct nvkm_vmm* vmm; TYPE_1__ object; } ;
struct nvkm_client {int super; } ;
struct nvif_vmm_pfnmap_v0 {int page; int addr; int size; int* phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,void**,int*,struct nvif_vmm_pfnmap_v0,int ,int ,int) ;
 int FUNC_3 (struct nvkm_vmm*,int,int,int,int*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_uvmm *VAR_3, void *VAR_4, u32 VAR_5)
{
 struct nvkm_client *VAR_6 = VAR_3->object.client;
 union {
  struct nvif_vmm_pfnmap_v0 v0;
 } *VAR_7 = VAR_4;
 struct nvkm_vmm *VAR_8 = VAR_3->vmm;
 int VAR_9 = -VAR_2;
 u64 VAR_10, VAR_11, *VAR_12;
 u8 VAR_13;

 if (!(VAR_9 = FUNC_2(VAR_9, &VAR_4, &VAR_5, VAR_7->v0, 0, 0, 1))) {
  VAR_13 = VAR_7->v0.page;
  VAR_10 = VAR_7->v0.addr;
  VAR_11 = VAR_7->v0.size;
  VAR_12 = VAR_7->v0.phys;
  if (VAR_5 != (VAR_11 >> VAR_13) * sizeof(VAR_7->v0.phys[0]))
   return -VAR_0;
 } else
  return VAR_9;

 if (!VAR_6->super)
  return -VAR_1;

 if (VAR_11) {
  FUNC_0(&VAR_8->mutex);
  VAR_9 = FUNC_3(VAR_8, VAR_13, VAR_10, VAR_11, VAR_12);
  FUNC_1(&VAR_8->mutex);
 }

 return VAR_9;
}
