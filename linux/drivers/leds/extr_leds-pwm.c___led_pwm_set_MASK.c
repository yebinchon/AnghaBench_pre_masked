
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_pwm_data {int duty; int pwm; int period; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct led_pwm_data *VAR_0)
{
 int VAR_1 = VAR_0->duty;

 FUNC_0(VAR_0->pwm, VAR_1, VAR_0->period);

 if (VAR_1 == 0)
  FUNC_1(VAR_0->pwm);
 else
  FUNC_2(VAR_0->pwm);
}
