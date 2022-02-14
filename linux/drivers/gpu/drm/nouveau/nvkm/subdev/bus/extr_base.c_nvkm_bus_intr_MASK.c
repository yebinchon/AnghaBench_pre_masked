
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_bus {TYPE_1__* func; } ;
struct TYPE_2__ {int (* intr ) (struct nvkm_bus*) ;} ;


 struct nvkm_bus* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_bus*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_bus *VAR_1 = FUNC_0(VAR_0);
 VAR_1->func->intr(VAR_1);
}
