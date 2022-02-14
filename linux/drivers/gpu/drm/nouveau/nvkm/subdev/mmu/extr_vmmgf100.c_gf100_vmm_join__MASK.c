
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct nvkm_vmm {unsigned long long limit; TYPE_1__* pd; } ;
struct nvkm_mmu_pt {unsigned long long addr; int memory; } ;
struct nvkm_memory {int dummy; } ;
struct TYPE_2__ {struct nvkm_mmu_pt** pt; } ;


 unsigned long long FUNC_0 (int) ;
 int VAR_0 ;



 int FUNC_1 (int) ;
 int FUNC_2 (struct nvkm_memory*) ;
 int FUNC_3 (struct nvkm_memory*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nvkm_memory*,int,unsigned long long) ;

int
FUNC_6(struct nvkm_vmm *VAR_1, struct nvkm_memory *VAR_2, u64 VAR_3)
{
 struct nvkm_mmu_pt *VAR_4 = VAR_1->pd->pt[0];

 switch (FUNC_4(VAR_4->memory)) {
 case 128: VAR_3 |= 0ULL << 0; break;
 case 130: VAR_3 |= 2ULL << 0;
  VAR_3 |= FUNC_0(2) ;
  break;
 case 129: VAR_3 |= 3ULL << 0; break;
 default:
  FUNC_1(1);
  return -VAR_0;
 }
 VAR_3 |= VAR_4->addr;

 FUNC_3(VAR_2);
 FUNC_5(VAR_2, 0x0200, VAR_3);
 FUNC_5(VAR_2, 0x0208, VAR_1->limit - 1);
 FUNC_2(VAR_2);
 return 0;
}
