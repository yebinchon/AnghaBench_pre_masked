
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct picolcd_data {struct led_classdev** led; TYPE_1__* hdev; } ;
struct led_classdev {char* name; int max_brightness; int brightness_set; int brightness_get; scalar_t__ brightness; } ;
struct hid_report {int maxfield; TYPE_2__** field; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int report_count; int report_size; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct led_classdev*) ;
 struct led_classdev* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device*,struct led_classdev*) ;
 int FUNC_5 (struct led_classdev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,size_t,char*,char*,int) ;
 int FUNC_7 (char*) ;

int FUNC_8(struct picolcd_data *VAR_6, struct hid_report *VAR_7)
{
 struct device *VAR_8 = &VAR_6->hdev->dev;
 struct led_classdev *VAR_9;
 size_t VAR_10 = FUNC_7(FUNC_1(VAR_8)) + 8;
 char *VAR_11;
 int VAR_12, VAR_13 = 0;

 if (!VAR_7)
  return -VAR_1;
 if (VAR_7->maxfield != 1 || VAR_7->field[0]->report_count != 1 ||
   VAR_7->field[0]->report_size != 8) {
  FUNC_0(VAR_8, "unsupported LED_STATE report");
  return -VAR_0;
 }

 for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
  VAR_9 = FUNC_3(sizeof(struct led_classdev)+VAR_10, VAR_3);
  if (!VAR_9) {
   FUNC_0(VAR_8, "can't allocate memory for LED %d\n", VAR_12);
   VAR_13 = -VAR_2;
   goto err;
  }
  VAR_11 = (void *)(&VAR_9[1]);
  FUNC_6(VAR_11, VAR_10, "%s::GPO%d", FUNC_1(VAR_8), VAR_12);
  VAR_9->name = VAR_11;
  VAR_9->brightness = 0;
  VAR_9->max_brightness = 1;
  VAR_9->brightness_get = VAR_4;
  VAR_9->brightness_set = VAR_5;

  VAR_6->led[VAR_12] = VAR_9;
  VAR_13 = FUNC_4(VAR_8, VAR_6->led[VAR_12]);
  if (VAR_13) {
   VAR_6->led[VAR_12] = ((void*)0);
   FUNC_2(VAR_9);
   FUNC_0(VAR_8, "can't register LED %d\n", VAR_12);
   goto err;
  }
 }
 return 0;
err:
 for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
  if (VAR_6->led[VAR_12]) {
   VAR_9 = VAR_6->led[VAR_12];
   VAR_6->led[VAR_12] = ((void*)0);
   FUNC_5(VAR_9);
   FUNC_2(VAR_9);
  }
 return VAR_13;
}
