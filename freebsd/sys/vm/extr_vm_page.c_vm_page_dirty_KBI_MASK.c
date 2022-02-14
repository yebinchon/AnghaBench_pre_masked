
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_4__ {int dirty; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(vm_page_t VAR_1)
{


 FUNC_0(FUNC_1(VAR_1), ("vm_page_dirty: page is invalid!"));
 VAR_1->dirty = VAR_0;
}
