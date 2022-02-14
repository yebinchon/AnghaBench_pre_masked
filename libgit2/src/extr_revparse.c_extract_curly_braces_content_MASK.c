
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const) ;

__attribute__((used)) static int FUNC_3(git_buf *VAR_1, const char *VAR_2, size_t *VAR_3)
{
 FUNC_1(VAR_1);

 FUNC_0(VAR_2[*VAR_3] == '^' || VAR_2[*VAR_3] == '@');

 (*VAR_3)++;

 if (VAR_2[*VAR_3] == '\0' || VAR_2[*VAR_3] != '{')
  return VAR_0;

 (*VAR_3)++;

 while (VAR_2[*VAR_3] != '}') {
  if (VAR_2[*VAR_3] == '\0')
   return VAR_0;

  FUNC_2(VAR_1, VAR_2[(*VAR_3)++]);
 }

 (*VAR_3)++;

 return 0;
}
