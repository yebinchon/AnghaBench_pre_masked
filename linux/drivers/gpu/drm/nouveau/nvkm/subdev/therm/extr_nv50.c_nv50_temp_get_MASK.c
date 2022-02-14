
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvbios_therm_sensor {int slope_div; int slope_mult; int offset_num; int offset_den; int offset_constant; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {struct nvbios_therm_sensor bios_sensor; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_therm *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 struct nvbios_therm_sensor *VAR_3 = &VAR_1->bios_sensor;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0x20014) & 0x3fff;


 if (!VAR_3->slope_div || !VAR_3->slope_mult ||
     !VAR_3->offset_num || !VAR_3->offset_den)
     return -VAR_0;

 VAR_4 = VAR_4 * VAR_3->slope_mult / VAR_3->slope_div;
 VAR_4 = VAR_4 + VAR_3->offset_num / VAR_3->offset_den;
 VAR_4 = VAR_4 + VAR_3->offset_constant - 8;


 if (VAR_4 < 0)
  VAR_4 = 0;

 return VAR_4;
}
