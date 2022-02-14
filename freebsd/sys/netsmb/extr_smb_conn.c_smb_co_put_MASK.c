
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_cred {int dummy; } ;
struct smb_connobj {int co_usecount; int co_flags; int co_interlock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct smb_connobj*,struct smb_cred*) ;
 int FUNC_2 (struct smb_connobj*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct smb_connobj *VAR_1, struct smb_cred *VAR_2)
{

 FUNC_4(&VAR_1->co_interlock);
 if (VAR_1->co_usecount > 1) {
  VAR_1->co_usecount--;
 } else if (VAR_1->co_usecount == 1) {
  VAR_1->co_usecount--;
  VAR_1->co_flags |= VAR_0;
 } else {
  FUNC_0("negative usecount");
 }
 FUNC_2(VAR_1);
 FUNC_3(&VAR_1->co_interlock);
 if ((VAR_1->co_flags & VAR_0) == 0)
  return;
 FUNC_1(VAR_1, VAR_2);
}
