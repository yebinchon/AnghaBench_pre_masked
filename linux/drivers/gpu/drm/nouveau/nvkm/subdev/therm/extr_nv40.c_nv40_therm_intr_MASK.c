
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_therm {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct nvkm_therm *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 uint32_t VAR_3 = FUNC_1(VAR_2, 0x1100);




 FUNC_2(VAR_2, 0x1100, 0x70000);

 FUNC_0(VAR_1, "THERM received an IRQ: stat = %x\n", VAR_3);
}
