
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,char) ;

__attribute__((used)) static int FUNC_3(
 git_buf *VAR_0, size_t *VAR_1, size_t *VAR_2, const char *VAR_3)
{
 const char *VAR_4, *VAR_5 = VAR_3;
 int VAR_6;

 *VAR_1 = *VAR_2 = 0;

 if (!VAR_5)
  return 0;

 while (*VAR_5) {
  while (FUNC_0(*VAR_5)) VAR_5++;

  for (VAR_4 = VAR_5, VAR_6 = 0; *VAR_5 && !FUNC_0(*VAR_5); ++VAR_5) {
   if (*VAR_5 == '=')
    VAR_6 = 1;
  }

  if (VAR_5 > VAR_4) {
   (*VAR_1)++;
   if (VAR_6 || *VAR_4 == '-' || *VAR_4 == '+' || *VAR_4 == '!')
    (*VAR_2)++;

   if (VAR_6)
    FUNC_2(VAR_0, '=');
   FUNC_1(VAR_0, VAR_4, VAR_5 - VAR_4);
   FUNC_2(VAR_0, '\0');
  }
 }

 return 0;
}
