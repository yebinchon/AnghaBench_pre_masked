
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 scalar_t__ FUNC_0 (int,int) ;

uintmax_t FUNC_1(const unsigned char *VAR_0, size_t *VAR_1)
{
 const unsigned char *VAR_2 = VAR_0;
 unsigned char VAR_3 = *VAR_2++;
 uintmax_t VAR_4 = VAR_3 & 127;
 while (VAR_3 & 128) {
  VAR_4 += 1;
  if (!VAR_4 || FUNC_0(VAR_4, 7)) {


   *VAR_1 = 0;
   return 0;
  }
  VAR_3 = *VAR_2++;
  VAR_4 = (VAR_4 << 7) + (VAR_3 & 127);
 }
 *VAR_1 = VAR_2 - VAR_0;
 return VAR_4;
}
