
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_oshare {int ioc_opt; } ;
struct smb_vc {int dummy; } ;
struct smb_sharespec {int dummy; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smb_vc*,struct smb_sharespec*,struct smb_cred*,struct smb_share**) ;
 int FUNC_1 (struct smb_share*,struct smb_cred*) ;
 int FUNC_2 (struct smb_share*,struct smb_cred*) ;
 int FUNC_3 (struct smbioc_oshare*,struct smb_sharespec*) ;
 int FUNC_4 (struct smb_vc*,struct smb_sharespec*,struct smb_cred*,struct smb_share**) ;

int
FUNC_5(struct smb_vc *VAR_1, struct smbioc_oshare *VAR_2,
 struct smb_cred *VAR_3, struct smb_share **VAR_4)
{
 struct smb_share *VAR_5;
 struct smb_sharespec VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_4(VAR_1, &VAR_6, VAR_3, &VAR_5);
 if (VAR_7 == 0) {
  *VAR_4 = VAR_5;
  return 0;
 }
 if ((VAR_2->ioc_opt & VAR_0) == 0)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_1, &VAR_6, VAR_3, &VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_5, VAR_3);
 if (VAR_7) {
  FUNC_1(VAR_5, VAR_3);
 } else
  *VAR_4 = VAR_5;
 return VAR_7;
}
