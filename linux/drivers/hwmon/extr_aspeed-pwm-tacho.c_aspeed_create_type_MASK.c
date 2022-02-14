
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_pwm_tacho_data {int regmap; int * type_fan_tach_mode; int * type_fan_tach_unit; int * type_fan_tach_clock_division; int * type_pwm_clock_unit; int * type_pwm_clock_division_l; int * type_pwm_clock_division_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,size_t,int ,int ,int ) ;
 int FUNC_1 (int ,size_t,int) ;
 int FUNC_2 (int ,size_t,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct aspeed_pwm_tacho_data *VAR_7)
{
 VAR_7->type_pwm_clock_division_h[VAR_6] = VAR_0;
 VAR_7->type_pwm_clock_division_l[VAR_6] = VAR_1;
 VAR_7->type_pwm_clock_unit[VAR_6] = VAR_2;
 FUNC_0(VAR_7->regmap, VAR_6, VAR_0,
        VAR_1, VAR_2);
 FUNC_1(VAR_7->regmap, VAR_6, 1);
 VAR_7->type_fan_tach_clock_division[VAR_6] = VAR_3;
 VAR_7->type_fan_tach_unit[VAR_6] = VAR_5;
 VAR_7->type_fan_tach_mode[VAR_6] = VAR_4;
 FUNC_2(VAR_7->regmap, VAR_6, VAR_4,
         VAR_5, VAR_3);
}
