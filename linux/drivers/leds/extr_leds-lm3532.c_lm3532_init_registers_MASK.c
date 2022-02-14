
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3532_led {int control_bank; unsigned int ctrl_brt_pointer; unsigned int mode; int full_scale_current; int num_leds; int* led_strings; struct lm3532_data* priv; } ;
struct lm3532_data {unsigned int runtime_ramp_up; unsigned int runtime_ramp_down; int regmap; scalar_t__ enable_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_3 (int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct lm3532_led *VAR_9)
{
 struct lm3532_data *VAR_10 = VAR_9->priv;
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15;
 unsigned int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;

 if (VAR_10->enable_gpio)
  FUNC_0(VAR_10->enable_gpio, 1);

 VAR_15 = VAR_7 + VAR_9->control_bank * 2;




 VAR_19 = FUNC_1(VAR_10->regmap, VAR_15,
     &VAR_9->ctrl_brt_pointer);
 if (VAR_19)
  return VAR_19;

 VAR_9->ctrl_brt_pointer &= VAR_8;
 VAR_16 = VAR_9->ctrl_brt_pointer | VAR_9->mode;
 VAR_19 = FUNC_3(VAR_10->regmap, VAR_15,
      VAR_16);
 if (VAR_19)
  return VAR_19;

 if (VAR_9->full_scale_current) {
  VAR_17 = VAR_4 + VAR_9->control_bank * 2;
  VAR_18 = (VAR_9->full_scale_current - VAR_0) /
     VAR_1;

  VAR_19 = FUNC_3(VAR_10->regmap, VAR_17,
       VAR_18);
  if (VAR_19)
   return VAR_19;
 }

 for (VAR_20 = 0; VAR_20 < VAR_9->num_leds; VAR_20++) {
  VAR_13 = VAR_9->led_strings[VAR_20] * 2;
  VAR_12 |= (VAR_9->control_bank << VAR_13);
  VAR_14 |= VAR_2 << VAR_13;
 }

 VAR_19 = FUNC_2(VAR_10->regmap, VAR_5,
     VAR_14, VAR_12);
 if (VAR_19)
  return VAR_19;

 VAR_11 = VAR_10->runtime_ramp_up |
    (VAR_10->runtime_ramp_down << VAR_3);

 return FUNC_3(VAR_10->regmap, VAR_6,
       VAR_11);
}
