
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_keymap_entry {int dummy; } ;
struct input_dev {int (* getkeycode ) (struct input_dev*,struct input_keymap_entry*) ;int event_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct input_dev*,struct input_keymap_entry*) ;

int FUNC_3(struct input_dev *VAR_0, struct input_keymap_entry *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(&VAR_0->event_lock, VAR_2);
 VAR_3 = VAR_0->getkeycode(VAR_0, VAR_1);
 FUNC_1(&VAR_0->event_lock, VAR_2);

 return VAR_3;
}
