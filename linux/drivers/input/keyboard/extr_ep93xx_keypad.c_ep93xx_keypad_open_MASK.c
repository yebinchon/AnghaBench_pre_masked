
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct ep93xx_keypad {int enabled; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ep93xx_keypad*) ;
 struct ep93xx_keypad* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 struct ep93xx_keypad *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->enabled) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->clk);
  VAR_1->enabled = 1;
 }

 return 0;
}
