
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_keymap_entry {unsigned int keycode; } ;
struct input_dev {int keybit; } ;
struct hid_usage {scalar_t__ type; unsigned int code; int hid; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*,unsigned int,int ) ;
 scalar_t__ FUNC_2 (struct hid_device*,int ,unsigned int,int *) ;
 struct hid_usage* FUNC_3 (struct hid_device*,struct input_keymap_entry const*,int *) ;
 struct hid_device* FUNC_4 (struct input_dev*) ;
 int VAR_3 ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_4,
          const struct input_keymap_entry *VAR_5,
          unsigned int *VAR_6)
{
 struct hid_device *VAR_7 = FUNC_4(VAR_4);
 struct hid_usage *VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_5, ((void*)0));
 if (VAR_8) {
  *VAR_6 = VAR_8->type == VAR_1 ?
    VAR_8->code : VAR_2;
  VAR_8->code = VAR_5->keycode;

  FUNC_0(*VAR_6, VAR_4->keybit);
  FUNC_5(VAR_8->code, VAR_4->keybit);
  FUNC_1("Assigned keycode %d to HID usage code %x\n",
   VAR_8->code, VAR_8->hid);





  if (FUNC_2(VAR_7, VAR_3, *VAR_6, ((void*)0)))
   FUNC_5(*VAR_6, VAR_4->keybit);

  return 0;
 }

 return -VAR_0;
}
