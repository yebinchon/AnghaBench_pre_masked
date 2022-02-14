
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_mmu_ptp {int base; int shift; int head; int pt; int mask; int free; struct nvkm_mmu_ptp* ptp; } ;
struct nvkm_mmu_pt {int base; int shift; int head; int pt; int mask; int free; struct nvkm_mmu_pt* ptp; } ;
struct TYPE_2__ {int list; } ;
struct nvkm_mmu {TYPE_1__ ptp; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (struct nvkm_mmu_ptp*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvkm_mmu*,int,int *) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_mmu *VAR_0, bool VAR_1, struct nvkm_mmu_pt *VAR_2)
{
 const int VAR_3 = VAR_2->base >> VAR_2->ptp->shift;
 struct nvkm_mmu_ptp *VAR_4 = VAR_2->ptp;




 if (!VAR_4->free)
  FUNC_2(&VAR_4->head, &VAR_0->ptp.list);
 VAR_4->free |= FUNC_0(VAR_3);


 if (VAR_4->free == VAR_4->mask) {
  FUNC_4(VAR_0, VAR_1, &VAR_4->pt);
  FUNC_3(&VAR_4->head);
  FUNC_1(VAR_4);
 }

 FUNC_1(VAR_2);
}
