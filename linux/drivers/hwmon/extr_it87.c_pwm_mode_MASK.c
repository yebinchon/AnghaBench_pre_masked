
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {scalar_t__ type; int fan_main_ctrl; int* pwm_ctrl; scalar_t__* pwm_duty; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct it87_data const*,int) ;

__attribute__((used)) static int FUNC_2(const struct it87_data *VAR_1, int VAR_2)
{
 if (VAR_1->type != VAR_0 && VAR_2 < 3 && !(VAR_1->fan_main_ctrl & FUNC_0(VAR_2)))
  return 0;
 if (VAR_1->pwm_ctrl[VAR_2] & 0x80)
  return 2;
 if ((VAR_1->type == VAR_0 || VAR_2 >= 3) &&
     VAR_1->pwm_duty[VAR_2] == FUNC_1(VAR_1, 0xff))
  return 0;

 return 1;
}
