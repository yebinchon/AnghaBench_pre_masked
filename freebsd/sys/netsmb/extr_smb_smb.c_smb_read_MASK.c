
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct uio {int uio_resid; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;


 int FUNC_0 (struct smb_share*,int ,int*,int*,struct uio*,struct smb_cred*) ;

int
FUNC_1(struct smb_share *VAR_0, u_int16_t VAR_1, struct uio *VAR_2,
 struct smb_cred *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_4 = VAR_2->uio_resid;
 while (VAR_4 > 0) {
  VAR_6 = 0;
  VAR_5 = VAR_4;
  VAR_7 = FUNC_0(VAR_0, VAR_1, &VAR_5, &VAR_6, VAR_2, VAR_3);
  if (VAR_7)
   break;
  VAR_4 -= VAR_6;
  if (VAR_6 < VAR_5)
   break;
 }
 return VAR_7;
}
