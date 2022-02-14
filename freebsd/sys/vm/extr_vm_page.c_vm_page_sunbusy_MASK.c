
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int u_int ;
struct TYPE_5__ {int busy_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(vm_page_t VAR_3)
{
 u_int VAR_4;

 FUNC_5(VAR_3);

 VAR_4 = VAR_3->busy_lock;
 for (;;) {
  if (FUNC_1(VAR_4) > 1) {
   if (FUNC_3(&VAR_3->busy_lock, &VAR_4,
       VAR_4 - VAR_1))
    break;
   continue;
  }
  FUNC_0((VAR_4 & ~VAR_0) == FUNC_2(1),
      ("vm_page_sunbusy: invalid lock state"));
  if (!FUNC_4(&VAR_3->busy_lock, &VAR_4, VAR_2))
   continue;
  if ((VAR_4 & VAR_0) == 0)
   break;
  FUNC_6(VAR_3);
  break;
 }
}
