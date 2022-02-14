
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_vmm {int mutex; } ;
struct nvkm_vma {int busy; scalar_t__ addr; scalar_t__ size; scalar_t__ refd; int mapref; scalar_t__ memory; scalar_t__ mapped; int user; } ;
struct TYPE_2__ {struct nvkm_client* client; } ;
struct nvkm_uvmm {struct nvkm_vmm* vmm; TYPE_1__ object; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_client {int super; } ;
struct nvif_vmm_map_v0 {scalar_t__ addr; scalar_t__ size; scalar_t__ memory; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nvkm_memory*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_vmm*,char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,void**,int *,struct nvif_vmm_map_v0,int ,int ,int) ;
 int FUNC_6 (struct nvkm_memory*,scalar_t__,struct nvkm_vmm*,struct nvkm_vma*,void*,int ) ;
 int FUNC_7 (struct nvkm_memory**) ;
 struct nvkm_memory* FUNC_8 (struct nvkm_client*,scalar_t__) ;
 struct nvkm_vma* FUNC_9 (struct nvkm_vmm*,scalar_t__) ;
 struct nvkm_vma* FUNC_10 (struct nvkm_vmm*,struct nvkm_vma*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct nvkm_vmm*,struct nvkm_vma*) ;

__attribute__((used)) static int
FUNC_12(struct nvkm_uvmm *VAR_5, void *VAR_6, u32 VAR_7)
{
 struct nvkm_client *VAR_8 = VAR_5->object.client;
 union {
  struct nvif_vmm_map_v0 v0;
 } *VAR_9 = VAR_6;
 u64 VAR_10, VAR_11, VAR_12, VAR_13;
 struct nvkm_vmm *VAR_14 = VAR_5->vmm;
 struct nvkm_vma *VAR_15;
 struct nvkm_memory *VAR_16;
 int VAR_17 = -VAR_3;

 if (!(VAR_17 = FUNC_5(VAR_17, &VAR_6, &VAR_7, VAR_9->v0, 0, 0, 1))) {
  VAR_10 = VAR_9->v0.addr;
  VAR_11 = VAR_9->v0.size;
  VAR_12 = VAR_9->v0.memory;
  VAR_13 = VAR_9->v0.offset;
 } else
  return VAR_17;

 VAR_16 = FUNC_8(VAR_8, VAR_12);
 if (FUNC_0(VAR_16)) {
  FUNC_2(VAR_14, "memory %016llx %ld\n", VAR_12, FUNC_1(VAR_16));
  return FUNC_1(VAR_16);
 }

 FUNC_3(&VAR_14->mutex);
 if (VAR_17 = -VAR_1, !(VAR_15 = FUNC_9(VAR_14, VAR_10))) {
  FUNC_2(VAR_14, "lookup %016llx", VAR_10);
  goto fail;
 }

 if (VAR_17 = -VAR_1, (!VAR_15->user && !VAR_8->super) || VAR_15->busy) {
  FUNC_2(VAR_14, "denied %016llx: %d %d %d", VAR_10,
     VAR_15->user, !VAR_8->super, VAR_15->busy);
  goto fail;
 }

 if (VAR_17 = -VAR_0, VAR_15->mapped && !VAR_15->memory) {
  FUNC_2(VAR_14, "pfnmap %016llx", VAR_10);
  goto fail;
 }

 if (VAR_17 = -VAR_0, VAR_15->addr != VAR_10 || VAR_15->size != VAR_11) {
  if (VAR_10 + VAR_11 > VAR_15->addr + VAR_15->size || VAR_15->memory ||
      (VAR_15->refd == VAR_4 && !VAR_15->mapref)) {
   FUNC_2(VAR_14, "split %d %d %d "
           "%016llx %016llx %016llx %016llx",
      !!VAR_15->memory, VAR_15->refd, VAR_15->mapref,
      VAR_10, VAR_11, VAR_15->addr, (u64)VAR_15->size);
   goto fail;
  }

  VAR_15 = FUNC_10(VAR_14, VAR_15, VAR_10, VAR_11);
  if (!VAR_15) {
   VAR_17 = -VAR_2;
   goto fail;
  }
 }
 VAR_15->busy = 1;
 FUNC_4(&VAR_14->mutex);

 VAR_17 = FUNC_6(VAR_16, VAR_13, VAR_14, VAR_15, VAR_6, VAR_7);
 if (VAR_17 == 0) {

  FUNC_7(&VAR_16);
  return 0;
 }

 FUNC_3(&VAR_14->mutex);
 VAR_15->busy = 0;
 FUNC_11(VAR_14, VAR_15);
fail:
 FUNC_4(&VAR_14->mutex);
 FUNC_7(&VAR_16);
 return VAR_17;
}
