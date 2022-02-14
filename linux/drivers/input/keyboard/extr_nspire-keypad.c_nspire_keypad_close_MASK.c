
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nspire_keypad {int clk; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct nspire_keypad* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0)
{
 struct nspire_keypad *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk);
}
