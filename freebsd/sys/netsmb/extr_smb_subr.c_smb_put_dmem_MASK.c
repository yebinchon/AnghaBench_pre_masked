
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vc {struct iconv_drv* vc_toserver; } ;
struct mbchain {struct iconv_drv* mb_udata; int mb_copy; } ;
struct iconv_drv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smb_vc*) ;
 int FUNC_1 (struct mbchain*,char const*,size_t,int ) ;
 int FUNC_2 (struct mbchain*) ;
 int VAR_2 ;

int
FUNC_3(struct mbchain *VAR_3, struct smb_vc *VAR_4, const char *VAR_5,
 size_t VAR_6, int VAR_7)
{
 struct iconv_drv *VAR_8 = VAR_4->vc_toserver;

 if (VAR_6 == 0)
  return 0;
 if (VAR_8 == ((void*)0)) {
  return FUNC_1(VAR_3, VAR_5, VAR_6, VAR_1);
 }
 VAR_3->mb_copy = VAR_2;
 VAR_3->mb_udata = VAR_8;
 if (FUNC_0(VAR_4))
  FUNC_2(VAR_3);
 return FUNC_1(VAR_3, VAR_5, VAR_6, VAR_0);
}
