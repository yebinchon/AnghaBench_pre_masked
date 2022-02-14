
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* field; } ;
typedef TYPE_2__ predicate_field_cmp ;
struct TYPE_8__ {int * obj; int * dyn; } ;
typedef TYPE_3__ actual_object ;
struct TYPE_6__ {int id; } ;


 scalar_t__ FUNC_0 (int *,int ) ;

int FUNC_1 (predicate_field_cmp *VAR_0, actual_object *VAR_1) {
  return (VAR_1->dyn != ((void*)0) && FUNC_0 (VAR_1->dyn, VAR_0->field->id)) ||
         (VAR_1->obj != ((void*)0) && FUNC_0 (VAR_1->obj, VAR_0->field->id));
}
