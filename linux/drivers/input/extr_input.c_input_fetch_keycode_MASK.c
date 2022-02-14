
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct input_dev {int keycodesize; scalar_t__ keycode; } ;



__attribute__((used)) static unsigned int FUNC_0(struct input_dev *VAR_0,
     unsigned int VAR_1)
{
 switch (VAR_0->keycodesize) {
 case 1:
  return ((u8 *)VAR_0->keycode)[VAR_1];

 case 2:
  return ((u16 *)VAR_0->keycode)[VAR_1];

 default:
  return ((u32 *)VAR_0->keycode)[VAR_1];
 }
}
