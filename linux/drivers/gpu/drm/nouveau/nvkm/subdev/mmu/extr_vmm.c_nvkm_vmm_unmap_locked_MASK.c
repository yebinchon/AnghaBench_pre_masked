
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_vmm_page {int dummy; } ;
struct nvkm_vmm {TYPE_1__* func; } ;
struct nvkm_vma {size_t refd; int sparse; int size; int addr; scalar_t__ mapref; } ;
struct TYPE_2__ {struct nvkm_vmm_page* page; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nvkm_vmm*,struct nvkm_vmm_page const*,int ,int ,int ,int) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vmm_page const*,int ,int ,int ,int) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*) ;

void
FUNC_3(struct nvkm_vmm *VAR_1, struct nvkm_vma *VAR_2, bool VAR_3)
{
 const struct nvkm_vmm_page *VAR_4 = &VAR_1->func->page[VAR_2->refd];

 if (VAR_2->mapref) {
  FUNC_1(VAR_1, VAR_4, VAR_2->addr, VAR_2->size, VAR_2->sparse, VAR_3);
  VAR_2->refd = VAR_0;
 } else {
  FUNC_0(VAR_1, VAR_4, VAR_2->addr, VAR_2->size, VAR_2->sparse, VAR_3);
 }

 FUNC_2(VAR_1, VAR_2);
}
