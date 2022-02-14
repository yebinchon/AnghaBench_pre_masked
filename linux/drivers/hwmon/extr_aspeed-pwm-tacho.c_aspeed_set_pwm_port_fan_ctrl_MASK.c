
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct aspeed_pwm_tacho_data {int* type_pwm_clock_unit; size_t* pwm_port_type; int regmap; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,size_t,int ,int) ;
 int FUNC_1 (int ,size_t,int) ;

__attribute__((used)) static void FUNC_2(struct aspeed_pwm_tacho_data *VAR_1,
      u8 VAR_2, u8 VAR_3)
{
 u16 VAR_4, VAR_5;

 VAR_4 = VAR_1->type_pwm_clock_unit[VAR_1->pwm_port_type[VAR_2]];
 VAR_4 += 1;
 VAR_5 = (VAR_3 * VAR_4) / VAR_0;

 if (VAR_5 == 0) {
  FUNC_1(VAR_1->regmap, VAR_2, 0);
 } else {
  if (VAR_5 == VAR_4)
   VAR_5 = 0;

  FUNC_0(VAR_1->regmap, VAR_2, 0,
       VAR_5);
  FUNC_1(VAR_1->regmap, VAR_2, 1);
 }
}
