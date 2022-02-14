
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_join {struct nvkm_memory* inst; int head; } ;
struct nvkm_vmm {int start; int limit; TYPE_4__* pd; int join; TYPE_3__* mmu; } ;
struct nvkm_memory {int dummy; } ;
struct TYPE_8__ {int * pde; } ;
struct TYPE_7__ {TYPE_2__* func; } ;
struct TYPE_5__ {int pd_offset; } ;
struct TYPE_6__ {TYPE_1__ vmm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvkm_vmm_join* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct nvkm_vmm*,int ,int *) ;
 int FUNC_3 (struct nvkm_memory*) ;
 int FUNC_4 (struct nvkm_memory*) ;
 int FUNC_5 (struct nvkm_memory*,int const,int ) ;

int
FUNC_6(struct nvkm_vmm *VAR_3, struct nvkm_memory *VAR_4)
{
 const u32 VAR_5 = VAR_3->mmu->func->vmm.pd_offset;
 struct nvkm_vmm_join *VAR_6;
 int VAR_7 = 0;
 u64 VAR_8;
 u32 VAR_9;

 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2)))
  return -VAR_1;
 VAR_6->inst = VAR_4;
 FUNC_1(&VAR_6->head, &VAR_3->join);

 FUNC_4(VAR_6->inst);
 for (VAR_9 = VAR_3->start >> 29; VAR_9 <= (VAR_3->limit - 1) >> 29; VAR_9++) {
  if (!FUNC_2(VAR_3, VAR_3->pd->pde[VAR_9], &VAR_8)) {
   VAR_7 = -VAR_0;
   break;
  }
  FUNC_5(VAR_6->inst, VAR_5 + (VAR_9 * 8), VAR_8);
 }
 FUNC_3(VAR_6->inst);
 return VAR_7;
}
