
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct aspeed_pwm_tacho_data {size_t clk_freq; size_t* type_pwm_clock_unit; size_t* type_pwm_clock_division_h; size_t* type_pwm_clock_division_l; size_t* type_fan_tach_unit; size_t* type_fan_tach_clock_division; } ;



__attribute__((used)) static u32 FUNC_0(struct aspeed_pwm_tacho_data
       *VAR_0, u8 VAR_1)
{
 u32 VAR_2;
 u16 VAR_3;
 u8 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_2 = VAR_0->clk_freq;
 VAR_4 = VAR_0->type_pwm_clock_unit[VAR_1];
 VAR_5 = VAR_0->type_pwm_clock_division_h[VAR_1];
 VAR_5 = 0x1 << VAR_5;
 VAR_6 = VAR_0->type_pwm_clock_division_l[VAR_1];
 if (VAR_6 == 0)
  VAR_6 = 1;
 else
  VAR_6 = VAR_6 * 2;

 VAR_3 = VAR_0->type_fan_tach_unit[VAR_1];
 VAR_7 = VAR_0->type_fan_tach_clock_division[VAR_1];

 VAR_7 = 0x4 << (VAR_7 * 2);
 return VAR_2 / (VAR_4 * VAR_5 * VAR_6 * VAR_7 * VAR_3);
}
