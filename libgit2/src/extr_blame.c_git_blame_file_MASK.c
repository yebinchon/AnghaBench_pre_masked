
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_blame_options ;
typedef int git_blame ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;

int FUNC_7(
  git_blame **VAR_1,
  git_repository *VAR_2,
  const char *VAR_3,
  git_blame_options *VAR_4)
{
 int VAR_5 = -1;
 git_blame_options VAR_6 = VAR_0;
 git_blame *VAR_7 = ((void*)0);

 FUNC_1(VAR_1 && VAR_2 && VAR_3);
 if ((VAR_5 = FUNC_6(&VAR_6, VAR_4, VAR_2)) < 0)
  goto on_error;

 VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_3);
 FUNC_0(VAR_7);

 if ((VAR_5 = FUNC_5(VAR_7)) < 0)
  goto on_error;

 if ((VAR_5 = FUNC_2(VAR_7)) < 0)
  goto on_error;

 *VAR_1 = VAR_7;
 return 0;

on_error:
 FUNC_4(VAR_7);
 return VAR_5;
}
