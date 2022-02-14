
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct led_init_data {scalar_t__ fwnode; int devicename; scalar_t__ devname_mandatory; } ;
struct led_classdev {char* name; int flags; int brightness_hw_changed; int led_access; scalar_t__ max_brightness; int node; int trigger_lock; scalar_t__ work_flags; TYPE_1__* dev; int groups; } ;
struct device {int dummy; } ;
typedef int final_name ;
struct TYPE_6__ {scalar_t__ fwnode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct device*,char*,char*,int ) ;
 TYPE_1__* FUNC_6 (int ,struct device*,int ,struct led_classdev*,int ,char*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct led_classdev*) ;
 int FUNC_11 (char const*,char*,int) ;
 int FUNC_12 (struct device*,struct led_init_data*,char*) ;
 int FUNC_13 (struct led_classdev*) ;
 int FUNC_14 (struct led_classdev*) ;
 int FUNC_15 (struct led_classdev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct device *VAR_7,
         struct led_classdev *VAR_8,
         struct led_init_data *VAR_9)
{
 char VAR_10[VAR_3];
 char VAR_11[VAR_3];
 const char *VAR_12 = VAR_10;
 int VAR_13;

 if (VAR_9) {
  if (VAR_9->devname_mandatory && !VAR_9->devicename) {
   FUNC_3(VAR_7, "Mandatory device name is missing");
   return -VAR_0;
  }
  VAR_13 = FUNC_12(VAR_7, VAR_9, VAR_10);
  if (VAR_13 < 0)
   return VAR_13;
 } else {
  VAR_12 = VAR_8->name;
 }

 VAR_13 = FUNC_11(VAR_12, VAR_11, sizeof(VAR_11));
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_17(&VAR_8->led_access);
 FUNC_18(&VAR_8->led_access);
 VAR_8->dev = FUNC_6(VAR_4, VAR_7, 0,
    VAR_8, VAR_8->groups, "%s", VAR_11);
 if (FUNC_0(VAR_8->dev)) {
  FUNC_19(&VAR_8->led_access);
  return FUNC_1(VAR_8->dev);
 }
 if (VAR_9 && VAR_9->fwnode)
  VAR_8->dev->fwnode = VAR_9->fwnode;

 if (VAR_13)
  FUNC_5(VAR_7, "Led %s renamed to %s due to name collision",
    VAR_8->name, FUNC_4(VAR_8->dev));

 if (VAR_8->flags & VAR_1) {
  VAR_13 = FUNC_10(VAR_8);
  if (VAR_13) {
   FUNC_7(VAR_8->dev);
   VAR_8->dev = ((void*)0);
   FUNC_19(&VAR_8->led_access);
   return VAR_13;
  }
 }

 VAR_8->work_flags = 0;







 FUNC_8(&VAR_6);
 FUNC_16(&VAR_8->node, &VAR_5);
 FUNC_20(&VAR_6);

 if (!VAR_8->max_brightness)
  VAR_8->max_brightness = VAR_2;

 FUNC_15(VAR_8);

 FUNC_13(VAR_8);





 FUNC_19(&VAR_8->led_access);

 FUNC_2(VAR_7, "Registered led device: %s\n",
   VAR_8->name);

 return 0;
}
