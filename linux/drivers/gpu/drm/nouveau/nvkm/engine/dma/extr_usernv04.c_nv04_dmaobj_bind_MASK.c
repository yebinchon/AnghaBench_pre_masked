
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_memory {int dummy; } ;
typedef struct nvkm_memory nvkm_gpuobj ;
struct nvkm_dmaobj {int dummy; } ;
struct nvkm_device {TYPE_7__* mmu; } ;
struct TYPE_16__ {int start; int limit; TYPE_3__* dma; } ;
struct nv04_dmaobj {int flags0; int flags2; TYPE_8__ base; scalar_t__ clone; } ;
struct TYPE_15__ {TYPE_6__* vmm; } ;
struct TYPE_14__ {TYPE_5__* pd; } ;
struct TYPE_13__ {TYPE_4__** pt; } ;
struct TYPE_12__ {struct nvkm_memory* memory; } ;
struct TYPE_9__ {struct nvkm_device* device; } ;
struct TYPE_10__ {TYPE_1__ subdev; } ;
struct TYPE_11__ {TYPE_2__ engine; } ;


 struct nv04_dmaobj* FUNC_0 (struct nvkm_dmaobj*) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int,struct nvkm_memory*,struct nvkm_memory**) ;
 int FUNC_3 (struct nvkm_memory*,struct nvkm_memory**) ;
 int FUNC_4 (struct nvkm_memory*) ;
 int FUNC_5 (struct nvkm_memory*,int) ;
 int FUNC_6 (struct nvkm_memory*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_dmaobj *VAR_0, struct nvkm_gpuobj *VAR_1,
   int VAR_2, struct nvkm_gpuobj **VAR_3)
{
 struct nv04_dmaobj *VAR_4 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_5 = VAR_4->base.dma->engine.subdev.device;
 u64 VAR_6 = VAR_4->base.start & 0xfffff000;
 u64 VAR_7 = VAR_4->base.start & 0x00000fff;
 u32 VAR_8 = VAR_4->base.limit - VAR_4->base.start;
 int VAR_9;

 if (VAR_4->clone) {
  struct nvkm_memory *VAR_10 =
   VAR_5->mmu->vmm->pd->pt[0]->memory;
  if (!VAR_4->base.start)
   return FUNC_3(VAR_10, VAR_3);
  FUNC_4(VAR_10);
  VAR_6 = FUNC_5(VAR_10, 8 + (VAR_6 >> 10));
  VAR_6 &= 0xfffff000;
  FUNC_1(VAR_10);
 }

 VAR_9 = FUNC_2(VAR_5, 16, VAR_2, 0, VAR_1, VAR_3);
 if (VAR_9 == 0) {
  FUNC_4(*VAR_3);
  FUNC_6(*VAR_3, 0x00, VAR_4->flags0 | (VAR_7 << 20));
  FUNC_6(*VAR_3, 0x04, VAR_8);
  FUNC_6(*VAR_3, 0x08, VAR_4->flags2 | VAR_6);
  FUNC_6(*VAR_3, 0x0c, VAR_4->flags2 | VAR_6);
  FUNC_1(*VAR_3);
 }

 return VAR_9;
}
