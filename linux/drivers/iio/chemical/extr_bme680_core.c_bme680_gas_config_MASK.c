
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct bme680_data {int regmap; int heater_dur; int heater_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bme680_data*,int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct bme680_data *VAR_5)
{
 struct device *VAR_6 = FUNC_4(VAR_5->regmap);
 int VAR_7;
 u8 VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_5, VAR_5->heater_temp);


 VAR_7 = FUNC_6(VAR_5->regmap, VAR_3, VAR_8);
 if (VAR_7 < 0) {
  FUNC_3(VAR_6, "failed to write res_heat_0 register\n");
  return VAR_7;
 }

 VAR_9 = FUNC_1(VAR_5->heater_dur);


 VAR_7 = FUNC_6(VAR_5->regmap, VAR_2, VAR_9);
 if (VAR_7 < 0) {
  FUNC_3(VAR_6, "failed to write gas_wait_0 register\n");
  return VAR_7;
 }


 VAR_7 = FUNC_5(VAR_5->regmap, VAR_1,
     VAR_4 | VAR_0,
     FUNC_0(VAR_4, 1) |
     FUNC_0(VAR_0, 0));
 if (VAR_7 < 0)
  FUNC_3(VAR_6, "failed to write ctrl_gas_1 register\n");

 return VAR_7;
}
