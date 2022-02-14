
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdio_func*,unsigned char,unsigned int,int*) ;

void FUNC_1(struct sdio_func *VAR_1, unsigned char VAR_2,
      unsigned int VAR_3, int *VAR_4)
{
 if (VAR_3 < 0xF0 || VAR_3 > 0xFF) {
  if (VAR_4)
   *VAR_4 = -VAR_0;
  return;
 }
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
