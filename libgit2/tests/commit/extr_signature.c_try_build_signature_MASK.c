
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_time_t ;
typedef int git_signature ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*,char const*,int ,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1, git_time_t VAR_2, int VAR_3)
{
 git_signature *VAR_4;
 int VAR_5 = 0;

 if ((VAR_5 = FUNC_1(&VAR_4, VAR_0, VAR_1, VAR_2, VAR_3)) < 0)
  return VAR_5;

 FUNC_0((git_signature *)VAR_4);

 return VAR_5;
}
