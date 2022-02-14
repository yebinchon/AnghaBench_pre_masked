
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hid_device_id {int dummy; } ;
struct hid_device {int dev; } ;
struct gt683r_led {TYPE_1__* led_devs; struct hid_device* hdev; int mode; int work; int lock; } ;
struct TYPE_3__ {char* name; int max_brightness; int groups; int brightness_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *) ;
 void* FUNC_2 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char** VAR_8 ;
 int FUNC_3 (struct hid_device*,char*) ;
 int FUNC_4 (struct hid_device*,int ) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*) ;
 int FUNC_7 (struct hid_device*,struct gt683r_led*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(struct hid_device *VAR_9,
   const struct hid_device_id *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 char *VAR_14;
 struct gt683r_led *VAR_15;

 VAR_15 = FUNC_2(&VAR_9->dev, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 FUNC_10(&VAR_15->lock);
 FUNC_0(&VAR_15->work, VAR_7);

 VAR_15->mode = VAR_3;
 VAR_15->hdev = VAR_9;
 FUNC_7(VAR_9, VAR_15);

 VAR_12 = FUNC_6(VAR_9);
 if (VAR_12) {
  FUNC_3(VAR_9, "hid parsing failed\n");
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_9, VAR_4);
 if (VAR_12) {
  FUNC_3(VAR_9, "hw start failed\n");
  return VAR_12;
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_13 = FUNC_12(FUNC_1(&VAR_9->dev)) +
    FUNC_12(VAR_8[VAR_11]) + 3;

  VAR_14 = FUNC_2(&VAR_9->dev, VAR_13, VAR_1);
  if (!VAR_14) {
   VAR_12 = -VAR_0;
   goto fail;
  }

  FUNC_11(VAR_14, VAR_13, "%s::%s",
    FUNC_1(&VAR_9->dev), VAR_8[VAR_11]);
  VAR_15->led_devs[VAR_11].name = VAR_14;
  VAR_15->led_devs[VAR_11].max_brightness = 1;
  VAR_15->led_devs[VAR_11].brightness_set = VAR_5;
  VAR_15->led_devs[VAR_11].groups = VAR_6;

  VAR_12 = FUNC_8(&VAR_9->dev, &VAR_15->led_devs[VAR_11]);
  if (VAR_12) {
   FUNC_3(VAR_9, "could not register led device\n");
   goto fail;
  }
 }

 return 0;

fail:
 for (VAR_11 = VAR_11 - 1; VAR_11 >= 0; VAR_11--)
  FUNC_9(&VAR_15->led_devs[VAR_11]);
 FUNC_5(VAR_9);
 return VAR_12;
}
