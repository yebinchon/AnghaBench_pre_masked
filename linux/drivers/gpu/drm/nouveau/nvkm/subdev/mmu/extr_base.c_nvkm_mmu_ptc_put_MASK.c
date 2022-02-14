
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_mmu_pt {int memory; TYPE_2__* ptc; int head; scalar_t__ sub; } ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_4__ {int mutex; } ;
struct nvkm_mmu {TYPE_3__ ptc; TYPE_1__ ptp; } ;
struct TYPE_5__ {int refs; int item; } ;


 int FUNC_0 (struct nvkm_mmu_pt*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nvkm_mmu*,int,struct nvkm_mmu_pt*) ;

void
FUNC_6(struct nvkm_mmu *VAR_0, bool VAR_1, struct nvkm_mmu_pt **VAR_2)
{
 struct nvkm_mmu_pt *VAR_3 = *VAR_2;
 if (VAR_3) {

  if (VAR_3->sub) {
   FUNC_2(&VAR_0->ptp.mutex);
   FUNC_5(VAR_0, VAR_1, VAR_3);
   FUNC_3(&VAR_0->ptp.mutex);
   return;
  }


  FUNC_2(&VAR_0->ptc.mutex);
  if (VAR_3->ptc->refs < 8 && !VAR_1) {
   FUNC_1(&VAR_3->head, &VAR_3->ptc->item);
   VAR_3->ptc->refs++;
  } else {
   FUNC_4(&VAR_3->memory);
   FUNC_0(VAR_3);
  }
  FUNC_3(&VAR_0->ptc.mutex);
 }
}
