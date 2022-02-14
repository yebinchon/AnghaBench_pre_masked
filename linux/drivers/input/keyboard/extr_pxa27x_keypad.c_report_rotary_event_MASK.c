
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa27x_keypad {int* rotary_rel_code; unsigned char* keycodes; struct input_dev* input_dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*,unsigned char,int) ;
 int FUNC_2 (struct input_dev*,int,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct pxa27x_keypad *VAR_3, int VAR_4, int VAR_5)
{
 struct input_dev *VAR_6 = VAR_3->input_dev;

 if (VAR_5 == 0)
  return;

 if (VAR_3->rotary_rel_code[VAR_4] == -1) {
  int VAR_7 = VAR_1 + 2 * VAR_4 + (VAR_5 > 0 ? 0 : 1);
  unsigned char VAR_8 = VAR_3->keycodes[VAR_7];


  FUNC_0(VAR_6, VAR_0, VAR_2, VAR_7);
  FUNC_1(VAR_6, VAR_8, 1);
  FUNC_3(VAR_6);
  FUNC_0(VAR_6, VAR_0, VAR_2, VAR_7);
  FUNC_1(VAR_6, VAR_8, 0);
  FUNC_3(VAR_6);
 } else {
  FUNC_2(VAR_6, VAR_3->rotary_rel_code[VAR_4], VAR_5);
  FUNC_3(VAR_6);
 }
}
