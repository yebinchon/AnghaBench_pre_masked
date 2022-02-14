
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matrix_keypad {int stopped; int work; int lock; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct matrix_keypad*) ;
 int FUNC_1 (int *) ;
 struct matrix_keypad* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_0)
{
 struct matrix_keypad *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->lock);
 VAR_1->stopped = 1;
 FUNC_4(&VAR_1->lock);

 FUNC_1(&VAR_1->work);




 FUNC_0(VAR_1);
}
