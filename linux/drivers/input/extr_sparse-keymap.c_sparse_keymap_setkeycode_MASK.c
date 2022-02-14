
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry {scalar_t__ type; unsigned int keycode; } ;
struct input_keymap_entry {unsigned int keycode; } ;
struct input_dev {int keybit; scalar_t__ keycode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct input_dev*,unsigned int) ;
 struct key_entry* FUNC_3 (struct input_dev*,struct input_keymap_entry const*) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_2,
        const struct input_keymap_entry *VAR_3,
        unsigned int *VAR_4)
{
 struct key_entry *VAR_5;

 if (VAR_2->keycode) {
  VAR_5 = FUNC_3(VAR_2, VAR_3);
  if (VAR_5 && VAR_5->type == VAR_1) {
   *VAR_4 = VAR_5->keycode;
   VAR_5->keycode = VAR_3->keycode;
   FUNC_1(VAR_3->keycode, VAR_2->keybit);
   if (!FUNC_2(VAR_2, *VAR_4))
    FUNC_0(*VAR_4, VAR_2->keybit);
   return 0;
  }
 }

 return -VAR_0;
}
