
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry {scalar_t__ type; unsigned int keycode; } ;
struct input_dev {struct key_entry* keycode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

struct key_entry *FUNC_0(struct input_dev *VAR_2,
         unsigned int VAR_3)
{
 struct key_entry *VAR_4;

 for (VAR_4 = VAR_2->keycode; VAR_4->type != VAR_0; VAR_4++)
  if (VAR_4->type == VAR_1 && VAR_3 == VAR_4->keycode)
   return VAR_4;

 return ((void*)0);
}
