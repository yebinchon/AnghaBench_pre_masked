
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int of_node; int * funcs; } ;
struct TYPE_9__ {char* name; int transfer; TYPE_1__* dev; } ;
struct ti_sn_bridge {TYPE_3__ bridge; TYPE_2__ aux; TYPE_1__* dev; int * refclk; int * enable_gpio; int panel; int * regmap; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,struct ti_sn_bridge*) ;
 int * FUNC_5 (TYPE_1__*,char*) ;
 int * FUNC_6 (TYPE_1__*,char*,int ) ;
 struct ti_sn_bridge* FUNC_7 (TYPE_1__*,int,int ) ;
 int * FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int,int ,int *,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct i2c_client*,struct ti_sn_bridge*) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (struct ti_sn_bridge*) ;
 int FUNC_16 (struct ti_sn_bridge*) ;
 int VAR_8 ;
 int FUNC_17 (struct ti_sn_bridge*) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_9,
         const struct i2c_device_id *VAR_10)
{
 struct ti_sn_bridge *VAR_11;
 int VAR_12;

 if (!FUNC_12(VAR_9->adapter, VAR_5)) {
  FUNC_1("device doesn't support I2C\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_7(&VAR_9->dev, sizeof(struct ti_sn_bridge),
        VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->regmap = FUNC_8(VAR_9,
          &VAR_8);
 if (FUNC_2(VAR_11->regmap)) {
  FUNC_1("regmap i2c init failed\n");
  return FUNC_3(VAR_11->regmap);
 }

 VAR_11->dev = &VAR_9->dev;

 VAR_12 = FUNC_11(VAR_11->dev->of_node, 1, 0,
       &VAR_11->panel, ((void*)0));
 if (VAR_12) {
  FUNC_1("could not find any panel node\n");
  return VAR_12;
 }

 FUNC_4(&VAR_9->dev, VAR_11);

 VAR_11->enable_gpio = FUNC_6(VAR_11->dev, "enable",
         VAR_4);
 if (FUNC_2(VAR_11->enable_gpio)) {
  FUNC_1("failed to get enable gpio from DT\n");
  VAR_12 = FUNC_3(VAR_11->enable_gpio);
  return VAR_12;
 }

 VAR_12 = FUNC_16(VAR_11);
 if (VAR_12) {
  FUNC_1("failed to parse regulators\n");
  return VAR_12;
 }

 VAR_11->refclk = FUNC_5(VAR_11->dev, "refclk");
 if (FUNC_2(VAR_11->refclk)) {
  VAR_12 = FUNC_3(VAR_11->refclk);
  if (VAR_12 == -VAR_2)
   return VAR_12;
  FUNC_0("refclk not found\n");
  VAR_11->refclk = ((void*)0);
 }

 VAR_12 = FUNC_15(VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_14(VAR_11->dev);

 FUNC_13(VAR_9, VAR_11);

 VAR_11->aux.name = "ti-sn65dsi86-aux";
 VAR_11->aux.dev = VAR_11->dev;
 VAR_11->aux.transfer = VAR_6;
 FUNC_10(&VAR_11->aux);

 VAR_11->bridge.funcs = &VAR_7;
 VAR_11->bridge.of_node = VAR_9->dev.of_node;

 FUNC_9(&VAR_11->bridge);

 FUNC_17(VAR_11);

 return 0;
}
