
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_map {int type; int ctag; int next; } ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu_pt {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct nvkm_mmu_pt*,struct nvkm_vmm*,int,int) ;

__attribute__((used)) static inline void
FUNC_2(struct nvkm_vmm *VAR_0, struct nvkm_mmu_pt *VAR_1,
   u32 VAR_2, u32 VAR_3, struct nvkm_vmm_map *VAR_4, u64 VAR_5)
{
 u64 VAR_6 = VAR_5 + VAR_4->type, VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_4->type += VAR_3 * VAR_4->ctag;

 while (VAR_3) {
  for (VAR_9 = 7; VAR_9 >= 0; VAR_9--) {
   VAR_8 = 1 << VAR_9;
   if (VAR_3 >= VAR_8 && FUNC_0(VAR_2, VAR_8))
    break;
  }

  VAR_7 = VAR_6 | (VAR_9 << 7);
  VAR_6 += VAR_8 * VAR_4->next;
  VAR_3 -= VAR_8;

  while (VAR_8--)
   FUNC_1(VAR_1, VAR_0, VAR_2++ * 8, VAR_7);
 }
}
