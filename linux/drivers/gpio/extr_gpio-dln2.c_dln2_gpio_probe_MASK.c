
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {char* label; int base; int ngpio; int can_sleep; int set_config; int direction_output; int direction_input; int get_direction; int free; int request; int get; int set; int owner; struct device* parent; } ;
struct dln2_gpio {TYPE_1__ gpio; struct platform_device* pdev; int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,TYPE_1__*,struct dln2_gpio*) ;
 struct dln2_gpio* FUNC_3 (struct device*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct platform_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,struct dln2_gpio*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_17)
{
 struct dln2_gpio *VAR_18;
 struct device *VAR_19 = &VAR_17->dev;
 int VAR_20;
 int VAR_21;

 VAR_20 = FUNC_4(VAR_17);
 if (VAR_20 < 0) {
  FUNC_0(VAR_19, "failed to get pin count: %d\n", VAR_20);
  return VAR_20;
 }
 if (VAR_20 > VAR_1) {
  VAR_20 = VAR_1;
  FUNC_1(VAR_19, "clamping pins to %d\n", VAR_1);
 }

 VAR_18 = FUNC_3(&VAR_17->dev, sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;

 FUNC_7(&VAR_18->irq_lock);

 VAR_18->pdev = VAR_17;

 VAR_18->gpio.label = "dln2";
 VAR_18->gpio.parent = VAR_19;
 VAR_18->gpio.owner = VAR_5;
 VAR_18->gpio.base = -1;
 VAR_18->gpio.ngpio = VAR_20;
 VAR_18->gpio.can_sleep = 1;
 VAR_18->gpio.set = VAR_14;
 VAR_18->gpio.get = VAR_10;
 VAR_18->gpio.request = VAR_13;
 VAR_18->gpio.free = VAR_9;
 VAR_18->gpio.get_direction = VAR_11;
 VAR_18->gpio.direction_input = VAR_6;
 VAR_18->gpio.direction_output = VAR_7;
 VAR_18->gpio.set_config = VAR_15;

 FUNC_8(VAR_17, VAR_18);

 VAR_21 = FUNC_2(VAR_19, &VAR_18->gpio, VAR_18);
 if (VAR_21 < 0) {
  FUNC_0(VAR_19, "failed to add gpio chip: %d\n", VAR_21);
  return VAR_21;
 }

 VAR_21 = FUNC_6(&VAR_18->gpio, &VAR_12, 0,
       VAR_16, VAR_4);
 if (VAR_21 < 0) {
  FUNC_0(VAR_19, "failed to add irq chip: %d\n", VAR_21);
  return VAR_21;
 }

 VAR_21 = FUNC_5(VAR_17, VAR_0,
         VAR_8);
 if (VAR_21) {
  FUNC_0(VAR_19, "failed to register event cb: %d\n", VAR_21);
  return VAR_21;
 }

 return 0;
}
