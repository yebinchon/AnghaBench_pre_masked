
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tca6416_keypad_chip {int irqnum; int dwork; scalar_t__ use_polling; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct tca6416_keypad_chip* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct tca6416_keypad_chip *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->use_polling)
  FUNC_0(&VAR_1->dwork);
 else
  FUNC_1(VAR_1->irqnum);
}
