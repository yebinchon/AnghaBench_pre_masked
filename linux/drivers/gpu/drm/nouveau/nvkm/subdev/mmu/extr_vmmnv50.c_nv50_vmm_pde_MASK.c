
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvkm_vmm_pt {int page; struct nvkm_mmu_pt** pt; } ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu_pt {int addr; int memory; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct nvkm_vmm *VAR_0, struct nvkm_vmm_pt *VAR_1, u64 *VAR_2)
{
 struct nvkm_mmu_pt *VAR_3;
 u64 VAR_4 = 0xdeadcafe00000000ULL;
 if (VAR_1 && (VAR_3 = VAR_1->pt[0])) {
  switch (VAR_1->page) {
  case 16: VAR_4 = 0x00000001; break;
  case 12: VAR_4 = 0x00000003;
   switch (FUNC_1(VAR_3->memory)) {
   case 0x100000: VAR_4 |= 0x00000000; break;
   case 0x040000: VAR_4 |= 0x00000020; break;
   case 0x020000: VAR_4 |= 0x00000040; break;
   case 0x010000: VAR_4 |= 0x00000060; break;
   default:
    FUNC_0(1);
    return 0;
   }
   break;
  default:
   FUNC_0(1);
   return 0;
  }

  switch (FUNC_2(VAR_3->memory)) {
  case 128: VAR_4 |= 0x00000000; break;
  case 130: VAR_4 |= 0x00000008; break;
  case 129: VAR_4 |= 0x0000000c; break;
  default:
   FUNC_0(1);
   return 0;
  }

  VAR_4 |= VAR_3->addr;
 }
 *VAR_2 = VAR_4;
 return 1;
}
