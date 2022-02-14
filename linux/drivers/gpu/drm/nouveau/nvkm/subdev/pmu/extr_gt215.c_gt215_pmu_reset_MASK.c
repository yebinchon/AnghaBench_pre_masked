
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pmu {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_pmu *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 FUNC_0(VAR_1, 0x022210, 0x00000001, 0x00000000);
 FUNC_0(VAR_1, 0x022210, 0x00000001, 0x00000001);
 FUNC_1(VAR_1, 0x022210);
}
