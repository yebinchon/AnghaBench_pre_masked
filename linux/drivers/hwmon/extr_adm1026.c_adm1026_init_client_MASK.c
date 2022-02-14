
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_2__ {int auto_pwm_min; } ;
struct adm1026_data {int config1; int config2; int config3; int* gpio_config; int * fan_div; TYPE_1__ pwm1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,scalar_t__) ;
 int FUNC_4 (struct i2c_client*,scalar_t__,int) ;
 int FUNC_5 (int *,char*,...) ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 struct adm1026_data* FUNC_6 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_7(struct i2c_client *VAR_19)
{
 int VAR_20, VAR_21;
 struct adm1026_data *VAR_22 = FUNC_6(VAR_19);

 FUNC_5(&VAR_19->dev, "Initializing device\n");

 VAR_22->config1 = FUNC_3(VAR_19, VAR_0);
 VAR_22->config2 = FUNC_3(VAR_19, VAR_1);
 VAR_22->config3 = FUNC_3(VAR_19, VAR_2);


 FUNC_5(&VAR_19->dev, "ADM1026_REG_CONFIG1 is: 0x%02x\n",
  VAR_22->config1);
 if ((VAR_22->config1 & VAR_9) == 0) {
  FUNC_5(&VAR_19->dev,
   "Monitoring not currently enabled.\n");
 }
 if (VAR_22->config1 & VAR_8) {
  FUNC_5(&VAR_19->dev,
   "SMBALERT interrupts are enabled.\n");
 }
 if (VAR_22->config1 & VAR_6) {
  FUNC_5(&VAR_19->dev,
   "in8 and in9 enabled. temp3 disabled.\n");
 } else {
  FUNC_5(&VAR_19->dev,
   "temp3 enabled.  in8 and in9 disabled.\n");
 }
 if (VAR_22->config1 & VAR_11) {
  FUNC_5(&VAR_19->dev,
   "Automatic THERM, PWM, and temp limits enabled.\n");
 }

 if (VAR_22->config3 & VAR_12) {
  FUNC_5(&VAR_19->dev,
   "GPIO16 enabled.  THERM pin disabled.\n");
 } else {
  FUNC_5(&VAR_19->dev,
   "THERM pin enabled.  GPIO16 disabled.\n");
 }
 if (VAR_22->config3 & VAR_13)
  FUNC_5(&VAR_19->dev, "Vref is 2.50 Volts.\n");
 else
  FUNC_5(&VAR_19->dev, "Vref is 1.82 Volts.\n");

 VAR_20 = 0;
 for (VAR_21 = 0; VAR_21 <= 15; ++VAR_21) {
  if ((VAR_21 & 0x03) == 0) {
   VAR_20 = FUNC_3(VAR_19,
     VAR_5 + VAR_21 / 4);
  }
  VAR_22->gpio_config[VAR_21] = VAR_20 & 0x03;
  VAR_20 >>= 2;
 }
 VAR_22->gpio_config[16] = (VAR_22->config3 >> 6) & 0x03;


 FUNC_2(VAR_19);





 if (VAR_15[0] != -1 || VAR_18[0] != -1
  || VAR_16[0] != -1 || VAR_17[0] != -1
  || VAR_14[0] != -1) {
  FUNC_1(VAR_19);
 }
 VAR_22->pwm1.auto_pwm_min = 255;

 VAR_20 = FUNC_3(VAR_19, VAR_0);

 VAR_20 = (VAR_20 | VAR_9) & (~VAR_7 & ~VAR_10);
 FUNC_5(&VAR_19->dev, "Setting CONFIG to: 0x%02x\n", VAR_20);
 VAR_22->config1 = VAR_20;
 FUNC_4(VAR_19, VAR_0, VAR_20);


 VAR_20 = FUNC_3(VAR_19, VAR_3) |
  (FUNC_3(VAR_19, VAR_4) << 8);
 for (VAR_21 = 0; VAR_21 <= 7; ++VAR_21) {
  VAR_22->fan_div[VAR_21] = FUNC_0(VAR_20 & 0x03);
  VAR_20 >>= 2;
 }
}
