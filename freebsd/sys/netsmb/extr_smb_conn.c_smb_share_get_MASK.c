
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;
struct smb_connobj {int co_interlock; } ;


 struct smb_connobj* FUNC_0 (struct smb_share*) ;
 int FUNC_1 (struct smb_connobj*,struct smb_cred*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct smb_share *VAR_0, struct smb_cred *VAR_1)
{
 struct smb_connobj *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_3(&VAR_2->co_interlock);
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 FUNC_2(&VAR_2->co_interlock);
 return VAR_3;
}
