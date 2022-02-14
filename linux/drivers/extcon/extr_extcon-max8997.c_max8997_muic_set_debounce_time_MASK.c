
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_muic_info {int dev; int muic; } ;
typedef enum max8997_muic_adc_debounce_time { ____Placeholder_max8997_muic_adc_debounce_time } max8997_muic_adc_debounce_time ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct max8997_muic_info *VAR_4,
  enum max8997_muic_adc_debounce_time VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_6 = FUNC_1(VAR_4->muic,
       VAR_3,
       VAR_5 << VAR_1,
       VAR_0);
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
