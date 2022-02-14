
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_cred {int dummy; } ;
struct smb_connobj {int co_usecount; int co_interlock; int co_flags; int co_level; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct smb_connobj*,struct smb_cred*) ;
 int FUNC_2 (struct smb_connobj*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct smb_connobj *VAR_1, struct smb_cred *VAR_2)
{

 FUNC_4(&VAR_1->co_interlock);
 FUNC_2(VAR_1);
 if (VAR_1->co_usecount > 1) {
  VAR_1->co_usecount--;
  FUNC_3(&VAR_1->co_interlock);
  return;
 }
 if (VAR_1->co_usecount == 0) {
  FUNC_0("negative use_count for object %d", VAR_1->co_level);
  FUNC_3(&VAR_1->co_interlock);
  return;
 }
 VAR_1->co_usecount--;
 VAR_1->co_flags |= VAR_0;
 FUNC_3(&VAR_1->co_interlock);
 FUNC_1(VAR_1, VAR_2);
}
