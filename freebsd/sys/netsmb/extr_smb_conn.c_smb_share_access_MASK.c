
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_uid; } ;
struct smb_share {scalar_t__ ss_uid; int ss_mode; int ss_grp; } ;
struct smb_cred {struct ucred* scr_cred; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ucred*) ;
 scalar_t__ FUNC_1 (struct ucred*) ;

int
FUNC_2(struct smb_share *VAR_1, struct smb_cred *VAR_2, mode_t VAR_3)
{
 struct ucred *VAR_4 = VAR_2->scr_cred;

 if (FUNC_1(VAR_4) == 0 || VAR_4->cr_uid == VAR_1->ss_uid)
  return 0;
 VAR_3 >>= 3;
 if (!FUNC_0(VAR_1->ss_grp, VAR_4))
  VAR_3 >>= 3;
 return (VAR_1->ss_mode & VAR_3) == VAR_3 ? 0 : VAR_0;
}
