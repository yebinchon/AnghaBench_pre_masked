
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_5__ {int oflags; int * object; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(vm_page_t VAR_1)
{

 FUNC_0(VAR_1->object != ((void*)0),
     ("vm_page_deactivate_noreuse: page %p has no object", VAR_1));

 if ((VAR_1->oflags & VAR_0) == 0 && !FUNC_2(VAR_1))
  FUNC_1(VAR_1);
}
