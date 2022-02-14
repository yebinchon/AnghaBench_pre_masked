
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_11__ {int oflags; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(vm_object_t VAR_3, vm_page_t VAR_4)
{

 FUNC_1(VAR_3);
 if (VAR_3->type == VAR_1) {
  FUNC_0((VAR_4->oflags & VAR_2) == 0, ("unmanaged %p", VAR_4));
  FUNC_3(VAR_4);
  (void)FUNC_4(VAR_4);
  FUNC_5(VAR_4);
 } else if (VAR_3->type == VAR_0)
  FUNC_2(VAR_3, VAR_4);
}
