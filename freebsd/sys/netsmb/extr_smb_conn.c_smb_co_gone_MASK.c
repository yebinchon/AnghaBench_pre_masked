
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_cred {int dummy; } ;
struct smb_connobj {int (* co_free ) (struct smb_connobj*) ;int co_children; int co_interlock; struct smb_connobj* co_parent; int (* co_gone ) (struct smb_connobj*,struct smb_cred*) ;} ;


 int FUNC_0 (int *,struct smb_connobj*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct smb_connobj*) ;
 int FUNC_2 (struct smb_connobj*,struct smb_cred*) ;
 int VAR_1 ;
 int FUNC_3 (struct smb_connobj*,struct smb_cred*) ;
 int FUNC_4 (struct smb_connobj*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct smb_connobj *VAR_2, struct smb_cred *VAR_3)
{
 struct smb_connobj *VAR_4;

 if (VAR_2->co_gone)
  VAR_2->co_gone(VAR_2, VAR_3);
 VAR_4 = VAR_2->co_parent;
 if (VAR_4) {
  FUNC_6(&VAR_4->co_interlock);
  FUNC_1(VAR_4);
  FUNC_5(&VAR_4->co_interlock);
  FUNC_0(&VAR_4->co_children, VAR_2, VAR_1, VAR_0);
  FUNC_2(VAR_4, VAR_3);
 }
 if (VAR_2->co_free)
  VAR_2->co_free(VAR_2);
}
