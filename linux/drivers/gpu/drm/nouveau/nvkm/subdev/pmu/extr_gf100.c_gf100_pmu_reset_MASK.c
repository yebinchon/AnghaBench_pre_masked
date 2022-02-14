
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pmu {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int ) ;
 int FUNC_1 (struct nvkm_device*,int ) ;

void
FUNC_2(struct nvkm_pmu *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_0);
}
