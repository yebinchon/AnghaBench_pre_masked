
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 char *VAR_5 = VAR_2;

 for (; VAR_0 < VAR_1; VAR_0++) {
  *VAR_5 = *VAR_0;
  VAR_4++;
  if (VAR_4 >= (VAR_3 - 1))
   break;
  if (*VAR_5++ == '\n')
   break;
 }
 *VAR_5 = '\0';
 return (VAR_4);
}
