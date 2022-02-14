
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char **VAR_0)
{
 char *VAR_1;
 int VAR_2;

 VAR_1 = *VAR_0;
 VAR_2 = 0;
 if ((*VAR_1 < '0') || (*VAR_1 > '9'))
  return -1;
 while ((*VAR_1 >= '0') && (*VAR_1 <= '9')) {
  VAR_2 = VAR_2 * 10 + (*VAR_1 - '0');
  VAR_1++;
 }
 *VAR_0 = VAR_1;
 return VAR_2;
}
