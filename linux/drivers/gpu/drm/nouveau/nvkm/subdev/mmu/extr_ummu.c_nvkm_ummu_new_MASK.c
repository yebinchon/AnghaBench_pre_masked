
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_ummu {struct nvkm_object object; struct nvkm_mmu* mmu; } ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_mmu {int type_nr; int heap_nr; int dma_bits; TYPE_1__* func; } ;
struct nvkm_device {struct nvkm_mmu* mmu; } ;
struct nvif_mmu_v0 {int kind_nr; int type_nr; int heap_nr; int dmabits; } ;
struct TYPE_2__ {int (* kind ) (struct nvkm_mmu*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvkm_ummu* FUNC_0 (int,int ) ;
 int FUNC_1 (int,void**,int *,struct nvif_mmu_v0,int ,int ,int) ;
 int FUNC_2 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int VAR_3 ;
 int FUNC_3 (struct nvkm_mmu*,int*) ;

int
FUNC_4(struct nvkm_device *VAR_4, const struct nvkm_oclass *VAR_5,
       void *VAR_6, u32 VAR_7, struct nvkm_object **VAR_8)
{
 union {
  struct nvif_mmu_v0 v0;
 } *VAR_9 = VAR_6;
 struct nvkm_mmu *VAR_10 = VAR_4->mmu;
 struct nvkm_ummu *VAR_11;
 int VAR_12 = -VAR_1, VAR_13 = 0;

 if (VAR_10->func->kind)
  VAR_10->func->kind(VAR_10, &VAR_13);

 if (!(VAR_12 = FUNC_1(VAR_12, &VAR_6, &VAR_7, VAR_9->v0, 0, 0, 0))) {
  VAR_9->v0.dmabits = VAR_10->dma_bits;
  VAR_9->v0.heap_nr = VAR_10->heap_nr;
  VAR_9->v0.type_nr = VAR_10->type_nr;
  VAR_9->v0.kind_nr = VAR_13;
 } else
  return VAR_12;

 if (!(VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_2)))
  return -VAR_0;
 FUNC_2(&VAR_3, VAR_5, &VAR_11->object);
 VAR_11->mmu = VAR_10;
 *VAR_8 = &VAR_11->object;
 return 0;
}
