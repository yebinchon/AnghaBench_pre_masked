
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct nvkm_volt {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
struct nvbios_volt {int base; int pwm_range; } ;
struct TYPE_4__ {struct nvbios_volt bios; } ;


 TYPE_2__* FUNC_0 (struct nvkm_volt*) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_volt *VAR_0)
{
 struct nvbios_volt *VAR_1 = &FUNC_0(VAR_0)->bios;
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2, 0x20340);
 VAR_4 = FUNC_1(VAR_2, 0x20344);

 return VAR_1->base + VAR_1->pwm_range * VAR_4 / VAR_3;
}
