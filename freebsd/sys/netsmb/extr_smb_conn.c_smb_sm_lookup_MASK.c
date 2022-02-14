
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vcspec {int flags; struct smb_share* ssp; } ;
struct smb_vc {int dummy; } ;
struct smb_sharespec {int dummy; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smb_vc*,struct smb_sharespec*,struct smb_cred*,struct smb_share**) ;
 int FUNC_1 (struct smb_share*,struct smb_cred*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct smb_vcspec*,struct smb_sharespec*,struct smb_cred*,struct smb_vc**) ;
 int FUNC_4 () ;
 int FUNC_5 (struct smb_share*,struct smb_cred*) ;
 int FUNC_6 (struct smb_vc*,struct smb_cred*) ;
 int FUNC_7 (struct smb_vcspec*,struct smb_cred*,struct smb_vc**) ;
 int FUNC_8 (struct smb_vc*) ;
 int FUNC_9 (struct smb_vc*,struct smb_cred*) ;

int
FUNC_10(struct smb_vcspec *VAR_1, struct smb_sharespec *VAR_2,
 struct smb_cred *VAR_3, struct smb_vc **VAR_4)
{
 struct smb_vc *VAR_5;
 struct smb_share *VAR_6 = ((void*)0);
 int VAR_7;

 *VAR_4 = VAR_5 = ((void*)0);

 VAR_7 = FUNC_2();
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_7 == 0 || (VAR_1->flags & VAR_0) == 0) {
  FUNC_4();
  return VAR_7;
 }
 VAR_7 = FUNC_3(VAR_1, ((void*)0), VAR_3, &VAR_5);
 if (VAR_7) {
  VAR_7 = FUNC_7(VAR_1, VAR_3, &VAR_5);
  if (VAR_7)
   goto out;
  VAR_7 = FUNC_6(VAR_5, VAR_3);
  if (VAR_7)
   goto out;
 }
 if (VAR_2 == ((void*)0))
  goto out;
 VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_3, &VAR_6);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_5(VAR_6, VAR_3);
 if (VAR_7 == 0)
  VAR_1->ssp = VAR_6;
 else
  FUNC_1(VAR_6, VAR_3);
out:
 FUNC_4();
 if (VAR_7 == 0)
  *VAR_4 = VAR_5;
 else if (VAR_5) {
  FUNC_8(VAR_5);
  FUNC_9(VAR_5, VAR_3);
 }
 return VAR_7;
}
