
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm_clkgate_pack {int dummy; } ;
struct nvkm_therm {TYPE_1__* func; int clkgating_enabled; } ;
struct TYPE_2__ {int (* clkgate_init ) (struct nvkm_therm*,struct nvkm_therm_clkgate_pack const*) ;} ;


 int FUNC_0 (struct nvkm_therm*,struct nvkm_therm_clkgate_pack const*) ;

void
FUNC_1(struct nvkm_therm *VAR_0,
   const struct nvkm_therm_clkgate_pack *VAR_1)
{
 if (!VAR_0 || !VAR_0->func->clkgate_init || !VAR_0->clkgating_enabled)
  return;

 VAR_0->func->clkgate_init(VAR_0, VAR_1);
}
