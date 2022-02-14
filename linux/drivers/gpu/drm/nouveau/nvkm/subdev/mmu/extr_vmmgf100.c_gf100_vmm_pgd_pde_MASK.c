
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef size_t u32 ;
struct nvkm_vmm_pt {struct nvkm_mmu_pt** pt; struct nvkm_vmm_pt** pde; } ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu_pt {int addr; int memory; } ;


 unsigned long long FUNC_0 (int) ;



 int FUNC_1 (struct nvkm_mmu_pt*,struct nvkm_vmm*,size_t,unsigned long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct nvkm_vmm *VAR_0, struct nvkm_vmm_pt *VAR_1, u32 VAR_2)
{
 struct nvkm_vmm_pt *VAR_3 = VAR_1->pde[VAR_2];
 struct nvkm_mmu_pt *VAR_4 = VAR_1->pt[0];
 struct nvkm_mmu_pt *VAR_5;
 u64 VAR_6 = 0;

 if ((VAR_5 = VAR_3->pt[0])) {
  switch (FUNC_5(VAR_5->memory)) {
  case 128: VAR_6 |= 1ULL << 0; break;
  case 130: VAR_6 |= 2ULL << 0;
   VAR_6 |= FUNC_0(35);
   break;
  case 129: VAR_6 |= 3ULL << 0; break;
  default:
   FUNC_2(1);
   return;
  }
  VAR_6 |= VAR_5->addr >> 8;
 }

 if ((VAR_5 = VAR_3->pt[1])) {
  switch (FUNC_5(VAR_5->memory)) {
  case 128: VAR_6 |= 1ULL << 32; break;
  case 130: VAR_6 |= 2ULL << 32;
   VAR_6 |= FUNC_0(34);
   break;
  case 129: VAR_6 |= 3ULL << 32; break;
  default:
   FUNC_2(1);
   return;
  }
  VAR_6 |= VAR_5->addr << 24;
 }

 FUNC_4(VAR_4->memory);
 FUNC_1(VAR_4, VAR_0, VAR_2 * 8, VAR_6);
 FUNC_3(VAR_4->memory);
}
