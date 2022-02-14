
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_pmu {TYPE_2__* func; } ;
struct nvkm_device {int chipset; struct nvkm_pmu* pmu; } ;
struct TYPE_3__ {scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__ code; } ;



bool
FUNC_0(struct nvkm_device *VAR_0)
{
 struct nvkm_pmu *VAR_1 = VAR_0->pmu;




 if (VAR_1 && VAR_1->func->code.size)
  return 0;





 return (VAR_0->chipset >= 0xc0);
}
