
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvif_vma {unsigned long long addr; int size; } ;
struct nouveau_vma {scalar_t__ refs; unsigned long long addr; int head; TYPE_1__* vmm; } ;
struct TYPE_2__ {int vmm; } ;


 int FUNC_0 (struct nouveau_vma*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct nvif_vma*) ;

void
FUNC_4(struct nouveau_vma **VAR_0)
{
 struct nouveau_vma *VAR_1 = *VAR_0;
 if (VAR_1 && --VAR_1->refs <= 0) {
  if (FUNC_1(VAR_1->addr != ~0ULL)) {
   struct nvif_vma VAR_2 = { .addr = VAR_1->addr, .size = 1 };
   FUNC_3(&VAR_1->vmm->vmm, &VAR_2);
  }
  FUNC_2(&VAR_1->head);
  FUNC_0(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
