
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max14577_muic_info {int dev; TYPE_1__* max14577; } ;
typedef enum max14577_muic_adc_debounce_time { ____Placeholder_max14577_muic_adc_debounce_time } max14577_muic_adc_debounce_time ;
struct TYPE_2__ {int regmap; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct max14577_muic_info *VAR_4,
  enum max14577_muic_adc_debounce_time VAR_5)
{
 u8 VAR_6;

 switch (VAR_5) {
 case 128:
 case 131:
 case 130:
 case 129:
  VAR_6 = FUNC_1(VAR_4->max14577->regmap,
       VAR_3,
       VAR_0,
       VAR_5 << VAR_1);
  if (VAR_6) {
   FUNC_0(VAR_4->dev, "failed to set ADC debounce time\n");
   return VAR_6;
  }
  break;
 default:
  FUNC_0(VAR_4->dev, "invalid ADC debounce time\n");
  return -VAR_2;
 }

 return 0;
}
