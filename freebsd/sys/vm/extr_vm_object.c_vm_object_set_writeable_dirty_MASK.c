
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_4__ {scalar_t__ type; int flags; int generation; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(vm_object_t VAR_2)
{

 FUNC_0(VAR_2);


 if (VAR_2->type != VAR_0 &&
     (VAR_2->flags & VAR_1) == 0)
  return;
 FUNC_1(&VAR_2->generation, 1);
}
