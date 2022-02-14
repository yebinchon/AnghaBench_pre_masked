
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_memattr_t ;
struct TYPE_4__ {int flags; int phys_addr; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(vm_page_t VAR_1, vm_paddr_t VAR_2, vm_memattr_t VAR_3)
{

 FUNC_0((VAR_1->flags & VAR_0) != 0,
     ("vm_page_updatefake: bad page %p", VAR_1));
 VAR_1->phys_addr = VAR_2;
 FUNC_1(VAR_1, VAR_3);
}
