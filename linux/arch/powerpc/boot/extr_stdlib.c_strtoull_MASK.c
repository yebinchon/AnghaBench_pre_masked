
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long long int FUNC_0(const char *VAR_0, char **VAR_1, int VAR_2)
{
 unsigned long long VAR_3 = 0;

 if (VAR_2 > 36)
  goto out;

 while (*VAR_0) {
  int VAR_4;

  if (*VAR_0 >= '0' && *VAR_0 <= '9' && *VAR_0 < '0' + VAR_2)
   VAR_4 = *VAR_0 - '0';
  else if (*VAR_0 >= 'A' && *VAR_0 < 'A' + VAR_2 - 10)
   VAR_4 = *VAR_0 - 'A' + 10;
  else if (*VAR_0 >= 'a' && *VAR_0 < 'a' + VAR_2 - 10)
   VAR_4 = *VAR_0 - 'a' + 10;
  else
   break;

  VAR_3 *= VAR_2;
  VAR_3 += VAR_4;
  VAR_0++;
 }

out:
 if (VAR_1)
  *VAR_1 = (char *)VAR_0;

 return VAR_3;
}
