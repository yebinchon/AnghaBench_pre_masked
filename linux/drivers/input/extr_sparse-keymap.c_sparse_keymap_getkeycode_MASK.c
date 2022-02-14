
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry {scalar_t__ type; int code; int keycode; } ;
struct input_keymap_entry {int flags; int len; int scancode; int index; int keycode; } ;
struct input_dev {scalar_t__ keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct input_dev*,struct key_entry const*) ;
 struct key_entry* FUNC_2 (struct input_dev*,struct input_keymap_entry*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_3,
        struct input_keymap_entry *VAR_4)
{
 const struct key_entry *VAR_5;

 if (VAR_3->keycode) {
  VAR_5 = FUNC_2(VAR_3, VAR_4);
  if (VAR_5 && VAR_5->type == VAR_2) {
   VAR_4->keycode = VAR_5->keycode;
   if (!(VAR_4->flags & VAR_1))
    VAR_4->index =
     FUNC_1(VAR_3, VAR_5);
   VAR_4->len = sizeof(VAR_5->code);
   FUNC_0(VAR_4->scancode, &VAR_5->code, sizeof(VAR_5->code));
   return 0;
  }
 }

 return -VAR_0;
}
