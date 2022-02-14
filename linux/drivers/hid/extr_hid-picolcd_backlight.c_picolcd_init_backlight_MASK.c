
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct picolcd_data {int lcd_brightness; struct backlight_device* backlight; TYPE_1__* hdev; } ;
struct hid_report {int maxfield; TYPE_2__** field; } ;
struct device {int dummy; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_6__ {int brightness; } ;
struct backlight_device {TYPE_3__ props; } ;
typedef int props ;
struct TYPE_5__ {int report_count; int report_size; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int ,struct device*,struct picolcd_data*,int *,struct backlight_properties*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct backlight_properties*,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (struct backlight_device*) ;

int FUNC_7(struct picolcd_data *VAR_4, struct hid_report *VAR_5)
{
 struct device *VAR_6 = &VAR_4->hdev->dev;
 struct backlight_device *VAR_7;
 struct backlight_properties VAR_8;
 if (!VAR_5)
  return -VAR_2;
 if (VAR_5->maxfield != 1 || VAR_5->field[0]->report_count != 1 ||
   VAR_5->field[0]->report_size != 8) {
  FUNC_3(VAR_6, "unsupported BRIGHTNESS report");
  return -VAR_1;
 }

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.type = VAR_0;
 VAR_8.max_brightness = 0xff;
 VAR_7 = FUNC_2(FUNC_4(VAR_6), VAR_6, VAR_4,
   &VAR_3, &VAR_8);
 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_6, "failed to register backlight\n");
  return FUNC_1(VAR_7);
 }
 VAR_7->props.brightness = 0xff;
 VAR_4->lcd_brightness = 0xff;
 VAR_4->backlight = VAR_7;
 FUNC_6(VAR_7);
 return 0;
}
