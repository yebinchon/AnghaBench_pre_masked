
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aspeed_pwm_tacho_data {int* fan_tach_present; int* fan_tach_ch_source; int regmap; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct aspeed_pwm_tacho_data *VAR_0,
        u8 *VAR_1,
        int VAR_2,
        u8 VAR_3)
{
 u8 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = VAR_1[VAR_4];
  FUNC_0(VAR_0->regmap, VAR_5, 1);
  VAR_0->fan_tach_present[VAR_5] = 1;
  VAR_0->fan_tach_ch_source[VAR_5] = VAR_3;
  FUNC_1(VAR_0->regmap, VAR_5, VAR_3);
 }
}
