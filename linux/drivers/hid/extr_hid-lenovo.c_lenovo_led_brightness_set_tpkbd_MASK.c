
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct led_classdev {TYPE_1__* dev; } ;
struct lenovo_drvdata_tpkbd {int led_state; struct led_classdev led_micmute; } ;
struct hid_report {TYPE_3__** field; } ;
struct hid_device {TYPE_2__* report_enum; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_6__ {int* value; } ;
struct TYPE_5__ {struct hid_report** report_id_hash; } ;
struct TYPE_4__ {struct device* parent; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lenovo_drvdata_tpkbd* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,struct hid_report*,int ) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_3,
   enum led_brightness VAR_4)
{
 struct device *VAR_5 = VAR_3->dev->parent;
 struct hid_device *VAR_6 = FUNC_2(VAR_5);
 struct lenovo_drvdata_tpkbd *VAR_7 = FUNC_0(VAR_6);
 struct hid_report *VAR_8;
 int VAR_9 = 0;

 if (VAR_3 == &VAR_7->led_micmute)
  VAR_9 = 1;

 if (VAR_4 == VAR_2)
  VAR_7->led_state &= ~(1 << VAR_9);
 else
  VAR_7->led_state |= 1 << VAR_9;

 VAR_8 = VAR_6->report_enum[VAR_0].report_id_hash[3];
 VAR_8->field[0]->value[0] = (VAR_7->led_state >> 0) & 1;
 VAR_8->field[0]->value[1] = (VAR_7->led_state >> 1) & 1;
 FUNC_1(VAR_6, VAR_8, VAR_1);
}
