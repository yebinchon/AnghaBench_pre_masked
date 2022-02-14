
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpi_firmware {int dummy; } ;
struct TYPE_2__ {int base; int can_sleep; int set; int get; int get_direction; int direction_output; int direction_input; int ngpio; struct device_node* of_node; int owner; int label; struct device* parent; } ;
struct rpi_exp_gpio {TYPE_1__ gc; struct rpi_firmware* fw; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,TYPE_1__*,struct rpi_exp_gpio*) ;
 struct rpi_exp_gpio* FUNC_2 (struct device*,int,int ) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct rpi_firmware* FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 struct device_node *VAR_15;
 struct rpi_firmware *VAR_16;
 struct rpi_exp_gpio *VAR_17;

 VAR_15 = FUNC_3(VAR_14);
 if (!VAR_15) {
  FUNC_0(VAR_13, "Missing firmware node\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_5(VAR_15);
 FUNC_4(VAR_15);
 if (!VAR_16)
  return -VAR_2;

 VAR_17 = FUNC_2(VAR_13, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->fw = VAR_16;
 VAR_17->gc.parent = VAR_13;
 VAR_17->gc.label = VAR_4;
 VAR_17->gc.owner = VAR_6;
 VAR_17->gc.of_node = VAR_14;
 VAR_17->gc.base = -1;
 VAR_17->gc.ngpio = VAR_5;

 VAR_17->gc.direction_input = VAR_7;
 VAR_17->gc.direction_output = VAR_8;
 VAR_17->gc.get_direction = VAR_10;
 VAR_17->gc.get = VAR_9;
 VAR_17->gc.set = VAR_11;
 VAR_17->gc.can_sleep = 1;

 return FUNC_1(VAR_13, &VAR_17->gc, VAR_17);
}
