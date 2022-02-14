
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenkbd_key {int pressed; int keycode; } ;
struct xenkbd_info {struct input_dev* kbd; struct input_dev* ptr; } ;
struct input_dev {int key; int keybit; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct xenkbd_info *VAR_1,
        struct xenkbd_key *VAR_2)
{
 struct input_dev *VAR_3;
 int VAR_4 = VAR_2->pressed;

 if (FUNC_3(VAR_2->keycode, VAR_1->ptr->keybit)) {
  VAR_3 = VAR_1->ptr;
 } else if (FUNC_3(VAR_2->keycode, VAR_1->kbd->keybit)) {
  VAR_3 = VAR_1->kbd;
  if (VAR_2->pressed && FUNC_3(VAR_2->keycode, VAR_1->kbd->key))
   VAR_4 = 2;
 } else {
  FUNC_2("unhandled keycode 0x%x\n", VAR_2->keycode);
  return;
 }

 if (FUNC_4(!VAR_3))
  return;

 FUNC_0(VAR_3, VAR_0, VAR_2->keycode, VAR_4);
 FUNC_1(VAR_3);
}
