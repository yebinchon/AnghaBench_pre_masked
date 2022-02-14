
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_worktree ;
typedef int git_repository ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,char*,char const*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char const*,char*) ;

int FUNC_9(git_worktree **VAR_2, git_repository *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 const char *VAR_5, *VAR_6;
 char *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (!FUNC_6(VAR_3)) {
  FUNC_2(VAR_1, "cannot open worktree of a non-worktree repo");
  VAR_8 = -1;
  goto out;
 }

 VAR_5 = FUNC_7(VAR_3);
 VAR_6 = FUNC_5(VAR_3);

 if ((VAR_8 = FUNC_4(&VAR_4, "..", VAR_6)) < 0)
  goto out;


 VAR_7 = FUNC_3(VAR_5);

 if ((VAR_8 = FUNC_8(VAR_2, VAR_4.ptr, VAR_5, VAR_7)) < 0)
  goto out;

out:
 FUNC_0(VAR_7);
 FUNC_1(&VAR_4);

 return VAR_8;
}
