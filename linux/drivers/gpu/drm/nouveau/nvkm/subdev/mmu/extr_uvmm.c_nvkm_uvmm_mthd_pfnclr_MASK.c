
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_vmm {int mutex; } ;
struct TYPE_2__ {struct nvkm_client* client; } ;
struct nvkm_uvmm {struct nvkm_vmm* vmm; TYPE_1__ object; } ;
struct nvkm_client {int super; } ;
struct nvif_vmm_pfnclr_v0 {scalar_t__ size; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,void**,int *,struct nvif_vmm_pfnclr_v0,int ,int ,int) ;
 int FUNC_3 (struct nvkm_vmm*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_uvmm *VAR_2, void *VAR_3, u32 VAR_4)
{
 struct nvkm_client *VAR_5 = VAR_2->object.client;
 union {
  struct nvif_vmm_pfnclr_v0 v0;
 } *VAR_6 = VAR_3;
 struct nvkm_vmm *VAR_7 = VAR_2->vmm;
 int VAR_8 = -VAR_1;
 u64 VAR_9, VAR_10;

 if (!(VAR_8 = FUNC_2(VAR_8, &VAR_3, &VAR_4, VAR_6->v0, 0, 0, 0))) {
  VAR_9 = VAR_6->v0.addr;
  VAR_10 = VAR_6->v0.size;
 } else
  return VAR_8;

 if (!VAR_5->super)
  return -VAR_0;

 if (VAR_10) {
  FUNC_0(&VAR_7->mutex);
  VAR_8 = FUNC_3(VAR_7, VAR_9, VAR_10);
  FUNC_1(&VAR_7->mutex);
 }

 return VAR_8;
}
