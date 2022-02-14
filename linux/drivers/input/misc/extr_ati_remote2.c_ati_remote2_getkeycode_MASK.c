
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct input_keymap_entry {int flags; unsigned int index; int len; int scancode; int keycode; } ;
struct input_dev {int dummy; } ;
struct ati_remote2 {int ** keycode; } ;
typedef int scancode ;
struct TYPE_3__ {unsigned int hw_code; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned int) ;
 struct ati_remote2* FUNC_2 (struct input_dev*) ;
 scalar_t__ FUNC_3 (struct input_keymap_entry*,unsigned int*) ;
 int FUNC_4 (int *,unsigned int*,int) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_5,
      struct input_keymap_entry *VAR_6)
{
 struct ati_remote2 *VAR_7 = FUNC_2(VAR_5);
 unsigned int VAR_8;
 int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 if (VAR_6->flags & VAR_3) {
  VAR_10 = VAR_6->index;
  if (VAR_10 >= VAR_0 *
    FUNC_0(VAR_4))
   return -VAR_2;

  VAR_8 = VAR_6->index / FUNC_0(VAR_4);
  VAR_9 = VAR_6->index % FUNC_0(VAR_4);
  VAR_11 = (VAR_8 << 8) + VAR_4[VAR_9].hw_code;
 } else {
  if (FUNC_3(VAR_6, &VAR_11))
   return -VAR_2;

  VAR_8 = VAR_11 >> 8;
  if (VAR_8 > VAR_1)
   return -VAR_2;

  VAR_9 = FUNC_1(VAR_11 & 0xff);
  if (VAR_9 < 0)
   return -VAR_2;

  VAR_10 = VAR_8 * FUNC_0(VAR_4) + VAR_9;
 }

 VAR_6->keycode = VAR_7->keycode[VAR_8][VAR_9];
 VAR_6->len = sizeof(VAR_11);
 FUNC_4(&VAR_6->scancode, &VAR_11, sizeof(VAR_11));
 VAR_6->index = VAR_10;

 return 0;
}
