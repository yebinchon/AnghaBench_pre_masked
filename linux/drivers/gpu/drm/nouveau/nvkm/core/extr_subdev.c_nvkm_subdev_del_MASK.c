
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {TYPE_1__* func; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {struct nvkm_subdev* (* dtor ) (struct nvkm_subdev*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_subdev*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nvkm_subdev*,char*,...) ;
 struct nvkm_subdev* FUNC_5 (struct nvkm_subdev*) ;

void
FUNC_6(struct nvkm_subdev **VAR_0)
{
 struct nvkm_subdev *VAR_1 = *VAR_0;
 s64 VAR_2;

 if (VAR_1 && !FUNC_0(!VAR_1->func)) {
  FUNC_4(VAR_1, "destroy running...\n");
  VAR_2 = FUNC_3(FUNC_2());
  if (VAR_1->func->dtor)
   *VAR_0 = VAR_1->func->dtor(VAR_1);
  VAR_2 = FUNC_3(FUNC_2()) - VAR_2;
  FUNC_4(VAR_1, "destroy completed in %lldus\n", VAR_2);
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
