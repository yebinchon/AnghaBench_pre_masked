
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_usage {int hid; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
struct corsair_drvdata {TYPE_2__* k90; } ;
typedef int __s32 ;
struct TYPE_3__ {int brightness; } ;
struct TYPE_4__ {TYPE_1__ record_led; } ;




 int VAR_0 ;
 struct corsair_drvdata* FUNC_0 (struct hid_device*) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_1, struct hid_field *VAR_2,
    struct hid_usage *VAR_3, __s32 VAR_4)
{
 struct corsair_drvdata *VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5->k90)
  return 0;

 switch (VAR_3->hid & VAR_0) {
 case 129:
  VAR_5->k90->record_led.brightness = 1;
  break;
 case 128:
  VAR_5->k90->record_led.brightness = 0;
  break;
 default:
  break;
 }

 return 0;
}
