
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct TYPE_3__ {int busy_lock; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(vm_page_t VAR_2)
{
 u_int VAR_3;

 VAR_3 = VAR_2->busy_lock;
 return ((VAR_3 & VAR_0) != 0 && VAR_3 != VAR_1);
}
