
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_vma {scalar_t__ addr; int mapped; scalar_t__ size; scalar_t__ memory; scalar_t__ part; } ;


 struct nvkm_vma* FUNC_0 (struct nvkm_vma*,struct nvkm_vma*) ;
 struct nvkm_vma* FUNC_1 (struct nvkm_vmm*,struct nvkm_vma*,struct nvkm_vma*,struct nvkm_vma*,scalar_t__) ;
 struct nvkm_vma* FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct nvkm_vma *
FUNC_3(struct nvkm_vmm *VAR_0, struct nvkm_vma *VAR_1,
    u64 VAR_2, u64 VAR_3, u8 VAR_4, bool VAR_5)
{
 struct nvkm_vma *VAR_6 = ((void*)0);
 struct nvkm_vma *VAR_7 = ((void*)0);

 if (VAR_1->addr == VAR_2 && VAR_1->part && (VAR_6 = FUNC_0(VAR_1, VAR_6))) {
  if (VAR_6->memory || VAR_6->mapped != VAR_5)
   VAR_6 = ((void*)0);
 }

 if (VAR_1->addr + VAR_1->size == VAR_2 + VAR_3 && (VAR_7 = FUNC_0(VAR_1, VAR_7))) {
  if (!VAR_7->part ||
      VAR_7->memory || VAR_7->mapped != VAR_5)
   VAR_7 = ((void*)0);
 }

 if (VAR_6 || VAR_7)
  return FUNC_1(VAR_0, VAR_6, VAR_1, VAR_7, VAR_3);
 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}
