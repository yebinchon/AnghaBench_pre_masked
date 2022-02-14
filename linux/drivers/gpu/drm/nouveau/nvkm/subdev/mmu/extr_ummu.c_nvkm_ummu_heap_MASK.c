
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct nvkm_ummu {struct nvkm_mmu* mmu; } ;
struct nvkm_mmu {size_t heap_nr; TYPE_1__* heap; } ;
struct nvif_mmu_heap_v0 {size_t index; int size; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void**,int *,struct nvif_mmu_heap_v0,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_ummu *VAR_2, void *VAR_3, u32 VAR_4)
{
 struct nvkm_mmu *VAR_5 = VAR_2->mmu;
 union {
  struct nvif_mmu_heap_v0 v0;
 } *VAR_6 = VAR_3;
 int VAR_7 = -VAR_1;
 u8 VAR_8;

 if (!(VAR_7 = FUNC_0(VAR_7, &VAR_3, &VAR_4, VAR_6->v0, 0, 0, 0))) {
  if ((VAR_8 = VAR_6->v0.index) >= VAR_5->heap_nr)
   return -VAR_0;
  VAR_6->v0.size = VAR_5->heap[VAR_8].size;
 } else
  return VAR_7;

 return 0;
}
