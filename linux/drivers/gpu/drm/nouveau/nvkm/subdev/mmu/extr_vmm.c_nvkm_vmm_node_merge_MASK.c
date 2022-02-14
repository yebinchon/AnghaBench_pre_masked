
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_vma {scalar_t__ size; int addr; } ;


 int FUNC_0 (struct nvkm_vma*) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vma*) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*) ;
 int FUNC_3 (struct nvkm_vmm*,struct nvkm_vma*) ;

__attribute__((used)) static struct nvkm_vma *
FUNC_4(struct nvkm_vmm *VAR_0, struct nvkm_vma *VAR_1,
      struct nvkm_vma *VAR_2, struct nvkm_vma *VAR_3, u64 VAR_4)
{
 if (VAR_3) {
  if (VAR_2->size == VAR_4) {
   VAR_2->size += VAR_3->size;
   FUNC_1(VAR_0, VAR_3);
   if (VAR_1) {
    VAR_1->size += VAR_2->size;
    FUNC_1(VAR_0, VAR_2);
    return VAR_1;
   }
   return VAR_2;
  }
  FUNC_0(VAR_1);

  FUNC_3(VAR_0, VAR_3);
  VAR_2->size -= VAR_4;
  VAR_3->addr -= VAR_4;
  VAR_3->size += VAR_4;
  FUNC_2(VAR_0, VAR_3);
  return VAR_3;
 }

 if (VAR_1) {
  if (VAR_2->size != VAR_4) {
   FUNC_3(VAR_0, VAR_2);
   VAR_1->size += VAR_4;
   VAR_2->addr += VAR_4;
   VAR_2->size -= VAR_4;
   FUNC_2(VAR_0, VAR_2);
  } else {
   VAR_1->size += VAR_2->size;
   FUNC_1(VAR_0, VAR_2);
  }
  return VAR_1;
 }

 return VAR_2;
}
