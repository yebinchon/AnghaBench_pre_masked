
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keycodesize; int keycodemax; int* evbit; int keybit; int * keycode; } ;
struct hid_input {struct input_dev* input; } ;
struct hid_device {int dummy; } ;
struct creative_sb0540 {int * keymap; struct input_dev* input_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int * VAR_3 ;
 struct creative_sb0540* FUNC_3 (struct hid_device*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_4,
  struct hid_input *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5->input;
 struct creative_sb0540 *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;

 VAR_7->input_dev = VAR_6;

 VAR_6->keycode = VAR_7->keymap;
 VAR_6->keycodesize = sizeof(unsigned short);
 VAR_6->keycodemax = FUNC_0(VAR_7->keymap);

 VAR_6->evbit[0] = FUNC_1(VAR_0) | FUNC_1(VAR_1);

 FUNC_4(VAR_7->keymap, VAR_3,
  sizeof(VAR_7->keymap));
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
  FUNC_5(VAR_7->keymap[VAR_8], VAR_6->keybit);
 FUNC_2(VAR_2, VAR_6->keybit);

 return 0;
}
