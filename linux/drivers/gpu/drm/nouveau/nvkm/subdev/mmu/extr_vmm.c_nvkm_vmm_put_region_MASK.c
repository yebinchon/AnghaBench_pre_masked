
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_vmm {int dummy; } ;
struct nvkm_vma {scalar_t__ size; int used; int addr; } ;


 struct nvkm_vma* FUNC_0 (struct nvkm_vma*,struct nvkm_vma*) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vma*) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_vmm *VAR_0, struct nvkm_vma *VAR_1)
{
 struct nvkm_vma *VAR_2, *VAR_3;

 if ((VAR_2 = FUNC_0(VAR_1, VAR_2)) && !VAR_2->used) {
  VAR_1->addr = VAR_2->addr;
  VAR_1->size += VAR_2->size;
  FUNC_1(VAR_0, VAR_2);
 }

 if ((VAR_3 = FUNC_0(VAR_1, VAR_3)) && !VAR_3->used) {
  VAR_1->size += VAR_3->size;
  FUNC_1(VAR_0, VAR_3);
 }

 FUNC_2(VAR_0, VAR_1);
}
