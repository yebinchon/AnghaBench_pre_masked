
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct nvkm_vmm_pt {struct nvkm_mmu_pt** pt; struct nvkm_vmm_pt** pde; } ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu_pt {int memory; } ;


 int FUNC_0 (struct nvkm_mmu_pt*,struct nvkm_vmm*,size_t,int ,int ) ;
 int FUNC_1 (struct nvkm_mmu_pt*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_vmm *VAR_0, struct nvkm_vmm_pt *VAR_1, u32 VAR_2)
{
 struct nvkm_vmm_pt *VAR_3 = VAR_1->pde[VAR_2];
 struct nvkm_mmu_pt *VAR_4 = VAR_1->pt[0];
 u64 VAR_5[2] = {};

 if (VAR_3->pt[0] && !FUNC_1(VAR_3->pt[0], &VAR_5[0]))
  return;
 if (VAR_3->pt[1] && !FUNC_1(VAR_3->pt[1], &VAR_5[1]))
  return;

 FUNC_3(VAR_4->memory);
 FUNC_0(VAR_4, VAR_0, VAR_2 * 0x10, VAR_5[0], VAR_5[1]);
 FUNC_2(VAR_4->memory);
}
