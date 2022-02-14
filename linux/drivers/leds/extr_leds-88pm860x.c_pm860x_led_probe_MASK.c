
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct pm860x_led_pdata {int iset; } ;
struct TYPE_6__ {int (* brightness_set_blocking ) (TYPE_1__*,int ) ;int name; } ;
struct pm860x_led {int port; TYPE_1__ cdev; int lock; int name; scalar_t__ current_brightness; int iset; int i2c; struct pm860x_chip* chip; void* blink_mask; int reg_blink; int reg_control; } ;
struct pm860x_chip {scalar_t__ id; int dev; int companion; int client; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {int id; TYPE_3__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 struct pm860x_chip* FUNC_1 (int ) ;
 struct pm860x_led_pdata* FUNC_2 (TYPE_3__*) ;
 struct pm860x_led* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 struct resource* FUNC_7 (struct platform_device*,int ,char*) ;
 scalar_t__ FUNC_8 (struct platform_device*,struct pm860x_led*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct pm860x_chip *VAR_9 = FUNC_1(VAR_8->dev.parent);
 struct pm860x_led_pdata *VAR_10 = FUNC_2(&VAR_8->dev);
 struct pm860x_led *VAR_11;
 struct resource *VAR_12;
 int VAR_13 = 0;

 VAR_11 = FUNC_3(&VAR_8->dev, sizeof(struct pm860x_led), VAR_3);
 if (VAR_11 == ((void*)0))
  return -VAR_1;
 VAR_12 = FUNC_7(VAR_8, VAR_4, "control");
 if (!VAR_12) {
  FUNC_0(&VAR_8->dev, "No REG resource for control\n");
  return -VAR_2;
 }
 VAR_11->reg_control = VAR_12->start;
 VAR_12 = FUNC_7(VAR_8, VAR_4, "blink");
 if (!VAR_12) {
  FUNC_0(&VAR_8->dev, "No REG resource for blink\n");
  return -VAR_2;
 }
 VAR_11->reg_blink = VAR_12->start;
 FUNC_5(VAR_11->name, 0, VAR_7);
 switch (VAR_8->id) {
 case 0:
  VAR_11->blink_mask = VAR_5;
  FUNC_10(VAR_11->name, "led0-red");
  break;
 case 1:
  VAR_11->blink_mask = VAR_5;
  FUNC_10(VAR_11->name, "led0-green");
  break;
 case 2:
  VAR_11->blink_mask = VAR_5;
  FUNC_10(VAR_11->name, "led0-blue");
  break;
 case 3:
  VAR_11->blink_mask = VAR_6;
  FUNC_10(VAR_11->name, "led1-red");
  break;
 case 4:
  VAR_11->blink_mask = VAR_6;
  FUNC_10(VAR_11->name, "led1-green");
  break;
 case 5:
  VAR_11->blink_mask = VAR_6;
  FUNC_10(VAR_11->name, "led1-blue");
  break;
 }
 VAR_11->chip = VAR_9;
 VAR_11->i2c = (VAR_9->id == VAR_0) ? VAR_9->client : VAR_9->companion;
 VAR_11->port = VAR_8->id;
 if (FUNC_8(VAR_8, VAR_11))
  if (VAR_10)
   VAR_11->iset = VAR_10->iset;

 VAR_11->current_brightness = 0;
 VAR_11->cdev.name = VAR_11->name;
 VAR_11->cdev.brightness_set_blocking = FUNC_9;
 FUNC_6(&VAR_11->lock);

 VAR_13 = FUNC_4(VAR_9->dev, &VAR_11->cdev);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "Failed to register LED: %d\n", VAR_13);
  return VAR_13;
 }
 FUNC_9(&VAR_11->cdev, 0);
 return 0;
}
