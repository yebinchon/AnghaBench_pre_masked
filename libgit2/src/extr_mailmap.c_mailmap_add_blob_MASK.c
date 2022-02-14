
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_object ;
typedef int git_mailmap ;
struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_blob ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ) ;
 int FUNC_6 (int **,int *,char const*) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(
 git_mailmap *VAR_2, git_repository *VAR_3, const char *VAR_4)
{
 git_object *VAR_5 = ((void*)0);
 git_blob *VAR_6 = ((void*)0);
 git_buf VAR_7 = VAR_0;
 int VAR_8;

 FUNC_0(VAR_2 && VAR_3);

 VAR_8 = FUNC_6(&VAR_5, VAR_3, VAR_4);
 if (VAR_8 < 0)
  goto cleanup;

 VAR_8 = FUNC_5((git_object **)&VAR_6, VAR_5, VAR_1);
 if (VAR_8 < 0)
  goto cleanup;

 VAR_8 = FUNC_1(&VAR_7, VAR_6);
 if (VAR_8 < 0)
  goto cleanup;

 VAR_8 = FUNC_7(VAR_2, VAR_7.ptr, VAR_7.size);
 if (VAR_8 < 0)
  goto cleanup;

cleanup:
 FUNC_3(&VAR_7);
 FUNC_2(VAR_6);
 FUNC_4(VAR_5);
 return VAR_8;
}
