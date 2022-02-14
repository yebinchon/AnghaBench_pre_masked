
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char const*) ;

int FUNC_4(git_repository *VAR_1, const char *VAR_2)
{
 git_reference *VAR_3 = ((void*)0);
 int VAR_4;

 FUNC_0(VAR_1 && VAR_2);

 if ((VAR_4 = FUNC_3(&VAR_3, VAR_1, VAR_2)) < 0)
  goto out;

 VAR_4 = (FUNC_2(VAR_3) != VAR_0);
out:
 FUNC_1(VAR_3);

 return VAR_4;
}
