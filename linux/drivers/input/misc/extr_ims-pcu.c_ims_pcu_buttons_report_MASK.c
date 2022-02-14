
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct input_dev {int dummy; } ;
struct ims_pcu_buttons {unsigned short* keymap; struct input_dev* input; } ;
struct ims_pcu {struct ims_pcu_buttons buttons; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (struct input_dev*,unsigned short,unsigned long) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct ims_pcu *VAR_1, u32 VAR_2)
{
 struct ims_pcu_buttons *VAR_3 = &VAR_1->buttons;
 struct input_dev *VAR_4 = VAR_3->input;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  unsigned short VAR_6 = VAR_3->keymap[VAR_5];

  if (VAR_6 != VAR_0)
   FUNC_0(VAR_4, VAR_6, VAR_2 & (1UL << VAR_5));
 }

 FUNC_1(VAR_4);
}
