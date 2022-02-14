
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_mailmap ;
struct TYPE_6__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(
 git_mailmap *VAR_1, const char *VAR_2, git_repository *VAR_3)
{
 const char *VAR_4 = VAR_3 ? FUNC_3(VAR_3) : ((void*)0);
 git_buf VAR_5 = VAR_0;
 git_buf VAR_6 = VAR_0;
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_5, VAR_2, VAR_4, ((void*)0));
 if (VAR_7 < 0)
  goto cleanup;

 VAR_7 = FUNC_1(&VAR_6, VAR_5.ptr);
 if (VAR_7 < 0)
  goto cleanup;

 VAR_7 = FUNC_4(VAR_1, VAR_6.ptr, VAR_6.size);
 if (VAR_7 < 0)
  goto cleanup;

cleanup:
 FUNC_0(&VAR_5);
 FUNC_0(&VAR_6);
 return VAR_7;
}
