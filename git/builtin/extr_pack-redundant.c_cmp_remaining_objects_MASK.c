
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_list {scalar_t__ all_objects_size; TYPE_1__* remaining_objects; } ;
struct TYPE_2__ {scalar_t__ size; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct pack_list *VAR_2 = *((struct pack_list **)VAR_0);
 struct pack_list *VAR_3 = *((struct pack_list **)VAR_1);

 if (VAR_2->remaining_objects->size == VAR_3->remaining_objects->size) {

  if (VAR_2->all_objects_size == VAR_3->all_objects_size)
   return 0;
  else if (VAR_2->all_objects_size < VAR_3->all_objects_size)
   return 1;
  else
   return -1;
 } else if (VAR_2->remaining_objects->size < VAR_3->remaining_objects->size) {

  return 1;
 } else {
  return -1;
 }
}
