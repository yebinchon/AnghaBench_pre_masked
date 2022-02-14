
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config_backend ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char const*) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(git_repository *VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
 git_buf VAR_6 = VAR_1;
 git_config_backend *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_2, VAR_0);
 if (!VAR_7)
  return -1;

 if ((VAR_8 = FUNC_1(&VAR_6, "submodule.%s.%s", VAR_3, VAR_4)) < 0)
  goto cleanup;

 if (VAR_5)
  VAR_8 = FUNC_4(VAR_7, VAR_6.ptr, VAR_5);
 else
  VAR_8 = FUNC_2(VAR_7, VAR_6.ptr);

 FUNC_0(&VAR_6);

cleanup:
 FUNC_3(VAR_7);
 return VAR_8;
}
