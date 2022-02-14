
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_odb ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **) ;

int FUNC_4(git_odb **VAR_0, const char *VAR_1)
{
 git_odb *VAR_2;

 FUNC_0(VAR_0 && VAR_1);

 *VAR_0 = ((void*)0);

 if (FUNC_3(&VAR_2) < 0)
  return -1;

 if (FUNC_1(VAR_2, VAR_1, 0, 0) < 0) {
  FUNC_2(VAR_2);
  return -1;
 }

 *VAR_0 = VAR_2;
 return 0;
}
