
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int llv; int max_llv; int hlv; int max_hlv; int img_lum; } ;
struct TYPE_4__ {int device_type; int type; } ;
struct TYPE_5__ {TYPE_1__ features; } ;
struct wacom {int hdev; TYPE_3__ led; int generic_has_leds; TYPE_2__ wacom_wac; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct wacom*,int *) ;
 int FUNC_2 (struct wacom*,int) ;
 int FUNC_3 (struct wacom*,int,int,int) ;

int FUNC_4(struct wacom *VAR_5)
{
 int VAR_6;

 if (!(VAR_5->wacom_wac.features.device_type & VAR_0))
  return 0;


 switch (VAR_5->wacom_wac.features.type) {
 case 142:
  if (!VAR_5->generic_has_leds)
   return 0;
  VAR_5->led.llv = 100;
  VAR_5->led.max_llv = 100;

  VAR_6 = FUNC_3(VAR_5, 1, 4, 0);
  if (VAR_6) {
   FUNC_0(VAR_5->hdev,
    "cannot create leds err: %d\n", VAR_6);
   return VAR_6;
  }

  VAR_6 = FUNC_1(VAR_5,
            &VAR_2);
  break;

 case 139:
 case 141:
 case 138:
 case 140:
  VAR_5->led.llv = 10;
  VAR_5->led.hlv = 20;
  VAR_5->led.max_llv = 127;
  VAR_5->led.max_hlv = 127;
  VAR_5->led.img_lum = 10;

  VAR_6 = FUNC_3(VAR_5, 1, 4, 0);
  if (VAR_6) {
   FUNC_0(VAR_5->hdev,
    "cannot create leds err: %d\n", VAR_6);
   return VAR_6;
  }

  VAR_6 = FUNC_1(VAR_5,
            &VAR_3);
  break;

 case 128:
 case 129:
  VAR_5->led.llv = 0;
  VAR_5->led.hlv = 0;
  VAR_5->led.img_lum = 0;

  VAR_6 = FUNC_3(VAR_5, 2, 4, 0);
  if (VAR_6) {
   FUNC_0(VAR_5->hdev,
    "cannot create leds err: %d\n", VAR_6);
   return VAR_6;
  }

  VAR_6 = FUNC_1(VAR_5,
            &VAR_1);
  break;

 case 135:
 case 137:
 case 136:
 case 131:
 case 132:
 case 133:
  VAR_5->led.llv = 32;
  VAR_5->led.max_llv = 96;

  VAR_6 = FUNC_3(VAR_5, 1, 4, 0);
  if (VAR_6) {
   FUNC_0(VAR_5->hdev,
    "cannot create leds err: %d\n", VAR_6);
   return VAR_6;
  }

  VAR_6 = FUNC_1(VAR_5,
            &VAR_4);
  break;

 case 134:
  VAR_5->led.llv = 50;
  VAR_5->led.max_llv = 100;
  VAR_6 = FUNC_3(VAR_5, 1, 4, 0);
  if (VAR_6) {
   FUNC_0(VAR_5->hdev,
    "cannot create leds err: %d\n", VAR_6);
   return VAR_6;
  }
  return 0;

 case 130:
  VAR_5->led.llv = 255;
  VAR_5->led.max_llv = 255;
  VAR_6 = FUNC_2(VAR_5, 5);
  if (VAR_6) {
   FUNC_0(VAR_5->hdev,
    "cannot create leds err: %d\n", VAR_6);
   return VAR_6;
  }
  return 0;

 default:
  return 0;
 }

 if (VAR_6) {
  FUNC_0(VAR_5->hdev,
   "cannot create sysfs group err: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
