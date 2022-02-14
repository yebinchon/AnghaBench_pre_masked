
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct smb_rq {int sr_vc; int sr_mid; struct smb_cred* sr_cred; scalar_t__ sr_share; int sr_slock; } ;
struct smb_cred {int dummy; } ;
struct smb_connobj {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smb_rq*,int) ;
 int FUNC_1 (struct smb_connobj*,int *,scalar_t__*) ;
 int FUNC_2 (struct smb_rq*,int ) ;
 int FUNC_3 (scalar_t__,struct smb_cred*,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,struct smb_cred*,int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct smb_rq *VAR_1, struct smb_connobj *VAR_2, u_char VAR_3,
 struct smb_cred *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_1, sizeof(*VAR_1));
 FUNC_4(&VAR_1->sr_slock, "srslock");
 VAR_5 = FUNC_1(VAR_2, &VAR_1->sr_vc, &VAR_1->sr_share);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_5(VAR_1->sr_vc, VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;
 if (VAR_1->sr_share) {
  VAR_5 = FUNC_3(VAR_1->sr_share, VAR_4, VAR_0);
  if (VAR_5)
   return VAR_5;
 }
 VAR_1->sr_cred = VAR_4;
 VAR_1->sr_mid = FUNC_6(VAR_1->sr_vc);
 return FUNC_2(VAR_1, VAR_3);
}
