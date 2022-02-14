
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_ossn {int ioc_opt; } ;
struct smb_vcspec {int flags; } ;
struct smb_vc {int dummy; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smb_vcspec*,int *,struct smb_cred*,struct smb_vc**) ;
 int FUNC_1 (struct smbioc_ossn*,struct smb_vcspec*) ;
 int FUNC_2 (struct smb_vcspec*) ;

int
FUNC_3(struct smbioc_ossn *VAR_2, struct smb_cred *VAR_3,
 struct smb_vc **VAR_4)
{
 struct smb_vc *VAR_5 = ((void*)0);
 struct smb_vcspec VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (VAR_2->ioc_opt & VAR_0)
  VAR_6.flags |= VAR_1;

 VAR_7 = FUNC_0(&VAR_6, ((void*)0), VAR_3, &VAR_5);
 FUNC_2(&VAR_6);
 return VAR_7;
}
