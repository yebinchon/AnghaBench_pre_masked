
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_haptic {int dev; int motor_reg; int work; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 struct max77693_haptic* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct max77693_haptic*) ;
 int FUNC_4 (struct max77693_haptic*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_0)
{
 struct max77693_haptic *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->work);
 FUNC_3(VAR_1);

 VAR_2 = FUNC_5(VAR_1->motor_reg);
 if (VAR_2)
  FUNC_1(VAR_1->dev,
   "failed to disable regulator: %d\n", VAR_2);

 FUNC_4(VAR_1, 0);
}
