
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max7359_keypad {int client; } ;
struct input_dev {int dummy; } ;


 struct max7359_keypad* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0)
{
 struct max7359_keypad *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->client);

 return 0;
}
