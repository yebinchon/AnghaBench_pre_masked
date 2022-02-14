
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp102 {unsigned int config_orig; scalar_t__ ready_time; struct device* regmap; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int ,struct tmp102*) ;
 struct device* FUNC_6 (struct device*,int ,struct tmp102*,int *,int *) ;
 struct tmp102* FUNC_7 (struct device*,int,int ) ;
 struct device* FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct i2c_client*,struct tmp102*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct device*,int ,unsigned int*) ;
 int FUNC_13 (struct device*,int ,unsigned int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_15,
   const struct i2c_device_id *VAR_16)
{
 struct device *VAR_17 = &VAR_15->dev;
 struct device *VAR_18;
 struct tmp102 *VAR_19;
 unsigned int VAR_20;
 int VAR_21;

 if (!FUNC_9(VAR_15->adapter,
         VAR_4)) {
  FUNC_3(VAR_17,
   "adapter doesn't support SMBus word transactions\n");
  return -VAR_1;
 }

 VAR_19 = FUNC_7(VAR_17, sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return -VAR_2;

 FUNC_10(VAR_15, VAR_19);

 VAR_19->regmap = FUNC_8(VAR_15, &VAR_13);
 if (FUNC_0(VAR_19->regmap))
  return FUNC_1(VAR_19->regmap);

 VAR_21 = FUNC_12(VAR_19->regmap, VAR_10, &VAR_20);
 if (VAR_21 < 0) {
  FUNC_3(VAR_17, "error reading config register\n");
  return VAR_21;
 }

 if ((VAR_20 & ~VAR_7) !=
     (VAR_8 | VAR_9)) {
  FUNC_3(VAR_17, "unexpected config register value\n");
  return -VAR_1;
 }

 VAR_19->config_orig = VAR_20;

 VAR_21 = FUNC_5(VAR_17, VAR_14, VAR_19);
 if (VAR_21)
  return VAR_21;

 VAR_20 &= ~VAR_5;
 VAR_20 |= VAR_6;

 VAR_21 = FUNC_13(VAR_19->regmap, VAR_10, VAR_20);
 if (VAR_21 < 0) {
  FUNC_3(VAR_17, "error writing config register\n");
  return VAR_21;
 }





 VAR_19->ready_time = VAR_11 + FUNC_11(VAR_0);

 VAR_18 = FUNC_6(VAR_17, VAR_15->name,
        VAR_19,
        &VAR_12,
        ((void*)0));
 if (FUNC_0(VAR_18)) {
  FUNC_2(VAR_17, "unable to register hwmon device\n");
  return FUNC_1(VAR_18);
 }
 FUNC_4(VAR_17, "initialized\n");

 return 0;
}
