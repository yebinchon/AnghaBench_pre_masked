
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_vibrator {int vcc_on; scalar_t__ pwm; scalar_t__ pwm_dir; int direction_duty_cycle; int level; int vcc; TYPE_2__* input; } ;
struct pwm_state {int enabled; int duty_cycle; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (scalar_t__,struct pwm_state*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,struct pwm_state*) ;
 int FUNC_4 (struct pwm_state*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct pwm_vibrator *VAR_0)
{
 struct device *VAR_1 = VAR_0->input->dev.parent;
 struct pwm_state VAR_2;
 int VAR_3;

 if (!VAR_0->vcc_on) {
  VAR_3 = FUNC_5(VAR_0->vcc);
  if (VAR_3) {
   FUNC_0(VAR_1, "failed to enable regulator: %d", VAR_3);
   return VAR_3;
  }
  VAR_0->vcc_on = 1;
 }

 FUNC_3(VAR_0->pwm, &VAR_2);
 FUNC_4(&VAR_2, VAR_0->level, 0xffff);
 VAR_2.enabled = 1;

 VAR_3 = FUNC_1(VAR_0->pwm, &VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1, "failed to apply pwm state: %d", VAR_3);
  return VAR_3;
 }

 if (VAR_0->pwm_dir) {
  FUNC_3(VAR_0->pwm_dir, &VAR_2);
  VAR_2.duty_cycle = VAR_0->direction_duty_cycle;
  VAR_2.enabled = 1;

  VAR_3 = FUNC_1(VAR_0->pwm_dir, &VAR_2);
  if (VAR_3) {
   FUNC_0(VAR_1, "failed to apply dir-pwm state: %d", VAR_3);
   FUNC_2(VAR_0->pwm);
   return VAR_3;
  }
 }

 return 0;
}
