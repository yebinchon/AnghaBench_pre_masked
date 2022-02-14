
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int temp; } ;
struct TYPE_4__ {TYPE_1__ thrs_fan_boost; } ;
struct nvkm_therm {TYPE_2__ bios_sensor; } ;


 int FUNC_0 (struct nvkm_therm*,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_therm *VAR_0)
{
 u8 VAR_1 = VAR_0->bios_sensor.thrs_fan_boost.temp;
 return FUNC_0(VAR_0, 30, VAR_1);
}
