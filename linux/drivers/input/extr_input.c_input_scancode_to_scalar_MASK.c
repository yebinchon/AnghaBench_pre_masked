
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct input_keymap_entry {int len; scalar_t__ scancode; } ;


 int VAR_0 ;

int FUNC_0(const struct input_keymap_entry *VAR_1,
        unsigned int *VAR_2)
{
 switch (VAR_1->len) {
 case 1:
  *VAR_2 = *((u8 *)VAR_1->scancode);
  break;

 case 2:
  *VAR_2 = *((u16 *)VAR_1->scancode);
  break;

 case 4:
  *VAR_2 = *((u32 *)VAR_1->scancode);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
