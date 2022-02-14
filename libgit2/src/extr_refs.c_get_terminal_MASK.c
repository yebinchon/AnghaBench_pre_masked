
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,char const*) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(git_reference **VAR_4, git_repository *VAR_5, const char *VAR_6, int VAR_7)
{
 git_reference *VAR_8;
 int VAR_9 = 0;

 if (VAR_7 > VAR_3) {
  FUNC_0(VAR_1, "reference chain too deep (%d)", VAR_7);
  return VAR_0;
 }


 if ((VAR_9 = FUNC_2(&VAR_8, VAR_5, VAR_6)) < 0) {
  *VAR_4 = ((void*)0);
  return VAR_9;
 }

 if (FUNC_4(VAR_8) == VAR_2) {
  *VAR_4 = VAR_8;
  VAR_9 = 0;
 } else {
  VAR_9 = FUNC_5(VAR_4, VAR_5, FUNC_3(VAR_8), VAR_7 + 1);
  if (VAR_9 == VAR_0 && !*VAR_4)
   *VAR_4 = VAR_8;
  else
   FUNC_1(VAR_8);
 }

 return VAR_9;
}
