
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_keypad {int dummy; } ;
struct input_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct tc_keypad* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct tc_keypad*) ;
 int FUNC_3 (struct tc_keypad*) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0)
{
 int VAR_1;
 struct tc_keypad *VAR_2 = FUNC_1(VAR_0);


 VAR_1 = FUNC_2(VAR_2);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev, "failed to enable keypad module\n");
  return VAR_1;
 }

 VAR_1 = FUNC_3(VAR_2);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->dev, "failed to configure keypad module\n");
  return VAR_1;
 }

 return 0;
}
