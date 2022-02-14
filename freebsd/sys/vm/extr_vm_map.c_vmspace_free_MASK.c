
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {scalar_t__ vm_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,char*) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vmspace*) ;

void
FUNC_4(struct vmspace *VAR_2)
{

 FUNC_0(VAR_0 | VAR_1, ((void*)0),
     "vmspace_free() called");

 if (VAR_2->vm_refcnt == 0)
  FUNC_2("vmspace_free: attempt to free already freed vmspace");

 if (FUNC_1(&VAR_2->vm_refcnt, -1) == 1)
  FUNC_3(VAR_2);
}
