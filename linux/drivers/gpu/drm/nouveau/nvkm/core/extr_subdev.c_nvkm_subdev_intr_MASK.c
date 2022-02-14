
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {TYPE_1__* func; } ;
struct TYPE_2__ {int (* intr ) (struct nvkm_subdev*) ;} ;


 int FUNC_0 (struct nvkm_subdev*) ;

void
FUNC_1(struct nvkm_subdev *VAR_0)
{
 if (VAR_0->func->intr)
  VAR_0->func->intr(VAR_0);
}
