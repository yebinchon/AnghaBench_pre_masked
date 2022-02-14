
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix_keypad {int stopped; int work; } ;
struct input_dev {int dummy; } ;


 struct matrix_keypad* FUNC_0 (struct input_dev*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 struct matrix_keypad *VAR_1 = FUNC_0(VAR_0);

 VAR_1->stopped = 0;
 FUNC_1();





 FUNC_2(&VAR_1->work, 0);

 return 0;
}
