
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct regmap {int dummy; } ;
struct TYPE_8__ {int (* brightness_get ) (TYPE_1__*) ;int max_brightness; int brightness; int name; int flags; int (* brightness_set ) (TYPE_1__*,int) ;void* default_trigger; } ;
struct pm8058_led {scalar_t__ ledtype; TYPE_1__ cdev; int reg; struct regmap* map; } ;
struct TYPE_9__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int name; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 struct regmap* FUNC_1 (int ,int *) ;
 struct pm8058_led* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 void* FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 struct pm8058_led *VAR_10;
 struct device_node *VAR_11 = VAR_9->dev.of_node;
 int VAR_12;
 struct regmap *VAR_13;
 const char *VAR_14;
 enum led_brightness VAR_15;

 VAR_10 = FUNC_2(&VAR_9->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->ledtype = (u32)(unsigned long)FUNC_4(&VAR_9->dev);

 VAR_13 = FUNC_1(VAR_9->dev.parent, ((void*)0));
 if (!VAR_13) {
  FUNC_0(&VAR_9->dev, "Parent regmap unavailable.\n");
  return -VAR_2;
 }
 VAR_10->map = VAR_13;

 VAR_12 = FUNC_6(VAR_11, "reg", &VAR_10->reg);
 if (VAR_12) {
  FUNC_0(&VAR_9->dev, "no register offset specified\n");
  return -VAR_0;
 }


 VAR_10->cdev.name = FUNC_5(VAR_11, "label", ((void*)0)) ? : VAR_11->name;
 VAR_10->cdev.default_trigger =
  FUNC_5(VAR_11, "linux,default-trigger", ((void*)0));
 VAR_10->cdev.brightness_set = FUNC_8;
 VAR_10->cdev.brightness_get = FUNC_7;
 if (VAR_10->ledtype == VAR_6)
  VAR_15 = 31;
 else
  VAR_15 = 15;
 VAR_10->cdev.max_brightness = VAR_15;

 VAR_14 = FUNC_5(VAR_11, "default-state", ((void*)0));
 if (VAR_14) {
  if (!FUNC_9(VAR_14, "keep")) {
   VAR_10->cdev.brightness = FUNC_7(&VAR_10->cdev);
  } else if (!FUNC_9(VAR_14, "on")) {
   VAR_10->cdev.brightness = VAR_15;
   FUNC_8(&VAR_10->cdev, VAR_15);
  } else {
   VAR_10->cdev.brightness = VAR_5;
   FUNC_8(&VAR_10->cdev, VAR_5);
  }
 }

 if (VAR_10->ledtype == VAR_8 ||
     VAR_10->ledtype == VAR_7)
  VAR_10->cdev.flags = VAR_4;

 VAR_12 = FUNC_3(&VAR_9->dev, &VAR_10->cdev);
 if (VAR_12) {
  FUNC_0(&VAR_9->dev, "unable to register led \"%s\"\n",
   VAR_10->cdev.name);
  return VAR_12;
 }

 return 0;
}
