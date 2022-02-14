
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_memattr_t ;
struct TYPE_5__ {int flags; int ref_count; int busy_lock; int oflags; int queue; int phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(vm_page_t VAR_4, vm_paddr_t VAR_5, vm_memattr_t VAR_6)
{

 if ((VAR_4->flags & VAR_0) != 0) {





  goto memattr;
 }
 VAR_4->phys_addr = VAR_5;
 VAR_4->queue = VAR_1;

 VAR_4->flags = VAR_0;

 VAR_4->oflags = VAR_3;
 VAR_4->busy_lock = VAR_2;

 VAR_4->ref_count = 1;
 FUNC_0(VAR_4);
memattr:
 FUNC_1(VAR_4, VAR_6);
}
