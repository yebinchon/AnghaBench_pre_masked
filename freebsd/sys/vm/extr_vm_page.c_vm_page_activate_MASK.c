
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_5__ {int oflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

void
FUNC_2(vm_page_t VAR_2)
{

 if ((VAR_2->oflags & VAR_1) != 0 || FUNC_1(VAR_2))
  return;
 FUNC_0(VAR_2, VAR_0);
}
