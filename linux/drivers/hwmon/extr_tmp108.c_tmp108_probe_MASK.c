
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmp108 {int orig_config; int ready_time; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,struct tmp108*) ;
 int FUNC_5 (struct device*,int ,struct tmp108*) ;
 struct device* FUNC_6 (struct device*,int ,struct tmp108*,int *,int *) ;
 struct tmp108* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int*) ;
 int FUNC_12 (int ,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_14,
   const struct i2c_device_id *VAR_15)
{
 struct device *VAR_16 = &VAR_14->dev;
 struct device *VAR_17;
 struct tmp108 *VAR_18;
 int VAR_19;
 u32 VAR_20;

 if (!FUNC_9(VAR_14->adapter,
         VAR_3)) {
  FUNC_3(VAR_16,
   "adapter doesn't support SMBus word transactions\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_7(VAR_16, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 FUNC_4(VAR_16, VAR_18);

 VAR_18->regmap = FUNC_8(VAR_14, &VAR_12);
 if (FUNC_0(VAR_18->regmap)) {
  VAR_19 = FUNC_1(VAR_18->regmap);
  FUNC_3(VAR_16, "regmap init failed: %d", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_11(VAR_18->regmap, VAR_9, &VAR_20);
 if (VAR_19 < 0) {
  FUNC_3(VAR_16, "error reading config register: %d", VAR_19);
  return VAR_19;
 }
 VAR_18->orig_config = VAR_20;


 VAR_20 &= ~VAR_4;
 VAR_20 |= VAR_7;


 VAR_20 &= ~VAR_5;

 VAR_19 = FUNC_12(VAR_18->regmap, VAR_9, VAR_20);
 if (VAR_19 < 0) {
  FUNC_3(VAR_16, "error writing config register: %d", VAR_19);
  return VAR_19;
 }

 VAR_18->ready_time = VAR_10;
 if ((VAR_18->orig_config & VAR_4) ==
     VAR_8)
  VAR_18->ready_time +=
   FUNC_10(VAR_6);

 VAR_19 = FUNC_5(VAR_16, VAR_13, VAR_18);
 if (VAR_19) {
  FUNC_3(VAR_16, "add action or reset failed: %d", VAR_19);
  return VAR_19;
 }

 VAR_17 = FUNC_6(VAR_16, VAR_14->name,
        VAR_18,
        &VAR_11,
        ((void*)0));
 return FUNC_2(VAR_17);
}
