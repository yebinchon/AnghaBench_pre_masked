
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_vibrator {int vcc_on; int vcc; scalar_t__ pwm; scalar_t__ pwm_dir; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pwm_vibrator *VAR_0)
{
 if (VAR_0->pwm_dir)
  FUNC_0(VAR_0->pwm_dir);
 FUNC_0(VAR_0->pwm);

 if (VAR_0->vcc_on) {
  FUNC_1(VAR_0->vcc);
  VAR_0->vcc_on = 0;
 }
}
