
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ina2xx_platform_data {int shunt_uohms; } ;
struct ina2xx_data {int rshunt; int ** groups; struct device* regmap; TYPE_2__* config; int config_lock; } ;
struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int name; struct device dev; } ;
typedef enum ina2xx_ids { ____Placeholder_ina2xx_ids } ina2xx_ids ;
struct TYPE_5__ {int registers; } ;
struct TYPE_4__ {int max_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct ina2xx_platform_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,int ,int ) ;
 struct device* FUNC_5 (struct device*,int ,struct ina2xx_data*,int **) ;
 struct ina2xx_data* FUNC_6 (struct device*,int,int ) ;
 struct device* FUNC_7 (struct i2c_client*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct ina2xx_data*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_9 (struct ina2xx_data*,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct device*) ;
 scalar_t__ FUNC_12 (scalar_t__,char*,int *) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_9,
   const struct i2c_device_id *VAR_10)
{
 struct device *VAR_11 = &VAR_9->dev;
 struct ina2xx_data *VAR_12;
 struct device *VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16 = 0;
 enum ina2xx_ids VAR_17;

 if (VAR_9->dev.of_node)
  VAR_17 = (enum ina2xx_ids)FUNC_11(&VAR_9->dev);
 else
  VAR_17 = VAR_10->driver_data;

 VAR_12 = FUNC_6(VAR_11, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;


 VAR_12->config = &VAR_6[VAR_17];
 FUNC_10(&VAR_12->config_lock);

 if (FUNC_12(VAR_11->of_node, "shunt-resistor", &VAR_14) < 0) {
  struct ina2xx_platform_data *VAR_18 = FUNC_3(VAR_11);

  if (VAR_18)
   VAR_14 = VAR_18->shunt_uohms;
  else
   VAR_14 = VAR_3;
 }

 FUNC_9(VAR_12, VAR_14);

 VAR_8.max_register = VAR_12->config->registers;

 VAR_12->regmap = FUNC_7(VAR_9, &VAR_8);
 if (FUNC_0(VAR_12->regmap)) {
  FUNC_2(VAR_11, "failed to allocate register map\n");
  return FUNC_1(VAR_12->regmap);
 }

 VAR_15 = FUNC_8(VAR_12);
 if (VAR_15 < 0) {
  FUNC_2(VAR_11, "error configuring the device: %d\n", VAR_15);
  return -VAR_0;
 }

 VAR_12->groups[VAR_16++] = &VAR_7;
 if (VAR_17 == VAR_4)
  VAR_12->groups[VAR_16++] = &VAR_5;

 VAR_13 = FUNC_5(VAR_11, VAR_9->name,
          VAR_12, VAR_12->groups);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 FUNC_4(VAR_11, "power monitor %s (Rshunt = %li uOhm)\n",
   VAR_9->name, VAR_12->rshunt);

 return 0;
}
