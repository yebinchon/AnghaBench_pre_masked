
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_mmu_pt {int memory; } ;


 int FUNC_0 (struct nvkm_mmu_pt*,struct nvkm_vmm*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_mmu_pt*,int *,int,int const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_vmm *VAR_0,
     struct nvkm_mmu_pt *VAR_1, u32 VAR_2, u32 VAR_3)
{
 FUNC_4(VAR_1->memory);
 if (VAR_2 & 3) {
  const u32 VAR_4 = FUNC_1(VAR_3, 4 - (VAR_2 & 3));
  FUNC_2(VAR_0, VAR_1, ((void*)0), VAR_2, VAR_4);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
 }

 while (VAR_3 > 4) {
  FUNC_0(VAR_1, VAR_0, VAR_2++ * 4, 0x00000000);
  FUNC_0(VAR_1, VAR_0, VAR_2++ * 4, 0x00000000);
  FUNC_0(VAR_1, VAR_0, VAR_2++ * 4, 0x00000000);
  FUNC_0(VAR_1, VAR_0, VAR_2++ * 4, 0x00000000);
  VAR_3 -= 4;
 }

 if (VAR_3)
  FUNC_2(VAR_0, VAR_1, ((void*)0), VAR_2, VAR_3);
 FUNC_3(VAR_1->memory);
}
