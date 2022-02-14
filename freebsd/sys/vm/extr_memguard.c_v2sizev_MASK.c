
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_long ;
struct TYPE_3__ {int v; } ;
struct TYPE_4__ {TYPE_1__ memguard; } ;
struct vm_page {scalar_t__ queue; TYPE_2__ plinks; } ;


 int FUNC_0 (int,char*) ;
 struct vm_page* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,void*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct vm_page*) ;

__attribute__((used)) static u_long *
FUNC_5(vm_offset_t VAR_1)
{
 vm_paddr_t VAR_2;
 struct vm_page *VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 == 0)
  FUNC_2("MemGuard detected double-free of %p", (void *)VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(FUNC_4(VAR_3) && VAR_3->queue == VAR_0,
     ("MEMGUARD: Expected wired page %p in vtomgfifo!", VAR_3));
 return (&VAR_3->plinks.memguard.v);
}
