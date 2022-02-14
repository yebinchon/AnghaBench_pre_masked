
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_6__ {scalar_t__ dirty; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(vm_page_t VAR_1)
{

 FUNC_1(VAR_1);
 if (VAR_1->dirty != VAR_0 && FUNC_0(VAR_1))
  FUNC_2(VAR_1);
}
