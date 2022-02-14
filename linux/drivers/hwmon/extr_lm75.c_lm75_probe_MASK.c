
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm75_data {int kind; int orig_conf; int current_conf; TYPE_1__* params; int resolution; int sample_time; struct device* regmap; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;
typedef enum lm75_type { ____Placeholder_lm75_type } lm75_type ;
struct TYPE_2__ {int clr_mask; int set_mask; int default_resolution; int default_sample_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_5 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (struct device*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (struct device*,int ,struct lm75_data*) ;
 struct device* FUNC_6 (struct device*,int ,struct lm75_data*,int *,int *) ;
 struct lm75_data* FUNC_7 (struct device*,int,int ) ;
 struct device* FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct lm75_data*,int ,int ) ;
 scalar_t__ FUNC_12 (struct device*) ;

__attribute__((used)) static int
FUNC_13(struct i2c_client *VAR_10, const struct i2c_device_id *VAR_11)
{
 struct device *VAR_12 = &VAR_10->dev;
 struct device *VAR_13;
 struct lm75_data *VAR_14;
 int VAR_15, VAR_16;
 enum lm75_type VAR_17;

 if (VAR_10->dev.of_node)
  VAR_17 = (enum lm75_type)FUNC_12(&VAR_10->dev);
 else
  VAR_17 = VAR_11->driver_data;

 if (!FUNC_9(VAR_10->adapter,
   VAR_3 | VAR_4))
  return -VAR_0;

 VAR_14 = FUNC_7(VAR_12, sizeof(struct lm75_data), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->client = VAR_10;
 VAR_14->kind = VAR_17;

 VAR_14->regmap = FUNC_8(VAR_10, &VAR_8);
 if (FUNC_0(VAR_14->regmap))
  return FUNC_1(VAR_14->regmap);





 VAR_14->params = &VAR_6[VAR_14->kind];


 VAR_14->sample_time = VAR_14->params->default_sample_time;
 VAR_14->resolution = VAR_14->params->default_resolution;


 VAR_15 = FUNC_10(VAR_10, VAR_5);
 if (VAR_15 < 0) {
  FUNC_2(VAR_12, "Can't read config? %d\n", VAR_15);
  return VAR_15;
 }
 VAR_14->orig_conf = VAR_15;
 VAR_14->current_conf = VAR_15;

 VAR_16 = FUNC_11(VAR_14, VAR_14->params->set_mask,
    VAR_14->params->clr_mask);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_5(VAR_12, VAR_9, VAR_14);
 if (VAR_16)
  return VAR_16;

 VAR_13 = FUNC_6(VAR_12, VAR_10->name,
        VAR_14, &VAR_7,
        ((void*)0));
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 FUNC_3(VAR_12, "%s: sensor '%s'\n", FUNC_4(VAR_13), VAR_10->name);

 return 0;
}
