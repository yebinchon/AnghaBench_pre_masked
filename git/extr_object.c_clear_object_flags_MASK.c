
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object {unsigned int flags; } ;
struct TYPE_4__ {TYPE_1__* parsed_objects; } ;
struct TYPE_3__ {int obj_hash_size; struct object** obj_hash; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0(unsigned VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2 < VAR_0->parsed_objects->obj_hash_size; VAR_2++) {
  struct object *VAR_3 = VAR_0->parsed_objects->obj_hash[VAR_2];
  if (VAR_3)
   VAR_3->flags &= ~VAR_1;
 }
}
