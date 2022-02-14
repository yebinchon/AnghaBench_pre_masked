
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_haptic {int work; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct regulator_haptic* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct regulator_haptic*,int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct regulator_haptic *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->work);
 FUNC_2(VAR_1, 0);
}
