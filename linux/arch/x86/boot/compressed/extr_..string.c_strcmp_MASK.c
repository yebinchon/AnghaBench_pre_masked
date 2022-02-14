
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
 const unsigned char *VAR_3 = (const unsigned char *)VAR_1;
 int VAR_4 = 0;

 while (*VAR_2 || *VAR_3) {
  VAR_4 = *VAR_2 - *VAR_3;
  if (VAR_4)
   return VAR_4;
  VAR_2++;
  VAR_3++;
 }
 return 0;
}
