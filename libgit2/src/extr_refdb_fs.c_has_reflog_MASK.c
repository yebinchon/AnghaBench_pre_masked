
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *,char const*) ;

__attribute__((used)) static int FUNC_4(git_repository *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 git_buf VAR_4 = VAR_0;

 if (FUNC_3(&VAR_4, VAR_1, VAR_2) < 0)
  goto cleanup;

 VAR_3 = FUNC_2(FUNC_0(&VAR_4));

cleanup:
 FUNC_1(&VAR_4);
 return VAR_3;
}
