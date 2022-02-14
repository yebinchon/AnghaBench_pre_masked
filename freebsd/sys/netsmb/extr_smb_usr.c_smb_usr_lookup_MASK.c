
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbioc_lookup {scalar_t__ ioc_level; int ioc_flags; int ioc_sh; int ioc_ssn; } ;
struct smb_vcspec {struct smb_share* ssp; int flags; } ;
struct smb_vc {int dummy; } ;
struct smb_sharespec {int dummy; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smb_vcspec*,struct smb_sharespec*,struct smb_cred*,struct smb_vc**) ;
 int FUNC_1 (int *,struct smb_sharespec*) ;
 int FUNC_2 (int *,struct smb_vcspec*) ;
 int FUNC_3 (struct smb_vcspec*) ;

int
FUNC_4(struct smbioc_lookup *VAR_5, struct smb_cred *VAR_6,
 struct smb_vc **VAR_7, struct smb_share **VAR_8)
{
 struct smb_vc *VAR_9 = ((void*)0);
 struct smb_vcspec VAR_10;
 struct smb_sharespec VAR_11, *VAR_12 = ((void*)0);
 int VAR_13;

 if (VAR_5->ioc_level < VAR_3 || VAR_5->ioc_level > VAR_2)
  return VAR_0;
 VAR_13 = FUNC_2(&VAR_5->ioc_ssn, &VAR_10);
 if (VAR_13)
  return VAR_13;
 if (VAR_5->ioc_flags & VAR_1)
  VAR_10.flags |= VAR_4;

 if (VAR_5->ioc_level >= VAR_2) {
  VAR_13 = FUNC_1(&VAR_5->ioc_sh, &VAR_11);
  if (VAR_13)
   goto out;
  VAR_12 = &VAR_11;
 }
 VAR_13 = FUNC_0(&VAR_10, VAR_12, VAR_6, &VAR_9);
 if (VAR_13 == 0) {
  *VAR_7 = VAR_9;
  *VAR_8 = VAR_10.ssp;
 }
out:
 FUNC_3(&VAR_10);
 return VAR_13;
}
