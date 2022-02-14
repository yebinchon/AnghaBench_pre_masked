
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

int FUNC_1 (const char *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 VAR_2 = 0;
 VAR_1 = VAR_0;

 while (*VAR_1)
 {
  VAR_2 <<= 4;
  if (*VAR_1 >= '0' && *VAR_1 <= '9')
   VAR_2 += *VAR_1-'0';
  else if (*VAR_1 >= 'a' && *VAR_1 <= 'f')
   VAR_2 += 10 + *VAR_1-'a';
  else if (*VAR_1 >= 'A' && *VAR_1 <= 'F')
   VAR_2 += 10 + *VAR_1-'A';
  else
   FUNC_0 ("Bad hex number: %s",VAR_0);
  VAR_1++;
 }

 return VAR_2;
}
