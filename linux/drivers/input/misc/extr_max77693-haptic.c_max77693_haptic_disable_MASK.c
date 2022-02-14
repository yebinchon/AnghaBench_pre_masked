
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_haptic {int enabled; int pwm_dev; } ;


 int FUNC_0 (struct max77693_haptic*,int) ;
 int FUNC_1 (struct max77693_haptic*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct max77693_haptic *VAR_0)
{
 int VAR_1;

 if (!VAR_0->enabled)
  return;

 VAR_1 = FUNC_0(VAR_0, 0);
 if (VAR_1)
  return;

 VAR_1 = FUNC_1(VAR_0, 0);
 if (VAR_1)
  goto err_disable_lowsys;

 FUNC_2(VAR_0->pwm_dev);
 VAR_0->enabled = 0;

 return;

err_disable_lowsys:
 FUNC_0(VAR_0, 1);
}
