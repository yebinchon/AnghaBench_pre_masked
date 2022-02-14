
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {int dummy; } ;
struct mbchain {int dummy; } ;
struct smb_rq {struct mbchain sr_rq; } ;
struct smb_cred {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct smb_vc*) ;
 int FUNC_2 (struct mbchain*,int) ;
 int FUNC_3 (struct mbchain*,int ) ;
 int FUNC_4 (int ,int ,struct smb_cred*,struct smb_rq**) ;
 int FUNC_5 (struct smb_rq*) ;
 int FUNC_6 (struct smb_rq*) ;
 int FUNC_7 (struct smb_rq*) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (struct smb_rq*) ;
 int FUNC_10 (struct smb_rq*) ;

int
FUNC_11(struct smb_vc *VAR_1, struct smb_cred *VAR_2)
{
 struct smb_rq *VAR_3;
 struct mbchain *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(FUNC_1(VAR_1), VAR_0, VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;
 VAR_4 = &VAR_3->sr_rq;
 FUNC_10(VAR_3);
 FUNC_2(VAR_4, 1);
 FUNC_9(VAR_3);
 FUNC_6(VAR_3);
 FUNC_3(VAR_4, 0);
 FUNC_5(VAR_3);
 VAR_5 = FUNC_8(VAR_3);
 FUNC_0("%d\n", VAR_5);
 FUNC_7(VAR_3);
 return VAR_5;
}
