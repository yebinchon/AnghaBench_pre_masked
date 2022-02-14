
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; struct device* dev; void* brightness_set; void* brightness_get; } ;
struct lenovo_drvdata_tpkbd {int sensitivity; int press_speed; TYPE_1__ led_mute; TYPE_1__ led_micmute; } ;
struct device {int kobj; } ;
struct hid_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct device*) ;
 void* FUNC_1 (struct device*,size_t,int ) ;
 int FUNC_2 (struct hid_device*,char*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct lenovo_drvdata_tpkbd*) ;
 int FUNC_5 (struct hid_device*,int ,int,int,int) ;
 int FUNC_6 (struct hid_device*,char*,int) ;
 int FUNC_7 (struct device*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_9 (struct hid_device*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_10 (char*,size_t,char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(struct hid_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct lenovo_drvdata_tpkbd *VAR_10;
 size_t VAR_11 = FUNC_11(FUNC_0(VAR_9)) + 16;
 char *VAR_12, *VAR_13;
 int VAR_14;
 int VAR_15;





 if (!FUNC_3(VAR_8))
  return 0;

 FUNC_4(VAR_8, ((void*)0));


 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  if (!FUNC_5(VAR_8, VAR_3, 4, VAR_14, 1))
   return -VAR_0;
 }
 if (!FUNC_5(VAR_8, VAR_4, 3, 0, 2))
  return -VAR_0;

 VAR_15 = FUNC_12(&VAR_8->dev.kobj, &VAR_5);
 if (VAR_15)
  FUNC_6(VAR_8, "Could not create sysfs group: %d\n", VAR_15);

 VAR_10 = FUNC_1(&VAR_8->dev,
        sizeof(struct lenovo_drvdata_tpkbd),
        VAR_2);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_8, "Could not allocate memory for driver data\n");
  VAR_15 = -VAR_1;
  goto err;
 }


 VAR_10->sensitivity = 0xa0;
 VAR_10->press_speed = 0x38;

 VAR_12 = FUNC_1(&VAR_8->dev, VAR_11, VAR_2);
 VAR_13 = FUNC_1(&VAR_8->dev, VAR_11, VAR_2);
 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
  FUNC_2(VAR_8, "Could not allocate memory for led data\n");
  VAR_15 = -VAR_1;
  goto err;
 }
 FUNC_10(VAR_12, VAR_11, "%s:amber:mute", FUNC_0(VAR_9));
 FUNC_10(VAR_13, VAR_11, "%s:amber:micmute", FUNC_0(VAR_9));

 FUNC_4(VAR_8, VAR_10);

 VAR_10->led_mute.name = VAR_12;
 VAR_10->led_mute.brightness_get = VAR_6;
 VAR_10->led_mute.brightness_set = VAR_7;
 VAR_10->led_mute.dev = VAR_9;
 VAR_15 = FUNC_7(VAR_9, &VAR_10->led_mute);
 if (VAR_15 < 0)
  goto err;

 VAR_10->led_micmute.name = VAR_13;
 VAR_10->led_micmute.brightness_get =
  VAR_6;
 VAR_10->led_micmute.brightness_set =
  VAR_7;
 VAR_10->led_micmute.dev = VAR_9;
 VAR_15 = FUNC_7(VAR_9, &VAR_10->led_micmute);
 if (VAR_15 < 0) {
  FUNC_8(&VAR_10->led_mute);
  goto err;
 }

 FUNC_9(VAR_8);

 return 0;
err:
 FUNC_13(&VAR_8->dev.kobj, &VAR_5);
 return VAR_15;
}
