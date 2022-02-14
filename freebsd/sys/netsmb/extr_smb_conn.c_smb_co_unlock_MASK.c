
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_connobj {scalar_t__ co_locker; scalar_t__ co_lockcnt; int co_lock; int co_interlock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(struct smb_connobj *VAR_1)
{

 FUNC_0(FUNC_2(&VAR_1->co_interlock) == VAR_0);
 FUNC_0(VAR_1->co_locker == VAR_0);
 if (VAR_1->co_lockcnt != 0) {
  VAR_1->co_lockcnt--;
  return;
 }
 VAR_1->co_locker = ((void*)0);
 FUNC_1(&VAR_1->co_lock);
}
