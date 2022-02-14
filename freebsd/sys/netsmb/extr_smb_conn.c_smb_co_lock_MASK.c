
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_connobj {int co_flags; int co_interlock; int co_lock; int co_lockcnt; int * co_locker; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;

int
FUNC_3(struct smb_connobj *VAR_3)
{

 FUNC_0(FUNC_2(&VAR_3->co_interlock) == VAR_2);
 for (;;) {
  if (VAR_3->co_flags & VAR_1)
   return VAR_0;
  if (VAR_3->co_locker == ((void*)0)) {
   VAR_3->co_locker = VAR_2;
   return 0;
  }
  if (VAR_3->co_locker == VAR_2) {
   VAR_3->co_lockcnt++;
   return 0;
  }
  FUNC_1(&VAR_3->co_lock, &VAR_3->co_interlock);
 }
}
