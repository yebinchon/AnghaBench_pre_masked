
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int default_trigger; } ;
struct lm3692x_led {TYPE_1__* client; TYPE_2__ led_dev; int led_enable; int * regulator; int * enable_gpio; } ;
struct led_init_data {char* default_label; int devicename; struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_3__ {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 struct fwnode_handle* FUNC_3 (int *,struct fwnode_handle*) ;
 int * FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,TYPE_2__*,struct led_init_data*) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (struct fwnode_handle*,char*,int *) ;
 int FUNC_8 (struct fwnode_handle*,char*,int *) ;

__attribute__((used)) static int FUNC_9(struct lm3692x_led *VAR_2)
{
 struct fwnode_handle *VAR_3 = ((void*)0);
 struct led_init_data VAR_4 = {};
 int VAR_5;

 VAR_2->enable_gpio = FUNC_4(&VAR_2->client->dev,
         "enable", VAR_1);
 if (FUNC_0(VAR_2->enable_gpio)) {
  VAR_5 = FUNC_1(VAR_2->enable_gpio);
  FUNC_2(&VAR_2->client->dev, "Failed to get enable gpio: %d\n",
   VAR_5);
  return VAR_5;
 }

 VAR_2->regulator = FUNC_6(&VAR_2->client->dev, "vled");
 if (FUNC_0(VAR_2->regulator))
  VAR_2->regulator = ((void*)0);

 VAR_3 = FUNC_3(&VAR_2->client->dev, VAR_3);
 if (!VAR_3) {
  FUNC_2(&VAR_2->client->dev, "No LED Child node\n");
  return -VAR_0;
 }

 FUNC_7(VAR_3, "linux,default-trigger",
        &VAR_2->led_dev.default_trigger);

 VAR_5 = FUNC_8(VAR_3, "reg", &VAR_2->led_enable);
 if (VAR_5) {
  FUNC_2(&VAR_2->client->dev, "reg DT property missing\n");
  return VAR_5;
 }

 VAR_4.fwnode = VAR_3;
 VAR_4.devicename = VAR_2->client->name;
 VAR_4.default_label = ":";

 VAR_5 = FUNC_5(&VAR_2->client->dev, &VAR_2->led_dev,
          &VAR_4);
 if (VAR_5) {
  FUNC_2(&VAR_2->client->dev, "led register err: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
