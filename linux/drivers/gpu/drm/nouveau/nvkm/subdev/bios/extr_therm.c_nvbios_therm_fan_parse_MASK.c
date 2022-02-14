
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_bios {TYPE_2__ subdev; } ;
struct nvbios_therm_trip_point {int hysteresis; int temp; int fan_duty; } ;
struct nvbios_therm_fan {size_t nr_fan_trip; scalar_t__ fan_mode; int min_duty; int max_duty; int pwm_freq; int bump_period; int slow_down_period; int linear_min_temp; int linear_max_temp; struct nvbios_therm_trip_point* trip; } ;
typedef int s16 ;
struct TYPE_3__ {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,int ,scalar_t__*,scalar_t__*) ;

int
FUNC_3(struct nvkm_bios *VAR_4, struct nvbios_therm_fan *VAR_5)
{
 struct nvbios_therm_trip_point *VAR_6 = ((void*)0);
 u8 VAR_7, VAR_8, VAR_9;
 u32 VAR_10;

 uint8_t VAR_11[] = { 0, 0, 25, 0, 40, 0, 50, 0,
    75, 0, 85, 0, 100, 0, 100, 0 };

 VAR_9 = 0;
 VAR_5->nr_fan_trip = 0;
 VAR_5->fan_mode = VAR_1;
 while ((VAR_10 = FUNC_2(VAR_4, VAR_9++, &VAR_7, &VAR_8))) {
  s16 VAR_12 = FUNC_1(VAR_4, VAR_10 + 1);

  switch (FUNC_0(VAR_4, VAR_10 + 0)) {
  case 0x22:
   VAR_5->min_duty = VAR_12 & 0xff;
   VAR_5->max_duty = (VAR_12 & 0xff00) >> 8;
   break;
  case 0x24:
   VAR_5->nr_fan_trip++;
   if (VAR_5->fan_mode > VAR_2)
    VAR_5->fan_mode = VAR_2;
   VAR_6 = &VAR_5->trip[VAR_5->nr_fan_trip - 1];
   VAR_6->hysteresis = VAR_12 & 0xf;
   VAR_6->temp = (VAR_12 & 0xff0) >> 4;
   VAR_6->fan_duty = VAR_11[(VAR_12 & 0xf000) >> 12];
   break;
  case 0x25:
   VAR_6 = &VAR_5->trip[VAR_5->nr_fan_trip - 1];
   VAR_6->fan_duty = VAR_12;
   break;
  case 0x26:
   if (!VAR_5->pwm_freq)
    VAR_5->pwm_freq = VAR_12;
   break;
  case 0x3b:
   VAR_5->bump_period = VAR_12;
   break;
  case 0x3c:
   VAR_5->slow_down_period = VAR_12;
   break;
  case 0x46:
   if (VAR_5->fan_mode > VAR_0)
    VAR_5->fan_mode = VAR_0;
   VAR_5->linear_min_temp = FUNC_0(VAR_4, VAR_10 + 1);
   VAR_5->linear_max_temp = FUNC_0(VAR_4, VAR_10 + 2);
   break;
  }
 }


 if (VAR_4->subdev.device->card_type >= VAR_3 &&
  VAR_5->fan_mode == VAR_1) {
  VAR_5->fan_mode = VAR_0;
 }

 return 0;
}
