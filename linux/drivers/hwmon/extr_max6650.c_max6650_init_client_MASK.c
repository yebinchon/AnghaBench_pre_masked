
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max6650_data {int config; int speed; int dac; int count; int alarm_en; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int VAR_12 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct max6650_data*,int ) ;
 int FUNC_5 (struct max6650_data*,int) ;
 scalar_t__ FUNC_6 (int ,char*,int*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_7(struct max6650_data *VAR_14,
          struct i2c_client *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 int VAR_17;
 int VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;

 if (FUNC_6(VAR_16->of_node, "maxim,fan-microvolt",
     &VAR_19))
  VAR_19 = VAR_12;
 else
  VAR_19 /= 1000000;
 if (FUNC_6(VAR_16->of_node, "maxim,fan-prescale",
     &VAR_20))
  VAR_20 = VAR_13;

 VAR_17 = FUNC_2(VAR_15, VAR_8);
 if (VAR_17 < 0) {
  FUNC_0(VAR_16, "Error reading config register, aborting.\n");
  return VAR_17;
 }

 switch (VAR_19) {
 case 0:
  break;
 case 5:
  VAR_17 &= ~VAR_6;
  break;
 case 12:
  VAR_17 |= VAR_6;
  break;
 default:
  FUNC_0(VAR_16, "illegal value for fan_voltage (%d)\n", VAR_19);
 }

 switch (VAR_20) {
 case 0:
  break;
 case 1:
  VAR_17 &= ~VAR_5;
  break;
 case 2:
  VAR_17 = (VAR_17 & ~VAR_5)
    | VAR_2;
  break;
 case 4:
  VAR_17 = (VAR_17 & ~VAR_5)
    | VAR_3;
  break;
 case 8:
  VAR_17 = (VAR_17 & ~VAR_5)
    | VAR_4;
  break;
 case 16:
  VAR_17 = (VAR_17 & ~VAR_5)
    | VAR_1;
  break;
 default:
  FUNC_0(VAR_16, "illegal value for prescaler (%d)\n", VAR_20);
 }

 FUNC_1(VAR_16, "Fan voltage: %dV, prescaler: %d.\n",
   (VAR_17 & VAR_6) ? 12 : 5,
   1 << (VAR_17 & VAR_5));

 VAR_18 = FUNC_3(VAR_15, VAR_8, VAR_17);
 if (VAR_18) {
  FUNC_0(VAR_16, "Config write error, aborting.\n");
  return VAR_18;
 }
 VAR_14->config = VAR_17;

 VAR_17 = FUNC_2(VAR_15, VAR_11);
 if (VAR_17 < 0) {
  FUNC_0(VAR_16, "Failed to read speed register, aborting.\n");
  return VAR_17;
 }
 VAR_14->speed = VAR_17;

 VAR_17 = FUNC_2(VAR_15, VAR_10);
 if (VAR_17 < 0) {
  FUNC_0(VAR_16, "Failed to read DAC register, aborting.\n");
  return VAR_17;
 }
 VAR_14->dac = VAR_17;

 VAR_17 = FUNC_2(VAR_15, VAR_9);
 if (VAR_17 < 0) {
  FUNC_0(VAR_16, "Failed to read count register, aborting.\n");
  return VAR_17;
 }
 VAR_14->count = VAR_17;

 VAR_17 = FUNC_2(VAR_15, VAR_7);
 if (VAR_17 < 0) {
  FUNC_0(VAR_16, "Failed to read alarm configuration, aborting.\n");
  return VAR_17;
 }
 VAR_14->alarm_en = VAR_17;

 if (!FUNC_6(VAR_15->dev.of_node, "maxim,fan-target-rpm",
      &VAR_21)) {
  FUNC_5(VAR_14, VAR_21);
  FUNC_4(VAR_14, VAR_0);
 }

 return 0;
}
