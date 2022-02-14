
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tca6416_keypad_chip {int irqnum; int dwork; scalar_t__ use_polling; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tca6416_keypad_chip* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct tca6416_keypad_chip*) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_0)
{
 struct tca6416_keypad_chip *VAR_1 = FUNC_1(VAR_0);


 FUNC_4(VAR_1);

 if (VAR_1->use_polling)
  FUNC_3(&VAR_1->dwork, FUNC_2(100));
 else
  FUNC_0(VAR_1->irqnum);

 return 0;
}
