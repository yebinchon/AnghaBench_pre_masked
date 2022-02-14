
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_map {int sgl; int offset; int * memory; } ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_vma {int dummy; } ;
struct nvkm_memory {int dummy; } ;
struct nvkm_mem {int sgl; int memory; } ;


 struct nvkm_mem* FUNC_0 (struct nvkm_memory*) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vma*,void*,int ,struct nvkm_vmm_map*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_memory *VAR_0, u64 VAR_1, struct nvkm_vmm *VAR_2,
   struct nvkm_vma *VAR_3, void *VAR_4, u32 VAR_5)
{
 struct nvkm_mem *VAR_6 = FUNC_0(VAR_0);
 struct nvkm_vmm_map VAR_7 = {
  .memory = &VAR_6->memory,
  .offset = VAR_1,
  .sgl = VAR_6->sgl,
 };
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7);
}
