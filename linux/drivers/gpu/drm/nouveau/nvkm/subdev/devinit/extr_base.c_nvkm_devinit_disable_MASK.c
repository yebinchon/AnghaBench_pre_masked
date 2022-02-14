
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_devinit {TYPE_1__* func; } ;
struct TYPE_2__ {int (* disable ) (struct nvkm_devinit*) ;} ;


 int FUNC_0 (struct nvkm_devinit*) ;

u64
FUNC_1(struct nvkm_devinit *VAR_0)
{
 if (VAR_0 && VAR_0->func->disable)
  return VAR_0->func->disable(VAR_0);
 return 0;
}
