
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct uio {int uio_resid; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smb_share*,int ,int*,int*,struct uio*,struct smb_cred*) ;

int
FUNC_1(struct smb_share *VAR_1, u_int16_t VAR_2, struct uio *VAR_3,
 struct smb_cred *VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7, VAR_8;
 struct uio VAR_9;

 VAR_7 = VAR_3->uio_resid;
 VAR_9 = *VAR_3;
 while (VAR_7 > 0) {
  VAR_8 = 0;
  VAR_6 = VAR_7;
  VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_6, &VAR_8, VAR_3, VAR_4);
  if (VAR_5)
   break;
  if (VAR_8 < VAR_6) {
   VAR_5 = VAR_0;
   break;
  }
  VAR_7 -= VAR_8;
 }
 if (VAR_5) {







  *VAR_3 = VAR_9;
 }
 return VAR_5;
}
