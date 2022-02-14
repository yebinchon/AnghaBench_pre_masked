
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_connobj {int co_interlock; int co_usecount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct smb_connobj *VAR_0)
{

 FUNC_1(&VAR_0->co_interlock);
 VAR_0->co_usecount++;
 FUNC_0(&VAR_0->co_interlock);
}
