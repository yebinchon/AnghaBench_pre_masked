
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_engine {TYPE_1__* func; } ;
struct TYPE_2__ {int (* chsw_load ) (struct nvkm_engine*) ;} ;


 int FUNC_0 (struct nvkm_engine*) ;

bool
FUNC_1(struct nvkm_engine *VAR_0)
{
 if (VAR_0->func->chsw_load)
  return VAR_0->func->chsw_load(VAR_0);
 return 0;
}
