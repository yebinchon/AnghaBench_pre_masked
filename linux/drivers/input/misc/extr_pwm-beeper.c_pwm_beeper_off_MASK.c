
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_beeper {int amplifier_on; int pwm; int amplifier; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pwm_beeper *VAR_0)
{
 if (VAR_0->amplifier_on) {
  FUNC_1(VAR_0->amplifier);
  VAR_0->amplifier_on = 0;
 }

 FUNC_0(VAR_0->pwm);
}
