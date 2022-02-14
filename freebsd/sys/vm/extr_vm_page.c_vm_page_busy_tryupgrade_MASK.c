
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct TYPE_4__ {int busy_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(vm_page_t VAR_2)
{
 u_int VAR_3;

 FUNC_4(VAR_2);

 VAR_3 = VAR_2->busy_lock;
 for (;;) {
  if (FUNC_1(VAR_3) > 1)
   return (0);
  FUNC_0((VAR_3 & ~VAR_0) == FUNC_2(1),
      ("vm_page_busy_tryupgrade: invalid lock state"));
  if (!FUNC_3(&VAR_2->busy_lock, &VAR_3,
      VAR_1 | (VAR_3 & VAR_0)))
   continue;
  return (1);
 }
}
