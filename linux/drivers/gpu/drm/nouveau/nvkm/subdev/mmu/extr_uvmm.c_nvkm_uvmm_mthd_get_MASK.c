
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm {int mutex; } ;
struct nvkm_vma {int user; int addr; } ;
struct TYPE_2__ {struct nvkm_client* client; } ;
struct nvkm_uvmm {struct nvkm_vmm* vmm; TYPE_1__ object; } ;
struct nvkm_client {int super; } ;
struct nvif_vmm_get_v0 {scalar_t__ type; int sparse; int addr; int size; int align; int page; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,void**,int *,struct nvif_vmm_get_v0,int ,int ,int) ;
 int FUNC_3 (struct nvkm_vmm*,int,int,int,int ,int ,int ,struct nvkm_vma**) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_uvmm *VAR_3, void *VAR_4, u32 VAR_5)
{
 struct nvkm_client *VAR_6 = VAR_3->object.client;
 union {
  struct nvif_vmm_get_v0 v0;
 } *VAR_7 = VAR_4;
 struct nvkm_vmm *VAR_8 = VAR_3->vmm;
 struct nvkm_vma *VAR_9;
 int VAR_10 = -VAR_0;
 bool VAR_11, VAR_12, VAR_13;
 u8 VAR_14, VAR_15;
 u64 VAR_16;

 if (!(VAR_10 = FUNC_2(VAR_10, &VAR_4, &VAR_5, VAR_7->v0, 0, 0, 0))) {
  VAR_11 = VAR_7->v0.type == VAR_2;
  VAR_12 = VAR_7->v0.type == VAR_1;
  VAR_13 = VAR_7->v0.sparse;
  VAR_14 = VAR_7->v0.page;
  VAR_15 = VAR_7->v0.align;
  VAR_16 = VAR_7->v0.size;
 } else
  return VAR_10;

 FUNC_0(&VAR_8->mutex);
 VAR_10 = FUNC_3(VAR_8, VAR_11, VAR_12, VAR_13,
      VAR_14, VAR_15, VAR_16, &VAR_9);
 FUNC_1(&VAR_8->mutex);
 if (VAR_10)
  return VAR_10;

 VAR_7->v0.addr = VAR_9->addr;
 VAR_9->user = !VAR_6->super;
 return VAR_10;
}
