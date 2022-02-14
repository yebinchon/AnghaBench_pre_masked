
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_vma {scalar_t__ addr; scalar_t__ size; int part; } ;


 struct nvkm_vma* FUNC_0 (struct nvkm_vma*,scalar_t__) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vma*) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*,struct nvkm_vma*,int *,scalar_t__) ;

struct nvkm_vma *
FUNC_3(struct nvkm_vmm *VAR_0,
      struct nvkm_vma *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct nvkm_vma *VAR_4 = ((void*)0);

 if (VAR_1->addr != VAR_2) {
  VAR_4 = VAR_1;
  if (!(VAR_1 = FUNC_0(VAR_1, VAR_1->size + VAR_1->addr - VAR_2)))
   return ((void*)0);
  VAR_1->part = 1;
  FUNC_1(VAR_0, VAR_1);
 }

 if (VAR_1->size != VAR_3) {
  struct nvkm_vma *VAR_5;
  if (!(VAR_5 = FUNC_0(VAR_1, VAR_1->size - VAR_3))) {
   FUNC_2(VAR_0, VAR_4, VAR_1, ((void*)0), VAR_1->size);
   return ((void*)0);
  }
  VAR_5->part = 1;
  FUNC_1(VAR_0, VAR_5);
 }

 return VAR_1;
}
