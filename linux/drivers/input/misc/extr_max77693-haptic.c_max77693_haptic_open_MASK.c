
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_haptic {int dev; int motor_reg; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 struct max77693_haptic* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct max77693_haptic*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0)
{
 struct max77693_haptic *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, 1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1->motor_reg);
 if (VAR_2) {
  FUNC_0(VAR_1->dev,
   "failed to enable regulator: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
