
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_args {int period; } ;
struct max77693_haptic {int pwm_duty; int dev; int pwm_dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,struct pwm_args*) ;

__attribute__((used)) static int FUNC_3(struct max77693_haptic *VAR_0)
{
 struct pwm_args VAR_1;
 int VAR_2;
 int VAR_3;

 FUNC_2(VAR_0->pwm_dev, &VAR_1);
 VAR_2 = (VAR_1.period + VAR_0->pwm_duty) / 2;
 VAR_3 = FUNC_1(VAR_0->pwm_dev, VAR_2, VAR_1.period);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "failed to configure pwm: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
