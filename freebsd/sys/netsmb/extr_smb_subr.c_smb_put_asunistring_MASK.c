
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct mbchain {int dummy; } ;
struct smb_rq {TYPE_1__* sr_vc; struct mbchain sr_rq; } ;
struct iconv_drv {int dummy; } ;
struct TYPE_2__ {struct iconv_drv* vc_toserver; } ;


 int FUNC_0 (struct iconv_drv*,int *,int ,int) ;
 int FUNC_1 (struct mbchain*,int ) ;

int
FUNC_2(struct smb_rq *VAR_0, const char *VAR_1)
{
 struct mbchain *VAR_2 = &VAR_0->sr_rq;
 struct iconv_drv *VAR_3 = VAR_0->sr_vc->vc_toserver;
 u_char VAR_4;
 int VAR_5;

 while (*VAR_1) {
  FUNC_0(VAR_3, &VAR_4, VAR_1++, 1);
  VAR_5 = FUNC_1(VAR_2, VAR_4);
  if (VAR_5)
   return VAR_5;
 }
 return FUNC_1(VAR_2, 0);
}
