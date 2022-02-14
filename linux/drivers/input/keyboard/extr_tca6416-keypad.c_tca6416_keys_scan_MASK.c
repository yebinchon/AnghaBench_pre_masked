
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tca6416_keypad_chip {int pinmask; int reg_input; struct tca6416_button* buttons; struct input_dev* input; } ;
struct tca6416_button {int type; int active_low; int code; } ;
struct input_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,unsigned int,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct tca6416_keypad_chip*,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct tca6416_keypad_chip *VAR_2)
{
 struct input_dev *VAR_3 = VAR_2->input;
 u16 VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_2, VAR_1, &VAR_4);
 if (VAR_6)
  return;

 VAR_4 &= VAR_2->pinmask;


 VAR_5 = VAR_4 ^ VAR_2->reg_input;
 VAR_2->reg_input = VAR_4;

 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < 16; VAR_7++) {
  if (VAR_5 & (1 << VAR_7)) {
   struct tca6416_button *VAR_9 = &VAR_2->buttons[VAR_8];
   unsigned int VAR_10 = VAR_9->type ?: VAR_0;
   int VAR_11 = ((VAR_4 & (1 << VAR_7)) ? 1 : 0)
      ^ VAR_9->active_low;

   FUNC_0(VAR_3, VAR_10, VAR_9->code, !!VAR_11);
   FUNC_1(VAR_3);
  }

  if (VAR_2->pinmask & (1 << VAR_7))
   VAR_8++;
 }
}
