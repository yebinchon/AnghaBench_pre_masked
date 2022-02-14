
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct TYPE_5__ {int busy_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(vm_page_t VAR_1)
{
 u_int VAR_2;

 FUNC_2(VAR_1);

 VAR_2 = VAR_1->busy_lock;
 for (;;) {
  if (FUNC_1(&VAR_1->busy_lock,
      &VAR_2, FUNC_0(1)))
   break;
 }
 if ((VAR_2 & VAR_0) != 0)
  FUNC_3(VAR_1);
}
