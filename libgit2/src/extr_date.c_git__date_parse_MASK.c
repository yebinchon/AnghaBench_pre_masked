
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int git_time_t ;


 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (char const*,int *,int*) ;
 int FUNC_2 (int *) ;

int FUNC_3(git_time_t *VAR_0, const char *VAR_1)
{
 time_t VAR_2;
 git_time_t VAR_3;
 int VAR_4, VAR_5=0;

 if (!FUNC_1(VAR_1, &VAR_3, &VAR_4)) {
  *VAR_0 = VAR_3;
  return 0;
 }

 if (FUNC_2(&VAR_2) == -1)
  return -1;

 *VAR_0 = FUNC_0(VAR_1, VAR_2, &VAR_5);
   return VAR_5;
}
