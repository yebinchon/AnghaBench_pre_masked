
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int **,int *) ;
 char* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(git_config **VAR_3, git_repository *VAR_4)
{
 const char *VAR_5 = FUNC_5(VAR_4);
 git_config *VAR_6 = ((void*)0);
 git_buf VAR_7 = VAR_0;
 int VAR_8;

 if (!VAR_5)
  return VAR_1;

 if ((VAR_8 = FUNC_1(&VAR_7, VAR_5, VAR_2)) < 0)
  return VAR_8;

 if ((VAR_8 = FUNC_3(&VAR_6, VAR_7.ptr)) < 0)
  goto cleanup;
 FUNC_0(&VAR_7);

 if ((VAR_8 = FUNC_4(VAR_3, VAR_6)) < 0)
  goto cleanup;

 VAR_8 = 0;

cleanup:
 if (VAR_6)
  FUNC_2(VAR_6);
 FUNC_0(&VAR_7);

 return VAR_8;
}
