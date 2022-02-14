
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_data {int t19_num_keys; scalar_t__* t19_keymap; } ;
struct input_dev {char* name; int propbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_8,
       struct mxt_data *VAR_9)
{
 int VAR_10;

 VAR_8->name = "Atmel maXTouch Touchpad";

 FUNC_0(VAR_5, VAR_8->propbit);

 FUNC_1(VAR_8, VAR_2, VAR_7);
 FUNC_1(VAR_8, VAR_3, VAR_7);
 FUNC_1(VAR_8, VAR_0,
     VAR_7);
 FUNC_1(VAR_8, VAR_1,
     VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_9->t19_num_keys; VAR_10++)
  if (VAR_9->t19_keymap[VAR_10] != VAR_6)
   FUNC_2(VAR_8, VAR_4,
          VAR_9->t19_keymap[VAR_10]);
}
