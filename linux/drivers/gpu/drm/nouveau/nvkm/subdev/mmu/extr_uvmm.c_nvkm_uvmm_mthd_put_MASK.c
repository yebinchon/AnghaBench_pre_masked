
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_vmm {int mutex; } ;
struct nvkm_vma {scalar_t__ addr; scalar_t__ busy; int user; scalar_t__ part; } ;
struct TYPE_2__ {struct nvkm_client* client; } ;
struct nvkm_uvmm {struct nvkm_vmm* vmm; TYPE_1__ object; } ;
struct nvkm_client {int super; } ;
struct nvif_vmm_put_v0 {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_vmm*,char*,scalar_t__,unsigned long long,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,void**,int *,struct nvif_vmm_put_v0,int ,int ,int) ;
 struct nvkm_vma* FUNC_4 (struct nvkm_vmm*,scalar_t__) ;
 int FUNC_5 (struct nvkm_vmm*,struct nvkm_vma*) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_uvmm *VAR_2, void *VAR_3, u32 VAR_4)
{
 struct nvkm_client *VAR_5 = VAR_2->object.client;
 union {
  struct nvif_vmm_put_v0 v0;
 } *VAR_6 = VAR_3;
 struct nvkm_vmm *VAR_7 = VAR_2->vmm;
 struct nvkm_vma *VAR_8;
 int VAR_9 = -VAR_1;
 u64 VAR_10;

 if (!(VAR_9 = FUNC_3(VAR_9, &VAR_3, &VAR_4, VAR_6->v0, 0, 0, 0))) {
  VAR_10 = VAR_6->v0.addr;
 } else
  return VAR_9;

 FUNC_1(&VAR_7->mutex);
 VAR_8 = FUNC_4(VAR_7, VAR_6->v0.addr);
 if (VAR_9 = -VAR_0, !VAR_8 || VAR_8->addr != VAR_10 || VAR_8->part) {
  FUNC_0(VAR_7, "lookup %016llx: %016llx %d", VAR_10,
     VAR_8 ? VAR_8->addr : ~0ULL, VAR_8 ? VAR_8->part : 0);
  goto done;
 }

 if (VAR_9 = -VAR_0, (!VAR_8->user && !VAR_5->super) || VAR_8->busy) {
  FUNC_0(VAR_7, "denied %016llx: %d %d %d", VAR_10,
     VAR_8->user, !VAR_5->super, VAR_8->busy);
  goto done;
 }

 FUNC_5(VAR_7, VAR_8);
 VAR_9 = 0;
done:
 FUNC_2(&VAR_7->mutex);
 return VAR_9;
}
