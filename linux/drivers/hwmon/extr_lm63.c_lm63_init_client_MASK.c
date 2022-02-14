
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lm63_data {int config; int config_fan; int kind; int pwm1_freq; int lut_size; int trutherm; int lut_temp_highres; int pwm_highres; int remote_unsigned; int max_convrate_hz; int update_interval; struct i2c_client* client; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;



 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct lm63_data *VAR_9)
{
 struct i2c_client *VAR_10 = VAR_9->client;
 struct device *VAR_11 = &VAR_10->dev;
 u8 VAR_12;

 VAR_9->config = FUNC_2(VAR_10, VAR_2);
 VAR_9->config_fan = FUNC_2(VAR_10,
          VAR_3);


 if (VAR_9->config & 0x40) {
  FUNC_1(VAR_11, "Switching to operational mode\n");
  VAR_9->config &= 0xA7;
  FUNC_3(VAR_10, VAR_2,
       VAR_9->config);
 }

 if (VAR_9->kind == 129)
  VAR_9->config |= 0x04;


 VAR_9->pwm1_freq = FUNC_2(VAR_10, VAR_5);
 if (VAR_9->pwm1_freq == 0)
  VAR_9->pwm1_freq = 1;

 switch (VAR_9->kind) {
 case 130:
 case 129:
  VAR_9->max_convrate_hz = VAR_1;
  VAR_9->lut_size = 8;
  break;
 case 128:
  VAR_9->max_convrate_hz = VAR_6;
  VAR_9->lut_size = 12;
  VAR_9->trutherm
    = FUNC_2(VAR_10,
          VAR_8) & 0x02;
  break;
 }
 VAR_12 = FUNC_2(VAR_10, VAR_4);
 if (FUNC_4(VAR_12 > VAR_0))
  VAR_12 = VAR_0;
 VAR_9->update_interval = FUNC_0(VAR_9->max_convrate_hz,
      VAR_12);





 if (VAR_9->kind == 128) {
  u8 VAR_13
    = FUNC_2(VAR_10,
          VAR_7);
  if (VAR_13 & 0x20)
   VAR_9->lut_temp_highres = 1;
  if ((VAR_13 & 0x10)
      && !(VAR_9->config_fan & 0x08) && VAR_9->pwm1_freq == 8)
   VAR_9->pwm_highres = 1;
  if (VAR_13 & 0x08)
   VAR_9->remote_unsigned = 1;
 }


 if (VAR_9->kind == 130)
  FUNC_1(VAR_11, "Alert/tach pin configured for %s\n",
   (VAR_9->config & 0x04) ? "tachometer input" :
   "alert output");
 FUNC_1(VAR_11, "PWM clock %s kHz, output frequency %u Hz\n",
  (VAR_9->config_fan & 0x08) ? "1.4" : "360",
  ((VAR_9->config_fan & 0x08) ? 700 : 180000) / VAR_9->pwm1_freq);
 FUNC_1(VAR_11, "PWM output active %s, %s mode\n",
  (VAR_9->config_fan & 0x10) ? "low" : "high",
  (VAR_9->config_fan & 0x20) ? "manual" : "auto");
}
