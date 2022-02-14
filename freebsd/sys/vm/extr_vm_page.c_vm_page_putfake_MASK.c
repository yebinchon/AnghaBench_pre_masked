
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_6__ {int oflags; int flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(vm_page_t VAR_3)
{

 FUNC_0((VAR_3->oflags & VAR_1) != 0, ("managed %p", VAR_3));
 FUNC_0((VAR_3->flags & VAR_0) != 0,
     ("vm_page_putfake: bad page %p", VAR_3));
 if (FUNC_2(VAR_3))
  FUNC_3(VAR_3);
 FUNC_1(VAR_2, VAR_3);
}
