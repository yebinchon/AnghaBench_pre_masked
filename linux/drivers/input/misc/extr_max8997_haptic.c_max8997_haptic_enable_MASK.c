
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_haptic {int enabled; scalar_t__ mode; int mutex; int regulator; int dev; int pwm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct max8997_haptic*) ;
 int FUNC_2 (struct max8997_haptic*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct max8997_haptic *VAR_1)
{
 int VAR_2;

 FUNC_3(&VAR_1->mutex);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "set_pwm_cycle failed, error: %d\n", VAR_2);
  goto out;
 }

 if (!VAR_1->enabled) {
  VAR_2 = FUNC_7(VAR_1->regulator);
  if (VAR_2) {
   FUNC_0(VAR_1->dev, "Failed to enable regulator\n");
   goto out;
  }
  FUNC_1(VAR_1);
  if (VAR_1->mode == VAR_0) {
   VAR_2 = FUNC_5(VAR_1->pwm);
   if (VAR_2) {
    FUNC_0(VAR_1->dev, "Failed to enable PWM\n");
    FUNC_6(VAR_1->regulator);
    goto out;
   }
  }
  VAR_1->enabled = 1;
 }

out:
 FUNC_4(&VAR_1->mutex);
}
