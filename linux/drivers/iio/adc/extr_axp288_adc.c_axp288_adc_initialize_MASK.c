
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {scalar_t__ driver_data; } ;
struct axp288_adc_info {int ts_enabled; int regmap; } ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 uintptr_t VAR_3 ;
 uintptr_t VAR_4 ;
 uintptr_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dmi_system_id* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,uintptr_t,uintptr_t) ;

__attribute__((used)) static int FUNC_3(struct axp288_adc_info *VAR_9)
{
 const struct dmi_system_id *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10) {
  VAR_11 = FUNC_2(VAR_9->regmap, VAR_7,
      VAR_2,
      (uintptr_t)VAR_10->driver_data);
  if (VAR_11)
   return VAR_11;
 }





 VAR_11 = FUNC_1(VAR_9->regmap, VAR_0, &VAR_12);
 if (VAR_11)
  return VAR_11;

 if (VAR_12 & VAR_6) {
  VAR_9->ts_enabled = 1;
  VAR_11 = FUNC_2(VAR_9->regmap, VAR_7,
      VAR_5,
      VAR_4);
 } else {
  VAR_9->ts_enabled = 0;
  VAR_11 = FUNC_2(VAR_9->regmap, VAR_7,
      VAR_5,
      VAR_3);
 }
 if (VAR_11)
  return VAR_11;


 return FUNC_2(VAR_9->regmap, VAR_0,
      VAR_1, VAR_1);
}
