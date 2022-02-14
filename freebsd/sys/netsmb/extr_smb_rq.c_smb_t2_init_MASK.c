
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct smb_t2rq {int t2_setupcount; int t2_fid; int t2_vc; struct smb_cred* t2_cred; int * t2_setup; int * t2_setupdata; struct smb_connobj* t2_source; } ;
struct smb_cred {int dummy; } ;
struct smb_connobj {int dummy; } ;


 int FUNC_0 (struct smb_t2rq*,int) ;
 int FUNC_1 (struct smb_connobj*,int *,int *) ;

int
FUNC_2(struct smb_t2rq *VAR_0, struct smb_connobj *VAR_1, u_short VAR_2,
 struct smb_cred *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, sizeof(*VAR_0));
 VAR_0->t2_source = VAR_1;
 VAR_0->t2_setupcount = 1;
 VAR_0->t2_setupdata = VAR_0->t2_setup;
 VAR_0->t2_setup[0] = VAR_2;
 VAR_0->t2_fid = 0xffff;
 VAR_0->t2_cred = VAR_3;
 VAR_4 = FUNC_1(VAR_1, &VAR_0->t2_vc, ((void*)0));
 if (VAR_4)
  return VAR_4;
 return 0;
}
