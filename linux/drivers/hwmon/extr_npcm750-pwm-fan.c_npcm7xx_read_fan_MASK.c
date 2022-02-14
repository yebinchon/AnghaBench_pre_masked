
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct npcm7xx_pwm_fan_data {int input_clk_freq; TYPE_1__* fan_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int fan_cnt; int fan_pls_per_rev; } ;


 int VAR_0 ;
 struct npcm7xx_pwm_fan_data* FUNC_0 (struct device*) ;


__attribute__((used)) static int FUNC_1(struct device *VAR_1, u32 VAR_2, int VAR_3,
       long *VAR_4)
{
 struct npcm7xx_pwm_fan_data *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  *VAR_4 = 0;
  if (VAR_5->fan_dev[VAR_3].fan_cnt <= 0)
   return VAR_5->fan_dev[VAR_3].fan_cnt;


  if (VAR_5->fan_dev[VAR_3].fan_cnt > 0 &&
      VAR_5->fan_dev[VAR_3].fan_pls_per_rev > 0)
   *VAR_4 = ((VAR_5->input_clk_freq * 60) /
    (VAR_5->fan_dev[VAR_3].fan_cnt *
     VAR_5->fan_dev[VAR_3].fan_pls_per_rev));
  return 0;
 default:
  return -VAR_0;
 }
}
