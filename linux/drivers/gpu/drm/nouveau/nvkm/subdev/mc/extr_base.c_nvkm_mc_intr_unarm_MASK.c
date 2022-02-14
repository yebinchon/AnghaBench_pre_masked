
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_mc {TYPE_1__* func; } ;
struct nvkm_device {struct nvkm_mc* mc; } ;
struct TYPE_2__ {int (* intr_unarm ) (struct nvkm_mc*) ;} ;


 scalar_t__ FUNC_0 (struct nvkm_mc*) ;
 int FUNC_1 (struct nvkm_mc*) ;

void
FUNC_2(struct nvkm_device *VAR_0)
{
 struct nvkm_mc *VAR_1 = VAR_0->mc;
 if (FUNC_0(VAR_1))
  VAR_1->func->intr_unarm(VAR_1);
}
