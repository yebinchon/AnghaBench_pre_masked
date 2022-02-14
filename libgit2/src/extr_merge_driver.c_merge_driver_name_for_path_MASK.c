
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const**,int *,int ,char const*,char*) ;
 char* VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_4(
 const char **VAR_2,
 git_repository *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 const char *VAR_6;
 int VAR_7;

 *VAR_2 = ((void*)0);

 if ((VAR_7 = FUNC_3(&VAR_6, VAR_3, 0, VAR_4, "merge")) < 0)
  return VAR_7;


 if (FUNC_1(VAR_6))
  *VAR_2 = VAR_1;


 else if (FUNC_0(VAR_6))
  *VAR_2 = VAR_0;

 else if (FUNC_2(VAR_6) && VAR_5)
  *VAR_2 = VAR_5;

 else if (FUNC_2(VAR_6))
  *VAR_2 = VAR_1;

 else
  *VAR_2 = VAR_6;

 return 0;
}
