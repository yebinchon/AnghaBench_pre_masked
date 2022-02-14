
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_vmm {int mutex; } ;
struct nvkm_vma {scalar_t__ addr; int memory; scalar_t__ busy; int user; } ;
struct TYPE_2__ {struct nvkm_client* client; } ;
struct nvkm_uvmm {struct nvkm_vmm* vmm; TYPE_1__ object; } ;
struct nvkm_client {int super; } ;
struct nvif_vmm_unmap_v0 {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvkm_vmm*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,void**,int *,struct nvif_vmm_unmap_v0,int ,int ,int) ;
 struct nvkm_vma* FUNC_4 (struct nvkm_vmm*,scalar_t__) ;
 int FUNC_5 (struct nvkm_vmm*,struct nvkm_vma*,int) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_uvmm *VAR_3, void *VAR_4, u32 VAR_5)
{
 struct nvkm_client *VAR_6 = VAR_3->object.client;
 union {
  struct nvif_vmm_unmap_v0 v0;
 } *VAR_7 = VAR_4;
 struct nvkm_vmm *VAR_8 = VAR_3->vmm;
 struct nvkm_vma *VAR_9;
 int VAR_10 = -VAR_2;
 u64 VAR_11;

 if (!(VAR_10 = FUNC_3(VAR_10, &VAR_4, &VAR_5, VAR_7->v0, 0, 0, 0))) {
  VAR_11 = VAR_7->v0.addr;
 } else
  return VAR_10;

 FUNC_1(&VAR_8->mutex);
 VAR_9 = FUNC_4(VAR_8, VAR_11);
 if (VAR_10 = -VAR_1, !VAR_9 || VAR_9->addr != VAR_11) {
  FUNC_0(VAR_8, "lookup %016llx: %016llx",
     VAR_11, VAR_9 ? VAR_9->addr : ~0ULL);
  goto done;
 }

 if (VAR_10 = -VAR_1, (!VAR_9->user && !VAR_6->super) || VAR_9->busy) {
  FUNC_0(VAR_8, "denied %016llx: %d %d %d", VAR_11,
     VAR_9->user, !VAR_6->super, VAR_9->busy);
  goto done;
 }

 if (VAR_10 = -VAR_0, !VAR_9->memory) {
  FUNC_0(VAR_8, "unmapped");
  goto done;
 }

 FUNC_5(VAR_8, VAR_9, 0);
 VAR_10 = 0;
done:
 FUNC_2(&VAR_8->mutex);
 return VAR_10;
}
