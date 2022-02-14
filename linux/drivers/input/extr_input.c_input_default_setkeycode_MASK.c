
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct input_keymap_entry {int flags; unsigned int index; int keycode; } ;
struct input_dev {int keycodesize; unsigned int keycodemax; int keybit; scalar_t__ keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_keymap_entry const*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_2,
        const struct input_keymap_entry *VAR_3,
        unsigned int *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;
 int VAR_7;

 if (!VAR_2->keycodesize)
  return -VAR_0;

 if (VAR_3->flags & VAR_1) {
  VAR_5 = VAR_3->index;
 } else {
  VAR_6 = FUNC_3(VAR_3, &VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_5 >= VAR_2->keycodemax)
  return -VAR_0;

 if (VAR_2->keycodesize < sizeof(VAR_3->keycode) &&
   (VAR_3->keycode >> (VAR_2->keycodesize * 8)))
  return -VAR_0;

 switch (VAR_2->keycodesize) {
  case 1: {
   u8 *VAR_8 = (u8 *)VAR_2->keycode;
   *VAR_4 = VAR_8[VAR_5];
   VAR_8[VAR_5] = VAR_3->keycode;
   break;
  }
  case 2: {
   u16 *VAR_9 = (u16 *)VAR_2->keycode;
   *VAR_4 = VAR_9[VAR_5];
   VAR_9[VAR_5] = VAR_3->keycode;
   break;
  }
  default: {
   u32 *VAR_10 = (u32 *)VAR_2->keycode;
   *VAR_4 = VAR_10[VAR_5];
   VAR_10[VAR_5] = VAR_3->keycode;
   break;
  }
 }

 FUNC_0(*VAR_4, VAR_2->keybit);
 FUNC_1(VAR_3->keycode, VAR_2->keybit);

 for (VAR_7 = 0; VAR_7 < VAR_2->keycodemax; VAR_7++) {
  if (FUNC_2(VAR_2, VAR_7) == *VAR_4) {
   FUNC_1(*VAR_4, VAR_2->keybit);
   break;
  }
 }

 return 0;
}
