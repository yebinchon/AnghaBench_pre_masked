
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_connobj {int co_level; int co_usecount; int co_interlock; int * co_locker; scalar_t__ co_lockcnt; int co_lock; int co_children; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct smb_connobj*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct smb_connobj *VAR_1, int VAR_2, char *VAR_3, char *VAR_4)
{
 FUNC_0(&VAR_1->co_children);
 FUNC_3(&VAR_1->co_interlock, VAR_3, VAR_0);
 FUNC_1(&VAR_1->co_lock, "smblock");
 VAR_1->co_lockcnt = 0;
 VAR_1->co_locker = ((void*)0);
 VAR_1->co_level = VAR_2;
 VAR_1->co_usecount = 1;
 FUNC_5(&VAR_1->co_interlock);
 FUNC_2(VAR_1);
 FUNC_4(&VAR_1->co_interlock);
}
