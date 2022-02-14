
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {int dummy; } ;
struct smb_connobj {int co_interlock; } ;


 struct smb_connobj* FUNC_0 (struct smb_vc*) ;
 int FUNC_1 (struct smb_connobj*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct smb_vc *VAR_0)
{

 struct smb_connobj *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_3(&VAR_1->co_interlock);
 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->co_interlock);
}
