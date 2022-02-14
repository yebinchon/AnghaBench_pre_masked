
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_7__ {int (* pgo_dealloc ) (TYPE_1__*) ;} ;
struct TYPE_6__ {size_t type; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_4__** VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(vm_object_t VAR_1)
{

 FUNC_0(VAR_1);
 (*VAR_0[VAR_1->type]->pgo_dealloc) (VAR_1);
}
