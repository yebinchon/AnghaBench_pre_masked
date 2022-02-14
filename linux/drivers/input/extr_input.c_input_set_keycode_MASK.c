
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_value {unsigned int member_1; int member_2; int member_0; } ;
struct input_keymap_entry {scalar_t__ keycode; } ;
struct input_dev {int (* setkeycode ) (struct input_dev*,struct input_keymap_entry const*,unsigned int*) ;int event_lock; int key; int keybit; int evbit; } ;


 int FUNC_0 (struct input_value*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct input_dev*,struct input_value*,int ) ;
 struct input_value VAR_4 ;
 int FUNC_4 (unsigned int,int ,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct input_dev*,struct input_keymap_entry const*,unsigned int*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

int FUNC_9(struct input_dev *VAR_5,
        const struct input_keymap_entry *VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_6->keycode > VAR_2)
  return -VAR_0;

 FUNC_5(&VAR_5->event_lock, VAR_7);

 VAR_9 = VAR_5->setkeycode(VAR_5, VAR_6, &VAR_8);
 if (VAR_9)
  goto out;


 FUNC_1(VAR_3, VAR_5->keybit);





 if (FUNC_8(VAR_1, VAR_5->evbit) &&
     !FUNC_4(VAR_8, VAR_5->keybit, VAR_2) &&
     FUNC_2(VAR_8, VAR_5->key)) {
  struct input_value VAR_10[] = {
   { VAR_1, VAR_8, 0 },
   VAR_4
  };

  FUNC_3(VAR_5, VAR_10, FUNC_0(VAR_10));
 }

 out:
 FUNC_6(&VAR_5->event_lock, VAR_7);

 return VAR_9;
}
