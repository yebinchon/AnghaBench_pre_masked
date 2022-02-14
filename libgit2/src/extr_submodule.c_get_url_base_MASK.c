
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent_path; } ;
typedef TYPE_1__ git_worktree ;
typedef int git_repository ;
typedef int git_remote ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__**,int *) ;
 int FUNC_8 (int **,int *) ;

__attribute__((used)) static int FUNC_9(git_buf *VAR_1, git_repository *VAR_2)
{
 int VAR_3;
 git_worktree *VAR_4 = ((void*)0);
 git_remote *VAR_5 = ((void*)0);

 if ((VAR_3 = FUNC_8(&VAR_5, VAR_2)) == 0) {
  VAR_3 = FUNC_0(VAR_1, FUNC_3(VAR_5));
  goto out;
 } else if (VAR_3 != VAR_0)
  goto out;
 else
  FUNC_1();


 if (FUNC_4(VAR_2)) {
  if ((VAR_3 = FUNC_7(&VAR_4, VAR_2)) < 0)
   goto out;
  VAR_3 = FUNC_0(VAR_1, VAR_4->parent_path);
 } else
  VAR_3 = FUNC_0(VAR_1, FUNC_5(VAR_2));

out:
 FUNC_2(VAR_5);
 FUNC_6(VAR_4);

 return VAR_3;
}
