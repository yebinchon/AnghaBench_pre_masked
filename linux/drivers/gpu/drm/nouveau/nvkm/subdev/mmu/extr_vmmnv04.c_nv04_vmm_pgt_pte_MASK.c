
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_map {int dummy; } ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu_pt {int dummy; } ;


 int FUNC_0 (struct nvkm_mmu_pt*,struct nvkm_vmm*,int,int) ;

__attribute__((used)) static inline void
FUNC_1(struct nvkm_vmm *VAR_0, struct nvkm_mmu_pt *VAR_1,
   u32 VAR_2, u32 VAR_3, struct nvkm_vmm_map *VAR_4, u64 VAR_5)
{
 u32 VAR_6 = VAR_5 | 0x00000003;
 while (VAR_3--) {
  FUNC_0(VAR_1, VAR_0, 8 + VAR_2++ * 4, VAR_6);
  VAR_6 += 0x00001000;
 }
}
