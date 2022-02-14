
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_vmm {int mutex; TYPE_1__* func; } ;
struct nvkm_memory {int dummy; } ;
struct TYPE_2__ {int (* part ) (struct nvkm_vmm*,struct nvkm_memory*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_memory*) ;

void
FUNC_3(struct nvkm_vmm *VAR_0, struct nvkm_memory *VAR_1)
{
 if (VAR_1 && VAR_0 && VAR_0->func->part) {
  FUNC_0(&VAR_0->mutex);
  VAR_0->func->part(VAR_0, VAR_1);
  FUNC_1(&VAR_0->mutex);
 }
}
