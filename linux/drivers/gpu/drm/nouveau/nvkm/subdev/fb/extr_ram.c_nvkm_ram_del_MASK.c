
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_ram {int vram; TYPE_1__* func; } ;
struct TYPE_2__ {struct nvkm_ram* (* dtor ) (struct nvkm_ram*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_ram*) ;
 int FUNC_2 (int *) ;
 struct nvkm_ram* FUNC_3 (struct nvkm_ram*) ;

void
FUNC_4(struct nvkm_ram **VAR_0)
{
 struct nvkm_ram *VAR_1 = *VAR_0;
 if (VAR_1 && !FUNC_0(!VAR_1->func)) {
  if (VAR_1->func->dtor)
   *VAR_0 = VAR_1->func->dtor(VAR_1);
  FUNC_2(&VAR_1->vram);
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
