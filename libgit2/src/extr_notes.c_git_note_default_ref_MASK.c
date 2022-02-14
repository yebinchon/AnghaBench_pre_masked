
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char**,int *) ;
 int FUNC_4 (char*) ;

int FUNC_5(git_buf *VAR_0, git_repository *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0 && VAR_1);

 FUNC_2(VAR_0);

 if ((VAR_3 = FUNC_3(&VAR_2, VAR_1)) < 0)
  return VAR_3;

 FUNC_1(VAR_0, VAR_2, FUNC_4(VAR_2));
 return 0;
}
