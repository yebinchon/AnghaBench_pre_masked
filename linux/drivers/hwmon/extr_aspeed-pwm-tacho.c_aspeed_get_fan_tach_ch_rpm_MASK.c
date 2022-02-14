
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct aspeed_pwm_tacho_data {int* fan_tach_ch_source; int* pwm_port_type; int* type_fan_tach_clock_division; int* type_fan_tach_mode; int clk_freq; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aspeed_pwm_tacho_data*,int) ;
 int FUNC_1 (int ,int ,int,int,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct aspeed_pwm_tacho_data *VAR_6,
          u8 VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u8 VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;

 FUNC_2(VAR_6->regmap, VAR_1, 0);
 FUNC_2(VAR_6->regmap, VAR_1, 0x1 << VAR_7);

 VAR_14 = VAR_6->fan_tach_ch_source[VAR_7];
 VAR_15 = VAR_6->pwm_port_type[VAR_14];

 VAR_11 = (1000 / FUNC_0(VAR_6, VAR_15));
 VAR_12 = VAR_11 * 1000;

 VAR_18 = FUNC_1(
  VAR_6->regmap,
  VAR_0,
  VAR_13,
  (VAR_13 & VAR_4),
  VAR_2,
  VAR_12);


 if (VAR_18)
  return VAR_18;

 VAR_8 = VAR_13 & VAR_5;
 VAR_9 = VAR_6->type_fan_tach_clock_division[VAR_15];




 VAR_16 = VAR_6->type_fan_tach_mode[VAR_15];
 VAR_17 = (VAR_16 & VAR_3) ? 1 : 0;

 VAR_9 = (0x4 << VAR_17) << (VAR_9 * 2);
 VAR_10 = VAR_6->clk_freq;

 if (VAR_8 == 0)
  return 0;

 return (VAR_10 * 60) / (2 * VAR_8 * VAR_9);
}
