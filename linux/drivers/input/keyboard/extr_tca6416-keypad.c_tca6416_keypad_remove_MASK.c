
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tca6416_keypad_chip {int input; int irqnum; int use_polling; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct tca6416_keypad_chip*) ;
 struct tca6416_keypad_chip* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tca6416_keypad_chip*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct tca6416_keypad_chip *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->use_polling) {
  FUNC_1(VAR_1->irqnum, VAR_1);
  FUNC_0(VAR_1->irqnum);
 }

 FUNC_3(VAR_1->input);
 FUNC_4(VAR_1);

 return 0;
}
