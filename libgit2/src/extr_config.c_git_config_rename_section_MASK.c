
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct rename_data {scalar_t__ old_len; TYPE_1__* name; int * config; } ;
typedef int git_repository ;
typedef int git_config ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char,char const*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int *,int ,int ,struct rename_data*) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (int ,char) ;
 scalar_t__ FUNC_10 (char const*) ;

int FUNC_11(
 git_repository *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 git_config *VAR_6;
 git_buf VAR_7 = VAR_0, VAR_8 = VAR_0;
 int VAR_9 = 0;
 struct rename_data VAR_10;

 FUNC_4(&VAR_7, VAR_4);

 if ((VAR_9 = FUNC_3(&VAR_7, "\\..+")) < 0)
  goto cleanup;

 if ((VAR_9 = FUNC_7(&VAR_6, VAR_3)) < 0)
  goto cleanup;

 VAR_10.config = VAR_6;
 VAR_10.name = &VAR_8;
 VAR_10.old_len = FUNC_10(VAR_4) + 1;

 if ((VAR_9 = FUNC_2(&VAR_8, '.', VAR_5, "")) < 0)
  goto cleanup;

 if (VAR_5 != ((void*)0) &&
     (VAR_9 = FUNC_8(VAR_8.ptr, FUNC_9(VAR_8.ptr, '.'))) < 0)
 {
  FUNC_6(
   VAR_1, "invalid config section '%s'", VAR_5);
  goto cleanup;
 }

 VAR_9 = FUNC_5(
  VAR_6, FUNC_0(&VAR_7), VAR_2, &VAR_10);

cleanup:
 FUNC_1(&VAR_7);
 FUNC_1(&VAR_8);

 return VAR_9;
}
