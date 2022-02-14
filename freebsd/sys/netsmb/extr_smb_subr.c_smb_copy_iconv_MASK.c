
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbchain {scalar_t__ mb_udata; } ;
struct iconv_drv {int dummy; } ;
typedef int caddr_t ;
typedef int c_caddr_t ;


 int FUNC_0 (struct iconv_drv*,int *,size_t*,int *,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct mbchain *VAR_0, c_caddr_t VAR_1, caddr_t VAR_2,
    size_t *VAR_3, size_t *VAR_4)
{
 int VAR_5;
 size_t VAR_6 = *VAR_3, VAR_7 = *VAR_4;

 VAR_5 = FUNC_0((struct iconv_drv*)VAR_0->mb_udata, &VAR_1, &VAR_6,
     &VAR_2, &VAR_7);
 if (VAR_6 != *VAR_3 || VAR_7 != *VAR_4) {
  *VAR_3 -= VAR_6;
  *VAR_4 -= VAR_7;
  return 0;
 } else
  return VAR_5;
}
