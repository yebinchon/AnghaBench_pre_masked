
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {TYPE_1__* func; int subdev; int clkgating_enabled; } ;
struct TYPE_2__ {int (* clkgate_fini ) (struct nvkm_therm*,int) ;} ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct nvkm_therm*,int) ;

void
FUNC_2(struct nvkm_therm *VAR_0, bool VAR_1)
{
 if (!VAR_0 || !VAR_0->func->clkgate_fini || !VAR_0->clkgating_enabled)
  return;

 FUNC_0(&VAR_0->subdev,
     "Preparing clockgating for %s\n",
     VAR_1 ? "suspend" : "fini");
 VAR_0->func->clkgate_fini(VAR_0, VAR_1);
}
