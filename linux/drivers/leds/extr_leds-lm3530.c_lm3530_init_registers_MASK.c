
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm3530_pwm_data {int (* pwm_set_intensity ) (int,int) ;} ;
struct lm3530_platform_data {int brt_ramp_law; int max_current; int pwm_pol_hi; int brt_ramp_fall; int brt_ramp_rise; int brt_val; struct lm3530_pwm_data pwm_data; } ;
struct TYPE_2__ {int max_brightness; } ;
struct lm3530_data {int mode; int brightness; TYPE_1__ led_dev; struct i2c_client* client; struct lm3530_platform_data* pdata; } ;
struct lm3530_als_data {int config; int imp_sel; int* zones; } ;
struct i2c_client {int dummy; } ;





 scalar_t__ VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct i2c_client*,scalar_t__,int) ;
 int FUNC_1 (struct lm3530_platform_data*,struct lm3530_als_data*) ;
 int FUNC_2 (struct lm3530_data*) ;
 scalar_t__* VAR_15 ;
 int FUNC_3 (struct lm3530_als_data*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct lm3530_data *VAR_16)
{
 int VAR_17 = 0;
 int VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 u8 VAR_22[VAR_14];
 struct lm3530_platform_data *VAR_23 = VAR_16->pdata;
 struct i2c_client *VAR_24 = VAR_16->client;
 struct lm3530_pwm_data *VAR_25 = &VAR_23->pwm_data;
 struct lm3530_als_data VAR_26;

 FUNC_3(&VAR_26, 0, sizeof(struct lm3530_als_data));

 VAR_19 = (VAR_23->brt_ramp_law << VAR_13) |
   ((VAR_23->max_current & 7) << VAR_11);

 switch (VAR_16->mode) {
 case 129:
  VAR_19 |= VAR_8;
  break;
 case 130:
  VAR_19 |= VAR_8;
  FUNC_1(VAR_23, &VAR_26);
  break;
 case 128:
  VAR_19 |= VAR_9 | VAR_10 |
         (VAR_23->pwm_pol_hi << VAR_12);
  break;
 }

 VAR_20 = (VAR_23->brt_ramp_fall << VAR_1) |
   (VAR_23->brt_ramp_rise << VAR_2);

 if (VAR_16->brightness)
  VAR_21 = VAR_16->brightness;
 else
  VAR_21 = VAR_16->brightness = VAR_23->brt_val;

 if (VAR_21 > VAR_16->led_dev.max_brightness)
  VAR_21 = VAR_16->led_dev.max_brightness;

 VAR_22[0] = VAR_19;
 VAR_22[1] = VAR_26.config;
 VAR_22[2] = VAR_20;
 VAR_22[3] = VAR_26.imp_sel;
 VAR_22[4] = VAR_21;
 VAR_22[5] = VAR_26.zones[0];
 VAR_22[6] = VAR_26.zones[1];
 VAR_22[7] = VAR_26.zones[2];
 VAR_22[8] = VAR_26.zones[3];
 VAR_22[9] = VAR_3;
 VAR_22[10] = VAR_4;
 VAR_22[11] = VAR_5;
 VAR_22[12] = VAR_6;
 VAR_22[13] = VAR_7;

 VAR_17 = FUNC_2(VAR_16);
 if (VAR_17)
  return VAR_17;

 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {

  if (VAR_15[VAR_18] == VAR_0 &&
      VAR_16->mode == 128) {
   if (VAR_25->pwm_set_intensity)
    VAR_25->pwm_set_intensity(VAR_22[VAR_18],
     VAR_16->led_dev.max_brightness);
   continue;
  }

  VAR_17 = FUNC_0(VAR_24,
    VAR_15[VAR_18], VAR_22[VAR_18]);
  if (VAR_17)
   break;
 }

 return VAR_17;
}
