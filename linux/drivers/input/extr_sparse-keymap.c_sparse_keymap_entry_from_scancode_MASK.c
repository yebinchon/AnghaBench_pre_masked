
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry {scalar_t__ type; unsigned int code; } ;
struct input_dev {struct key_entry* keycode; } ;


 scalar_t__ VAR_0 ;

struct key_entry *FUNC_0(struct input_dev *VAR_1,
          unsigned int VAR_2)
{
 struct key_entry *VAR_3;

 for (VAR_3 = VAR_1->keycode; VAR_3->type != VAR_0; VAR_3++)
  if (VAR_2 == VAR_3->code)
   return VAR_3;

 return ((void*)0);
}
