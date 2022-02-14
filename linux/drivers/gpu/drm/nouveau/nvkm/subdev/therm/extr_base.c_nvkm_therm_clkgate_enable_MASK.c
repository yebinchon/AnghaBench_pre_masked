
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {TYPE_1__* func; int subdev; int clkgating_enabled; } ;
struct TYPE_2__ {int (* clkgate_enable ) (struct nvkm_therm*) ;} ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct nvkm_therm*) ;

void
FUNC_2(struct nvkm_therm *VAR_0)
{
 if (!VAR_0 || !VAR_0->func->clkgate_enable || !VAR_0->clkgating_enabled)
  return;

 FUNC_0(&VAR_0->subdev,
     "Enabling clockgating\n");
 VAR_0->func->clkgate_enable(VAR_0);
}
