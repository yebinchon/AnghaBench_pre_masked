
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {int subdev; int clkgating_enabled; TYPE_1__* func; } ;
struct TYPE_2__ {int clkgate_enable; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_therm *VAR_0)
{
 if (!VAR_0->func->clkgate_enable || !VAR_0->clkgating_enabled)
  return;

 FUNC_0(&VAR_0->subdev, "Clockgating enabled\n");
}
