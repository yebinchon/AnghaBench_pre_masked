
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_keymap_entry {unsigned int index; int len; int scancode; int keycode; } ;
struct input_dev {int dummy; } ;
struct hid_usage {scalar_t__ type; unsigned int hid; int code; } ;
struct hid_device {int dummy; } ;
typedef int scancode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct hid_usage* FUNC_0 (struct hid_device*,struct input_keymap_entry*,unsigned int*) ;
 struct hid_device* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_5,
          struct input_keymap_entry *VAR_6)
{
 struct hid_device *VAR_7 = FUNC_1(VAR_5);
 struct hid_usage *VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_7, VAR_6, &VAR_10);
 if (VAR_8) {
  VAR_6->keycode = VAR_8->type == VAR_1 ?
    VAR_8->code : VAR_4;
  VAR_6->index = VAR_10;
  VAR_9 = VAR_8->hid & (VAR_3 | VAR_2);
  VAR_6->len = sizeof(VAR_9);
  FUNC_2(VAR_6->scancode, &VAR_9, sizeof(VAR_9));
  return 0;
 }

 return -VAR_0;
}
