
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
struct nvbios_volt {int pwm_freq; int base; int pwm_range; } ;
struct TYPE_4__ {struct nvbios_volt bios; } ;


 int FUNC_0 (int,int ) ;
 TYPE_2__* FUNC_1 (struct nvkm_volt*) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_volt *VAR_0, u32 VAR_1)
{
 struct nvbios_volt *VAR_2 = &FUNC_1(VAR_0)->bios;
 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 u32 VAR_4, VAR_5;


 VAR_4 = 27648000 / VAR_2->pwm_freq;
 VAR_5 = FUNC_0((VAR_1 - VAR_2->base) * VAR_4, VAR_2->pwm_range);

 FUNC_2(VAR_3, 0x20340, VAR_4);
 FUNC_2(VAR_3, 0x20344, 0x80000000 | VAR_5);

 return 0;
}
