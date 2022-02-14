
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_list {struct object_list* next; struct object* item; } ;
struct object {int dummy; } ;



int FUNC_0(struct object_list *VAR_0, struct object *VAR_1)
{
 while (VAR_0) {
  if (VAR_0->item == VAR_1)
   return 1;
  VAR_0 = VAR_0->next;
 }
 return 0;
}
