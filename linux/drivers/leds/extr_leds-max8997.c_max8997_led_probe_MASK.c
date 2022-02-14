
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {int parent; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct max8997_platform_data {TYPE_1__* led_pdata; } ;
struct TYPE_8__ {char* name; scalar_t__ max_brightness; scalar_t__ brightness; int groups; int flags; int brightness_set; } ;
struct max8997_led {int id; TYPE_3__ cdev; int mutex; struct max8997_dev* iodev; } ;
struct max8997_dev {int dev; } ;
typedef int name ;
struct TYPE_6__ {scalar_t__* mode; scalar_t__* brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct max8997_dev* FUNC_1 (int ) ;
 struct max8997_platform_data* FUNC_2 (int ) ;
 struct max8997_led* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct max8997_led*,scalar_t__) ;
 int FUNC_6 (struct max8997_led*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct max8997_dev *VAR_8 = FUNC_1(VAR_7->dev.parent);
 struct max8997_platform_data *VAR_9 = FUNC_2(VAR_8->dev);
 struct max8997_led *VAR_10;
 char VAR_11[20];
 int VAR_12 = 0;

 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_7->dev, "no platform data\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(&VAR_7->dev, sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_10->id = VAR_7->id;
 FUNC_8(VAR_11, sizeof(VAR_11), "max8997-led%d", VAR_7->id);

 VAR_10->cdev.name = VAR_11;
 VAR_10->cdev.brightness_set = VAR_6;
 VAR_10->cdev.flags |= VAR_3;
 VAR_10->cdev.brightness = 0;
 VAR_10->cdev.groups = VAR_5;
 VAR_10->iodev = VAR_8;


 if (VAR_9->led_pdata) {
  u8 VAR_13 = 0, VAR_14 = 0;

  VAR_13 = VAR_9->led_pdata->mode[VAR_10->id];
  VAR_14 = VAR_9->led_pdata->brightness[VAR_10->id];

  FUNC_6(VAR_10, VAR_13);

  if (VAR_14 > VAR_10->cdev.max_brightness)
   VAR_14 = VAR_10->cdev.max_brightness;
  FUNC_5(VAR_10, VAR_14);
  VAR_10->cdev.brightness = VAR_14;
 } else {
  FUNC_6(VAR_10, VAR_4);
  FUNC_5(VAR_10, 0);
 }

 FUNC_7(&VAR_10->mutex);

 VAR_12 = FUNC_4(&VAR_7->dev, &VAR_10->cdev);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
