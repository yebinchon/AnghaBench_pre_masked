
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_muic_info {int dev; TYPE_1__* max77693; } ;
typedef enum max77693_muic_adc_debounce_time { ____Placeholder_max77693_muic_adc_debounce_time } max77693_muic_adc_debounce_time ;
struct TYPE_2__ {int regmap_muic; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct max77693_muic_info *VAR_3,
  enum max77693_muic_adc_debounce_time VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 128:
 case 131:
 case 130:
 case 129:





  VAR_5 = FUNC_1(VAR_3->max77693->regmap_muic,
      VAR_2,
      VAR_4 << VAR_1);
  if (VAR_5) {
   FUNC_0(VAR_3->dev, "failed to set ADC debounce time\n");
   return VAR_5;
  }
  break;
 default:
  FUNC_0(VAR_3->dev, "invalid ADC debounce time\n");
  return -VAR_0;
 }

 return 0;
}
