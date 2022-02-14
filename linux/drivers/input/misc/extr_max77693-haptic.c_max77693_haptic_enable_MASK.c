
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_haptic {int enabled; int pwm_dev; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct max77693_haptic*,int) ;
 int FUNC_2 (struct max77693_haptic*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct max77693_haptic *VAR_0)
{
 int VAR_1;

 if (VAR_0->enabled)
  return;

 VAR_1 = FUNC_4(VAR_0->pwm_dev);
 if (VAR_1) {
  FUNC_0(VAR_0->dev,
   "failed to enable haptic pwm device: %d\n", VAR_1);
  return;
 }

 VAR_1 = FUNC_2(VAR_0, 1);
 if (VAR_1)
  goto err_enable_lowsys;

 VAR_1 = FUNC_1(VAR_0, 1);
 if (VAR_1)
  goto err_enable_config;

 VAR_0->enabled = 1;

 return;

err_enable_config:
 FUNC_2(VAR_0, 0);
err_enable_lowsys:
 FUNC_3(VAR_0->pwm_dev);
}
