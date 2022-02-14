
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(
 git_repository *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 git_buf VAR_4 = VAR_0,
  VAR_5 = VAR_0;
 int VAR_6 = -1;

 if (FUNC_2(&VAR_4, "remote.%s", VAR_2) < 0)
  goto cleanup;

 if (VAR_3 &&
  (FUNC_2(&VAR_5, "remote.%s", VAR_3) < 0))
   goto cleanup;

 VAR_6 = FUNC_3(
  VAR_1,
  FUNC_0(&VAR_4),
  VAR_3 ? FUNC_0(&VAR_5) : ((void*)0));

cleanup:
 FUNC_1(&VAR_4);
 FUNC_1(&VAR_5);

 return VAR_6;
}
