
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int,int) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char const) ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char* FUNC_6 (char const*,char const) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static char *FUNC_8(const char *VAR_2)
{
 git_buf VAR_3;
 size_t VAR_4;
 const char *VAR_5;

 FUNC_0(VAR_2);

 VAR_4 = FUNC_7(VAR_2);
 if (!VAR_4)
  return FUNC_1(1, sizeof(char));

 if (FUNC_3(&VAR_3, VAR_4) < 0)
  return ((void*)0);

 while (*VAR_2 != '\0') {
  if ((VAR_5 = FUNC_6(VAR_0, *VAR_2)) != ((void*)0)) {
   FUNC_5(&VAR_3, '\\');
   FUNC_5(&VAR_3, VAR_1[VAR_5 - VAR_0]);
  } else {
   FUNC_5(&VAR_3, *VAR_2);
  }
  VAR_2++;
 }

 if (FUNC_4(&VAR_3))
  return ((void*)0);

 return FUNC_2(&VAR_3);
}
