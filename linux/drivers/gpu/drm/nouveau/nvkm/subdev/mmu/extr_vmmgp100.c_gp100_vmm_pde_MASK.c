
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct nvkm_mmu_pt {int addr; int memory; } ;


 unsigned long long FUNC_0 (int) ;



 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline bool
FUNC_3(struct nvkm_mmu_pt *VAR_0, u64 *VAR_1)
{
 switch (FUNC_2(VAR_0->memory)) {
 case 128: *VAR_1 |= 1ULL << 1; break;
 case 130: *VAR_1 |= 2ULL << 1;
  *VAR_1 |= FUNC_0(3);
  break;
 case 129: *VAR_1 |= 3ULL << 1; break;
 default:
  FUNC_1(1);
  return 0;
 }
 *VAR_1 |= VAR_0->addr >> 4;
 return 1;
}
