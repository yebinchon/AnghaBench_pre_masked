
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {char* label; TYPE_2__* parent; int ngpio; } ;
struct ts4900_gpio_priv {uintptr_t input_bit; TYPE_1__ gpio_chip; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,struct ts4900_gpio_priv*) ;
 struct ts4900_gpio_priv* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct ts4900_gpio_priv*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,char*,int *) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 struct ts4900_gpio_priv *VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (FUNC_8(VAR_5->dev.of_node, "ngpios", &VAR_8))
  VAR_8 = VAR_0;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->gpio_chip = VAR_3;
 VAR_7->gpio_chip.label = "ts4900-gpio";
 VAR_7->gpio_chip.ngpio = VAR_8;
 VAR_7->gpio_chip.parent = &VAR_5->dev;
 VAR_7->input_bit = (uintptr_t)FUNC_7(&VAR_5->dev);

 VAR_7->regmap = FUNC_5(VAR_5, &VAR_4);
 if (FUNC_0(VAR_7->regmap)) {
  VAR_9 = FUNC_1(VAR_7->regmap);
  FUNC_2(&VAR_5->dev, "Failed to allocate register map: %d\n",
   VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(&VAR_5->dev, &VAR_7->gpio_chip, VAR_7);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_5->dev, "Unable to register gpiochip\n");
  return VAR_9;
 }

 FUNC_6(VAR_5, VAR_7);

 return 0;
}
