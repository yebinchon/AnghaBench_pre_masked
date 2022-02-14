
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct led_info {int flags; int default_trigger; int name; } ;
struct TYPE_5__ {int brightness; int brightness_set_blocking; int default_trigger; int name; } ;
struct da903x_led {int id; TYPE_1__ cdev; int master; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct led_info* FUNC_1 (TYPE_2__*) ;
 struct da903x_led* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_9)
{
 struct led_info *VAR_10 = FUNC_1(&VAR_9->dev);
 struct da903x_led *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_10 == ((void*)0))
  return 0;

 VAR_12 = VAR_9->id;

 if (!((VAR_12 >= VAR_0 && VAR_12 <= VAR_1) ||
       (VAR_12 >= VAR_2 && VAR_12 <= VAR_3))) {
  FUNC_0(&VAR_9->dev, "invalid LED ID (%d) specified\n", VAR_12);
  return -VAR_4;
 }

 VAR_11 = FUNC_2(&VAR_9->dev, sizeof(struct da903x_led), VAR_6);
 if (!VAR_11)
  return -VAR_5;

 VAR_11->cdev.name = VAR_10->name;
 VAR_11->cdev.default_trigger = VAR_10->default_trigger;
 VAR_11->cdev.brightness_set_blocking = VAR_8;
 VAR_11->cdev.brightness = VAR_7;

 VAR_11->id = VAR_12;
 VAR_11->flags = VAR_10->flags;
 VAR_11->master = VAR_9->dev.parent;

 VAR_13 = FUNC_3(VAR_11->master, &VAR_11->cdev);
 if (VAR_13) {
  FUNC_0(&VAR_9->dev, "failed to register LED %d\n", VAR_12);
  return VAR_13;
 }

 return 0;
}
