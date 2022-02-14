
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa27x_keypad_platform_data {int direct_key_num; unsigned short* direct_key_map; unsigned short rotary0_up_key; unsigned short rotary0_down_key; unsigned short rotary0_rel_code; unsigned short rotary1_up_key; unsigned short rotary1_down_key; unsigned short rotary1_rel_code; scalar_t__ enable_rotary1; scalar_t__ enable_rotary0; int matrix_key_cols; int matrix_key_rows; int matrix_keymap_data; } ;
struct pxa27x_keypad {unsigned short* keycodes; int* rotary_rel_code; struct input_dev* input_dev; struct pxa27x_keypad_platform_data* pdata; } ;
struct input_dev {int keybit; int relbit; int keycodemax; } ;


 int FUNC_0 (unsigned short*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned short,int ) ;
 int FUNC_3 (int ,int *,int ,int ,unsigned short*,struct input_dev*) ;

__attribute__((used)) static int FUNC_4(struct pxa27x_keypad *VAR_2)
{
 const struct pxa27x_keypad_platform_data *VAR_3 = VAR_2->pdata;
 struct input_dev *VAR_4 = VAR_2->input_dev;
 unsigned short VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3->matrix_keymap_data, ((void*)0),
        VAR_3->matrix_key_rows,
        VAR_3->matrix_key_cols,
        VAR_2->keycodes, VAR_4);
 if (VAR_7)
  return VAR_7;





 VAR_4->keycodemax = FUNC_0(VAR_2->keycodes);


 for (VAR_6 = 0; VAR_6 < VAR_3->direct_key_num; VAR_6++) {
  VAR_5 = VAR_3->direct_key_map[VAR_6];
  VAR_2->keycodes[VAR_1 + VAR_6] = VAR_5;
  FUNC_2(VAR_5, VAR_4->keybit);
 }

 if (VAR_3->enable_rotary0) {
  if (VAR_3->rotary0_up_key && VAR_3->rotary0_down_key) {
   VAR_5 = VAR_3->rotary0_up_key;
   VAR_2->keycodes[VAR_1 + 0] = VAR_5;
   FUNC_2(VAR_5, VAR_4->keybit);

   VAR_5 = VAR_3->rotary0_down_key;
   VAR_2->keycodes[VAR_1 + 1] = VAR_5;
   FUNC_2(VAR_5, VAR_4->keybit);

   VAR_2->rotary_rel_code[0] = -1;
  } else {
   VAR_2->rotary_rel_code[0] = VAR_3->rotary0_rel_code;
   FUNC_2(VAR_3->rotary0_rel_code, VAR_4->relbit);
  }
 }

 if (VAR_3->enable_rotary1) {
  if (VAR_3->rotary1_up_key && VAR_3->rotary1_down_key) {
   VAR_5 = VAR_3->rotary1_up_key;
   VAR_2->keycodes[VAR_1 + 2] = VAR_5;
   FUNC_2(VAR_5, VAR_4->keybit);

   VAR_5 = VAR_3->rotary1_down_key;
   VAR_2->keycodes[VAR_1 + 3] = VAR_5;
   FUNC_2(VAR_5, VAR_4->keybit);

   VAR_2->rotary_rel_code[1] = -1;
  } else {
   VAR_2->rotary_rel_code[1] = VAR_3->rotary1_rel_code;
   FUNC_2(VAR_3->rotary1_rel_code, VAR_4->relbit);
  }
 }

 FUNC_1(VAR_0, VAR_4->keybit);

 return 0;
}
