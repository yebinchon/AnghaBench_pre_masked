
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int therm_poll_alarm; } ;
struct TYPE_8__ {int hysteresis; int temp; } ;
struct TYPE_7__ {int hysteresis; int temp; } ;
struct TYPE_6__ {int hysteresis; int temp; } ;
struct TYPE_10__ {int hysteresis; int temp; } ;
struct nvbios_therm_sensor {TYPE_3__ thrs_shutdown; TYPE_2__ thrs_critical; TYPE_1__ thrs_down_clock; TYPE_5__ thrs_fan_boost; } ;
struct nvkm_therm {TYPE_4__ sensor; int subdev; struct nvbios_therm_sensor bios_sensor; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_2(struct nvkm_therm *VAR_0)
{
 struct nvbios_therm_sensor *VAR_1 = &VAR_0->bios_sensor;

 FUNC_1(&VAR_0->subdev,
     "programmed thresholds [ %d(%d), %d(%d), %d(%d), %d(%d) ]\n",
     VAR_1->thrs_fan_boost.temp,
     VAR_1->thrs_fan_boost.hysteresis,
     VAR_1->thrs_down_clock.temp,
     VAR_1->thrs_down_clock.hysteresis,
     VAR_1->thrs_critical.temp,
     VAR_1->thrs_critical.hysteresis,
     VAR_1->thrs_shutdown.temp,
     VAR_1->thrs_shutdown.hysteresis);

 FUNC_0(&VAR_0->sensor.therm_poll_alarm);
}
