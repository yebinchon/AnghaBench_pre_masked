
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct TYPE_6__ {TYPE_2__* device; } ;
struct nvkm_mmu {int dma_bits; TYPE_3__ subdev; TYPE_1__* type; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_mem {int target; int pages; struct page** mem; int * dma; struct nvkm_memory memory; int sgl; struct nvkm_mmu* mmu; } ;
struct nvif_mem_ram_vn {int dummy; } ;
struct nvif_mem_ram_v0 {int sgl; int * dma; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef enum nvkm_memory_target { ____Placeholder_nvkm_memory_target } nvkm_memory_target ;
struct TYPE_5__ {struct device* dev; } ;
struct TYPE_4__ {int type; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int) ;
 int FUNC_4 (struct device*,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct nvkm_mem*) ;
 void* FUNC_7 (int,int,int ) ;
 struct nvkm_mem* FUNC_8 (int,int ) ;
 int FUNC_9 (int,void**,int *,struct nvif_mem_ram_v0,int ,int ,int) ;
 int FUNC_10 (int,void**,int *,struct nvif_mem_ram_vn) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int *,struct nvkm_memory*) ;

__attribute__((used)) static int
FUNC_12(struct nvkm_mmu *VAR_17, int VAR_18, u8 VAR_19, u64 VAR_20,
    void *VAR_21, u32 VAR_22, struct nvkm_memory **VAR_23)
{
 struct device *VAR_24 = VAR_17->subdev.device->dev;
 union {
  struct nvif_mem_ram_vn vn;
  struct nvif_mem_ram_v0 v0;
 } *VAR_25 = VAR_21;
 int VAR_26 = -VAR_3;
 enum nvkm_memory_target VAR_27;
 struct nvkm_mem *VAR_28;
 gfp_t VAR_29 = VAR_7 | VAR_14;

 if ( (VAR_17->type[VAR_18].type & VAR_8) &&
     !(VAR_17->type[VAR_18].type & VAR_11))
  VAR_27 = VAR_9;
 else
  VAR_27 = VAR_10;

 if (VAR_19 != VAR_12)
  return -VAR_1;

 if (!(VAR_28 = FUNC_8(sizeof(*VAR_28), VAR_6)))
  return -VAR_2;
 VAR_28->target = VAR_27;
 VAR_28->mmu = VAR_17;
 *VAR_23 = &VAR_28->memory;

 if (!(VAR_26 = FUNC_9(VAR_26, &VAR_21, &VAR_22, VAR_25->v0, 0, 0, 0))) {
  if (VAR_25->v0.dma) {
   FUNC_11(&VAR_15, &VAR_28->memory);
   VAR_28->dma = VAR_25->v0.dma;
  } else {
   FUNC_11(&VAR_16, &VAR_28->memory);
   VAR_28->sgl = VAR_25->v0.sgl;
  }

  if (!FUNC_1(VAR_20, VAR_13))
   return -VAR_1;
  VAR_28->pages = VAR_20 >> VAR_12;
  return 0;
 } else
 if ( (VAR_26 = FUNC_10(VAR_26, &VAR_21, &VAR_22, VAR_25->vn))) {
  FUNC_6(VAR_28);
  return VAR_26;
 }

 FUNC_11(&VAR_15, &VAR_28->memory);
 VAR_20 = FUNC_0(VAR_20, VAR_13) >> VAR_12;

 if (!(VAR_28->mem = FUNC_7(VAR_20, sizeof(*VAR_28->mem), VAR_6)))
  return -VAR_2;
 if (!(VAR_28->dma = FUNC_7(VAR_20, sizeof(*VAR_28->dma), VAR_6)))
  return -VAR_2;

 if (VAR_17->dma_bits > 32)
  VAR_29 |= VAR_5;
 else
  VAR_29 |= VAR_4;

 for (VAR_28->pages = 0; VAR_20; VAR_20--, VAR_28->pages++) {
  struct page *VAR_30 = FUNC_3(VAR_29);
  if (!VAR_30)
   return -VAR_2;

  VAR_28->dma[VAR_28->pages] = FUNC_4(VAR_17->subdev.device->dev,
          VAR_30, 0, VAR_13,
          VAR_0);
  if (FUNC_5(VAR_24, VAR_28->dma[VAR_28->pages])) {
   FUNC_2(VAR_30);
   return -VAR_2;
  }

  VAR_28->mem[VAR_28->pages] = VAR_30;
 }

 return 0;
}
