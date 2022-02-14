
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ contents; int length; } ;
typedef TYPE_1__ git_vector ;
struct TYPE_8__ {char** strings; int count; } ;
typedef TYPE_2__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,char const*) ;
 int FUNC_7 (int *,char const*,char const*) ;
 int FUNC_8 (int *,char const*,char const*) ;
 int FUNC_9 (int *,char const*,char const*) ;

int FUNC_10(git_strarray *VAR_1, git_repository *VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5;
 git_vector VAR_6 = VAR_0;
 git_remote *VAR_7 = ((void*)0);

 FUNC_0(VAR_1 && VAR_2 && VAR_3 && VAR_4);

 if ((VAR_5 = FUNC_4(&VAR_7, VAR_2, VAR_3)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_2(VAR_4)) < 0)
  goto cleanup;

 if ((VAR_5 = FUNC_1(VAR_2, VAR_4)) < 0)
  goto cleanup;

 if ((VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4)) < 0)
  goto cleanup;

 if ((VAR_5 = FUNC_9(VAR_2, VAR_3, VAR_4)) < 0)
  goto cleanup;

 if ((VAR_5 = FUNC_8(VAR_2, VAR_3, VAR_4)) < 0)
  goto cleanup;

 if ((VAR_5 = FUNC_6(&VAR_6, VAR_7, VAR_4)) < 0)
  goto cleanup;

 VAR_1->count = VAR_6.length;
 VAR_1->strings = (char **) VAR_6.contents;

cleanup:
 if (VAR_5 < 0)
  FUNC_5(&VAR_6);

 FUNC_3(VAR_7);
 return VAR_5;
}
