
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int enabled; unsigned long period; } ;
struct pwm_beeper {int amplifier_on; int pwm; int amplifier; } ;


 int FUNC_0 (int ,struct pwm_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct pwm_state*) ;
 int FUNC_3 (struct pwm_state*,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pwm_beeper *VAR_0, unsigned long VAR_1)
{
 struct pwm_state VAR_2;
 int VAR_3;

 FUNC_2(VAR_0->pwm, &VAR_2);

 VAR_2.enabled = 1;
 VAR_2.period = VAR_1;
 FUNC_3(&VAR_2, 50, 100);

 VAR_3 = FUNC_0(VAR_0->pwm, &VAR_2);
 if (VAR_3)
  return VAR_3;

 if (!VAR_0->amplifier_on) {
  VAR_3 = FUNC_4(VAR_0->amplifier);
  if (VAR_3) {
   FUNC_1(VAR_0->pwm);
   return VAR_3;
  }

  VAR_0->amplifier_on = 1;
 }

 return 0;
}
