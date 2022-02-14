
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_connobj {scalar_t__ co_lockcnt; scalar_t__ co_flags; int * co_locker; int co_lock; int co_interlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct smb_connobj *VAR_0)
{

 FUNC_1(&VAR_0->co_interlock);
 FUNC_0(&VAR_0->co_lock);
 VAR_0->co_locker = ((void*)0);
 VAR_0->co_flags = 0;
 VAR_0->co_lockcnt = 0;
}
