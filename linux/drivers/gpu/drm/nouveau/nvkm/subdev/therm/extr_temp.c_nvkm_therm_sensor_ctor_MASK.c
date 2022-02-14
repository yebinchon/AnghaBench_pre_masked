
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int therm_poll_alarm; } ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_therm {int bios_sensor; TYPE_2__ sensor; struct nvkm_subdev subdev; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_3__ {struct nvkm_bios* bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nvkm_bios*,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nvkm_subdev*,char*) ;
 int FUNC_3 (struct nvkm_therm*) ;
 int FUNC_4 (struct nvkm_therm*) ;

int
FUNC_5(struct nvkm_therm *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_2->subdev;
 struct nvkm_bios *VAR_4 = VAR_3->device->bios;

 FUNC_1(&VAR_2->sensor.therm_poll_alarm, VAR_1);

 FUNC_4(VAR_2);
 if (FUNC_0(VAR_4, VAR_0,
          &VAR_2->bios_sensor))
  FUNC_2(VAR_3, "nvbios_therm_sensor_parse failed\n");
 FUNC_3(VAR_2);

 return 0;
}
