
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxt_data {int t19_num_keys; scalar_t__* t19_keymap; struct input_dev* input_dev; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct input_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct mxt_data *VAR_1, u8 *VAR_2)
{
 struct input_dev *VAR_3 = VAR_1->input_dev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->t19_num_keys; VAR_4++) {
  if (VAR_1->t19_keymap[VAR_4] == VAR_0)
   continue;


  FUNC_1(VAR_3, VAR_1->t19_keymap[VAR_4],
     !(VAR_2[1] & FUNC_0(VAR_4)));
 }
}
