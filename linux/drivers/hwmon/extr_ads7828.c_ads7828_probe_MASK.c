
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int name; struct device dev; } ;
struct ads7828_platform_data {int diff_input; int ext_vref; unsigned int vref_mv; } ;
struct ads7828_data {int cmd_byte; struct regulator* regmap; void* lsb_resol; } ;
typedef enum ads7828_chips { ____Placeholder_ads7828_chips } ads7828_chips ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 void* FUNC_0 (unsigned int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 int FUNC_3 (struct device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_4 (unsigned int,unsigned int,unsigned int) ;
 struct ads7828_platform_data* FUNC_5 (struct device*) ;
 struct device* FUNC_6 (struct device*,int ,struct ads7828_data*,int ) ;
 struct ads7828_data* FUNC_7 (struct device*,int,int ) ;
 void* FUNC_8 (struct i2c_client*,int *) ;
 struct regulator* FUNC_9 (struct device*,char*) ;
 scalar_t__ FUNC_10 (struct device*) ;
 int FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (struct regulator*,int ,unsigned int*) ;
 unsigned int FUNC_13 (struct regulator*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_13,
    const struct i2c_device_id *VAR_14)
{
 struct device *VAR_15 = &VAR_13->dev;
 struct ads7828_platform_data *VAR_16 = FUNC_5(VAR_15);
 struct ads7828_data *VAR_17;
 struct device *VAR_18;
 unsigned int VAR_19 = VAR_5;
 unsigned int VAR_20;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 unsigned int VAR_23;
 enum ads7828_chips VAR_24;
 struct regulator *VAR_25;

 VAR_17 = FUNC_7(VAR_15, sizeof(struct ads7828_data), VAR_8);
 if (!VAR_17)
  return -VAR_7;

 if (VAR_16) {
  VAR_21 = VAR_16->diff_input;
  VAR_22 = VAR_16->ext_vref;
  if (VAR_22 && VAR_16->vref_mv)
   VAR_19 = VAR_16->vref_mv;
 } else if (VAR_15->of_node) {
  VAR_21 = FUNC_11(VAR_15->of_node,
         "ti,differential-input");
  VAR_25 = FUNC_9(VAR_15, "vref");
  if (!FUNC_1(VAR_25)) {
   VAR_20 = FUNC_13(VAR_25);
   VAR_19 = FUNC_0(VAR_20, 1000);
   if (VAR_19 < VAR_4 ||
       VAR_19 > VAR_3)
    return -VAR_6;
   VAR_22 = 1;
  }
 }

 if (VAR_13->dev.of_node)
  VAR_24 = (enum ads7828_chips)
   FUNC_10(&VAR_13->dev);
 else
  VAR_24 = VAR_14->driver_data;


 VAR_19 = FUNC_4(VAR_19, VAR_4,
       VAR_3);


 if (VAR_24 == VAR_11) {
  VAR_17->lsb_resol = FUNC_0(VAR_19 * 1000, 4096);
  VAR_17->regmap = FUNC_8(VAR_13,
          &VAR_9);
 } else {
  VAR_17->lsb_resol = FUNC_0(VAR_19 * 1000, 256);
  VAR_17->regmap = FUNC_8(VAR_13,
          &VAR_10);
 }

 if (FUNC_1(VAR_17->regmap))
  return FUNC_2(VAR_17->regmap);

 VAR_17->cmd_byte = VAR_22 ? VAR_0 : VAR_1;
 if (!VAR_21)
  VAR_17->cmd_byte |= VAR_2;







 if (!VAR_22)
  FUNC_12(VAR_17->regmap, VAR_17->cmd_byte, &VAR_23);

 VAR_18 = FUNC_6(VAR_15, VAR_13->name,
          VAR_17,
          VAR_12);
 return FUNC_3(VAR_18);
}
