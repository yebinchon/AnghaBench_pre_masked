
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {TYPE_1__* func; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int (* intr ) (struct nvkm_therm*) ;} ;


 struct nvkm_therm* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_therm*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_therm *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->func->intr)
  VAR_1->func->intr(VAR_1);
}
