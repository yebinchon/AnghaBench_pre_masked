
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_keymap_entry {int flags; unsigned int index; int len; int scancode; int keycode; } ;
struct input_dev {unsigned int keycodemax; int keycodesize; } ;
typedef int index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,unsigned int) ;
 int FUNC_1 (struct input_keymap_entry*,unsigned int*) ;
 int FUNC_2 (int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2,
        struct input_keymap_entry *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 if (!VAR_2->keycodesize)
  return -VAR_0;

 if (VAR_3->flags & VAR_1)
  VAR_4 = VAR_3->index;
 else {
  VAR_5 = FUNC_1(VAR_3, &VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_4 >= VAR_2->keycodemax)
  return -VAR_0;

 VAR_3->keycode = FUNC_0(VAR_2, VAR_4);
 VAR_3->index = VAR_4;
 VAR_3->len = sizeof(VAR_4);
 FUNC_2(VAR_3->scancode, &VAR_4, sizeof(VAR_4));

 return 0;
}
