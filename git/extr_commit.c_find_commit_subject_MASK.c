
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

int FUNC_2(const char *VAR_0, const char **VAR_1)
{
 const char *VAR_2;
 const char *VAR_3 = VAR_0;

 while (*VAR_3 && (*VAR_3 != '\n' || VAR_3[1] != '\n'))
  VAR_3++;
 if (*VAR_3) {
  VAR_3 = FUNC_0(VAR_3 + 2);
  VAR_2 = FUNC_1(VAR_3, '\n');
 } else
  VAR_2 = VAR_3;

 *VAR_1 = VAR_3;

 return VAR_2 - VAR_3;
}
