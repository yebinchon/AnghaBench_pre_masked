
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_cred {int dummy; } ;
struct smb_connobj {int co_usecount; int co_interlock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct smb_connobj*) ;
 scalar_t__ FUNC_2 (int *) ;

int
FUNC_3(struct smb_connobj *VAR_1, struct smb_cred *VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_2(&VAR_1->co_interlock) == VAR_0);
 VAR_1->co_usecount++;
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  VAR_1->co_usecount--;
 return VAR_3;
}
