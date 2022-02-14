
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff_driver ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (size_t,int ) ;

int FUNC_4(
 git_diff_driver *VAR_2, const char *VAR_3, size_t VAR_4)
{
 git_buf VAR_5 = VAR_0;

 FUNC_0(VAR_2);

 FUNC_1(&VAR_5, VAR_3,
  FUNC_3(VAR_4, VAR_1));







 if (FUNC_2(&VAR_5))
  return 1;

 return 0;
}
