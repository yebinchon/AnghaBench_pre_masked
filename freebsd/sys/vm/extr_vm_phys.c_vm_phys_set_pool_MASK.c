
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_3__ {int pool; } ;



void
FUNC_0(int VAR_0, vm_page_t VAR_1, int VAR_2)
{
 vm_page_t VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < &VAR_1[1 << VAR_2]; VAR_3++)
  VAR_3->pool = VAR_0;
}
