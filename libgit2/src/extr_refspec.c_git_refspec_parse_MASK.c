
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_refspec ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,char const*,int) ;

int FUNC_5(git_refspec **VAR_0, const char *VAR_1, int VAR_2)
{
 git_refspec *VAR_3;
 FUNC_1(VAR_0 && VAR_1);

 *VAR_0 = ((void*)0);

 VAR_3 = FUNC_3(sizeof(git_refspec));
 FUNC_0(VAR_3);

 if (FUNC_4(VAR_3, VAR_1, !!VAR_2) != 0) {
  FUNC_2(VAR_3);
  return -1;
 }

 *VAR_0 = VAR_3;
 return 0;
}
