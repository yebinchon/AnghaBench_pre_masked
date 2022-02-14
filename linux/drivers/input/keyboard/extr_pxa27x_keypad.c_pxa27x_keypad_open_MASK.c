
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa27x_keypad {int clk; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pxa27x_keypad* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct pxa27x_keypad*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 struct pxa27x_keypad *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_1);

 return 0;
}
