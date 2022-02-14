
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 scalar_t__ FUNC_0 (int,int) ;

uintmax_t FUNC_1(const unsigned char **VAR_0)
{
 const unsigned char *VAR_1 = *VAR_0;
 unsigned char VAR_2 = *VAR_1++;
 uintmax_t VAR_3 = VAR_2 & 127;
 while (VAR_2 & 128) {
  VAR_3 += 1;
  if (!VAR_3 || FUNC_0(VAR_3, 7))
   return 0;
  VAR_2 = *VAR_1++;
  VAR_3 = (VAR_3 << 7) + (VAR_2 & 127);
 }
 *VAR_0 = VAR_1;
 return VAR_3;
}
