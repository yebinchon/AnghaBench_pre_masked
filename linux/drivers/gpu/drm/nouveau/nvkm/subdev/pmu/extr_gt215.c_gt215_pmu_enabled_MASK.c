
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct nvkm_pmu {TYPE_1__ subdev; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_pmu *VAR_0)
{
 return FUNC_0(VAR_0->subdev.device, 0x022210) & 0x00000001;
}
