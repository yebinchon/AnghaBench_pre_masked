
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_3__ {int start; int end; } ;
typedef TYPE_1__ git_regmatch ;
typedef int git_regexp ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int **,int *,int ) ;
 int * FUNC_7 (int *,size_t) ;
 char* FUNC_8 (int const*) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int **,int *,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,char const*,int,TYPE_1__*) ;
 int FUNC_14 (int **,int *,int ) ;

__attribute__((used)) static int FUNC_15(git_object **VAR_4, git_reference **VAR_5, git_repository *VAR_6, const char *VAR_7, size_t VAR_8)
{
 git_reference *VAR_9 = ((void*)0);
 git_reflog *VAR_10 = ((void*)0);
 git_regexp VAR_11;
 int VAR_12 = -1;
 size_t VAR_13, VAR_14, VAR_15;
 const git_reflog_entry *VAR_16;
 const char *VAR_17;
 git_buf VAR_18 = VAR_0;

 VAR_15 = VAR_8;

 if (*VAR_7 != '\0' || *VAR_5 != ((void*)0))
  return VAR_1;

 if (FUNC_0(&VAR_11, "checkout: moving from (.*) to .*") < 0)
  return -1;

 if (FUNC_6(&VAR_9, VAR_6, VAR_3) < 0)
  goto cleanup;

 if (FUNC_11(&VAR_10, VAR_6, VAR_3) < 0)
  goto cleanup;

 VAR_14 = FUNC_9(VAR_10);

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  git_regmatch VAR_19[2];

  VAR_16 = FUNC_7(VAR_10, VAR_13);
  VAR_17 = FUNC_8(VAR_16);
  if (!VAR_17)
   continue;

  if (FUNC_13(&VAR_11, VAR_17, 2, VAR_19) < 0)
   continue;

  VAR_15--;

  if (VAR_15 > 0)
   continue;

  if ((FUNC_3(&VAR_18, VAR_17+VAR_19[1].start, VAR_19[1].end - VAR_19[1].start)) < 0)
   goto cleanup;

  if ((VAR_12 = FUNC_4(VAR_5, VAR_6, FUNC_1(&VAR_18))) == 0)
   goto cleanup;

  if (VAR_12 < 0 && VAR_12 != VAR_2)
   goto cleanup;

  VAR_12 = FUNC_14(VAR_4, VAR_6, FUNC_1(&VAR_18));

  goto cleanup;
 }

 VAR_12 = VAR_2;

cleanup:
 FUNC_5(VAR_9);
 FUNC_2(&VAR_18);
 FUNC_12(&VAR_11);
 FUNC_10(VAR_10);
 return VAR_12;
}
