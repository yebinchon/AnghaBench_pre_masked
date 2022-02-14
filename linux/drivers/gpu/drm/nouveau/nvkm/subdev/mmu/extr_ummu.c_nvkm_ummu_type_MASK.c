
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct nvkm_ummu {struct nvkm_mmu* mmu; } ;
struct nvkm_mmu {size_t type_nr; TYPE_1__* type; } ;
struct nvif_mmu_type_v0 {size_t index; int vram; int host; int comp; int disp; int kind; int mappable; int coherent; int uncached; int heap; } ;
struct TYPE_2__ {size_t type; int heap; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int,void**,int *,struct nvif_mmu_type_v0,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_ummu *VAR_10, void *VAR_11, u32 VAR_12)
{
 struct nvkm_mmu *VAR_13 = VAR_10->mmu;
 union {
  struct nvif_mmu_type_v0 v0;
 } *VAR_14 = VAR_11;
 int VAR_15 = -VAR_1;
 u8 VAR_16, VAR_17;

 if (!(VAR_15 = FUNC_0(VAR_15, &VAR_11, &VAR_12, VAR_14->v0, 0, 0, 0))) {
  if ((VAR_17 = VAR_14->v0.index) >= VAR_13->type_nr)
   return -VAR_0;
  VAR_16 = VAR_13->type[VAR_17].type;
  VAR_14->v0.heap = VAR_13->type[VAR_17].heap;
  VAR_14->v0.vram = !!(VAR_16 & VAR_9);
  VAR_14->v0.host = !!(VAR_16 & VAR_5);
  VAR_14->v0.comp = !!(VAR_16 & VAR_3);
  VAR_14->v0.disp = !!(VAR_16 & VAR_4);
  VAR_14->v0.kind = !!(VAR_16 & VAR_6);
  VAR_14->v0.mappable = !!(VAR_16 & VAR_7);
  VAR_14->v0.coherent = !!(VAR_16 & VAR_2);
  VAR_14->v0.uncached = !!(VAR_16 & VAR_8);
 } else
  return VAR_15;

 return 0;
}
