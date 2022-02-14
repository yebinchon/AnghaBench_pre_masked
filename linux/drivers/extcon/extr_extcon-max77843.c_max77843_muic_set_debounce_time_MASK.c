
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77843_muic_info {int dev; struct max77693_dev* max77843; } ;
struct max77693_dev {int regmap_muic; } ;
typedef enum max77843_muic_adc_debounce_time { ____Placeholder_max77843_muic_adc_debounce_time } max77843_muic_adc_debounce_time ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct max77843_muic_info *VAR_4,
  enum max77843_muic_adc_debounce_time VAR_5)
{
 struct max77693_dev *VAR_6 = VAR_4->max77843;
 int VAR_7;

 switch (VAR_5) {
 case 128:
 case 131:
 case 130:
 case 129:
  VAR_7 = FUNC_1(VAR_6->regmap_muic,
    VAR_3,
    VAR_1,
    VAR_5 << VAR_2);
  if (VAR_7 < 0) {
   FUNC_0(VAR_4->dev, "Cannot write MUIC regmap\n");
   return VAR_7;
  }
  break;
 default:
  FUNC_0(VAR_4->dev, "Invalid ADC debounce time\n");
  return -VAR_0;
 }

 return 0;
}
