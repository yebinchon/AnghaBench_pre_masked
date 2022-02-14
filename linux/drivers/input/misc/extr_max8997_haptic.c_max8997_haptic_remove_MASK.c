
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct max8997_haptic {scalar_t__ mode; int pwm; int regulator; int input_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct max8997_haptic*) ;
 struct max8997_haptic* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct max8997_haptic *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->input_dev);
 FUNC_4(VAR_2->regulator);

 if (VAR_2->mode == VAR_0)
  FUNC_3(VAR_2->pwm);

 FUNC_1(VAR_2);

 return 0;
}
