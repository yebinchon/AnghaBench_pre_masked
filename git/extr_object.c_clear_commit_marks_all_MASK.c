
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object {scalar_t__ type; unsigned int flags; } ;
struct TYPE_4__ {TYPE_1__* parsed_objects; } ;
struct TYPE_3__ {int obj_hash_size; struct object** obj_hash; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->parsed_objects->obj_hash_size; VAR_3++) {
  struct object *VAR_4 = VAR_1->parsed_objects->obj_hash[VAR_3];
  if (VAR_4 && VAR_4->type == VAR_0)
   VAR_4->flags &= ~VAR_2;
 }
}
