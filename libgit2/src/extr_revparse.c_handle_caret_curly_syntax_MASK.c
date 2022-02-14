
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_object_t ;
typedef int git_object ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,scalar_t__) ;
 int FUNC_4 (int **,int ,int ,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(git_object **VAR_2, git_object *VAR_3, const char *VAR_4)
{
 git_object_t VAR_5;

 if (*VAR_4 == '\0')
  return FUNC_0(VAR_2, VAR_3);

 if (*VAR_4 == '/')
  return FUNC_4(VAR_2, FUNC_2(VAR_3), FUNC_1(VAR_3), VAR_4 + 1);

 VAR_5 = FUNC_5(VAR_4);

 if (VAR_5 == VAR_1)
  return VAR_0;

 return FUNC_3(VAR_2, VAR_3, VAR_5);
}
