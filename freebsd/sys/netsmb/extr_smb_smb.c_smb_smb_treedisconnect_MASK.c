
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_share {scalar_t__ ss_tid; } ;
struct mbchain {int dummy; } ;
struct smb_rq {struct mbchain sr_rq; } ;
struct smb_cred {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct smb_share*) ;
 int FUNC_2 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_3 (struct smb_rq*) ;
 int FUNC_4 (struct smb_rq*) ;
 int FUNC_5 (struct smb_rq*) ;
 int FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*) ;

int
FUNC_9(struct smb_share *VAR_2, struct smb_cred *VAR_3)
{
 struct smb_rq *VAR_4;
 struct mbchain *VAR_5;
 int VAR_6;

 if (VAR_2->ss_tid == VAR_1)
  return 0;
 VAR_6 = FUNC_2(FUNC_1(VAR_2), VAR_0, VAR_3, &VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_5 = &VAR_4->sr_rq;
 FUNC_8(VAR_4);
 FUNC_7(VAR_4);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);
 VAR_6 = FUNC_6(VAR_4);
 FUNC_0("%d\n", VAR_6);
 FUNC_5(VAR_4);
 VAR_2->ss_tid = VAR_1;
 return VAR_6;
}
