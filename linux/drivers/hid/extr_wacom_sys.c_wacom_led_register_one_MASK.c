
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* name; char* default_trigger; int brightness_set; int brightness_set_blocking; int brightness_get; int flags; int max_brightness; } ;
struct TYPE_5__ {char* name; } ;
struct wacom_led {unsigned int group; unsigned int id; TYPE_3__ cdev; int hlv; int llv; struct wacom* wacom; TYPE_2__ trigger; } ;
struct TYPE_4__ {int hlv; int llv; } ;
struct wacom {int hdev; TYPE_1__ led; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*) ;
 char* FUNC_1 (struct device*,int ,char*,int ,unsigned int,unsigned int) ;
 int FUNC_2 (struct device*,TYPE_3__*) ;
 int FUNC_3 (struct device*,TYPE_2__*) ;
 int FUNC_4 (int ,char*,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct device *VAR_7, struct wacom *VAR_8,
      struct wacom_led *VAR_9, unsigned int VAR_10,
      unsigned int VAR_11, bool VAR_12)
{
 int VAR_13;
 char *VAR_14;

 VAR_14 = FUNC_1(VAR_7, VAR_1,
         "%s::wacom-%d.%d",
         FUNC_0(VAR_7),
         VAR_10,
         VAR_11);
 if (!VAR_14)
  return -VAR_0;

 if (!VAR_12) {
  VAR_9->trigger.name = VAR_14;
  VAR_13 = FUNC_3(VAR_7, &VAR_9->trigger);
  if (VAR_13) {
   FUNC_4(VAR_8->hdev,
    "failed to register LED trigger %s: %d\n",
    VAR_9->cdev.name, VAR_13);
   return VAR_13;
  }
 }

 VAR_9->group = VAR_10;
 VAR_9->id = VAR_11;
 VAR_9->wacom = VAR_8;
 VAR_9->llv = VAR_8->led.llv;
 VAR_9->hlv = VAR_8->led.hlv;
 VAR_9->cdev.name = VAR_14;
 VAR_9->cdev.max_brightness = VAR_2;
 VAR_9->cdev.flags = VAR_3;
 VAR_9->cdev.brightness_get = VAR_4;
 if (!VAR_12) {
  VAR_9->cdev.brightness_set_blocking = VAR_5;
  VAR_9->cdev.default_trigger = VAR_9->cdev.name;
 } else {
  VAR_9->cdev.brightness_set = VAR_6;
 }

 VAR_13 = FUNC_2(VAR_7, &VAR_9->cdev);
 if (VAR_13) {
  FUNC_4(VAR_8->hdev,
   "failed to register LED %s: %d\n",
   VAR_9->cdev.name, VAR_13);
  VAR_9->cdev.name = ((void*)0);
  return VAR_13;
 }

 return 0;
}
