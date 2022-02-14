
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_ram {TYPE_1__* func; } ;
struct TYPE_2__ {int (* init ) (struct nvkm_ram*) ;} ;


 int FUNC_0 (struct nvkm_ram*) ;

int
FUNC_1(struct nvkm_ram *VAR_0)
{
 if (VAR_0->func->init)
  return VAR_0->func->init(VAR_0);
 return 0;
}
