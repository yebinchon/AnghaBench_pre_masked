
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_pmu {TYPE_1__* func; } ;
struct TYPE_2__ {int (* pgob ) (struct nvkm_pmu*,int) ;} ;


 int FUNC_0 (struct nvkm_pmu*,int) ;

void
FUNC_1(struct nvkm_pmu *VAR_0, bool VAR_1)
{
 if (VAR_0 && VAR_0->func->pgob)
  VAR_0->func->pgob(VAR_0, VAR_1);
}
