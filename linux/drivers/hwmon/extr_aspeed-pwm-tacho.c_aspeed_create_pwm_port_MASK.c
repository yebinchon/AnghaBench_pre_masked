
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct aspeed_pwm_tacho_data {int* pwm_present; int * pwm_port_fan_ctrl; int regmap; int * pwm_port_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t,int) ;
 int FUNC_1 (struct aspeed_pwm_tacho_data*,size_t,int ) ;
 int FUNC_2 (int ,size_t,int ) ;

__attribute__((used)) static void FUNC_3(struct aspeed_pwm_tacho_data *VAR_2,
       u8 VAR_3)
{
 FUNC_0(VAR_2->regmap, VAR_3, 1);
 VAR_2->pwm_present[VAR_3] = 1;

 VAR_2->pwm_port_type[VAR_3] = VAR_1;
 FUNC_2(VAR_2->regmap, VAR_3, VAR_1);

 VAR_2->pwm_port_fan_ctrl[VAR_3] = VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_0);
}
