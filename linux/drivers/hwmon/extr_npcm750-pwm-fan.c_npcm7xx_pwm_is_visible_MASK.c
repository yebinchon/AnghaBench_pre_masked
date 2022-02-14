
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct npcm7xx_pwm_fan_data {int * pwm_present; } ;




__attribute__((used)) static umode_t FUNC_0(const void *VAR_0, u32 VAR_1, int VAR_2)
{
 const struct npcm7xx_pwm_fan_data *VAR_3 = VAR_0;

 if (!VAR_3->pwm_present[VAR_2])
  return 0;

 switch (VAR_1) {
 case 128:
  return 0644;
 default:
  return 0;
 }
}
