
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_worktree ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_11__ {TYPE_1__* worktree; TYPE_3__* repo; } ;
struct TYPE_10__ {int workdir; } ;
struct TYPE_8__ {int gitdir; } ;


 unsigned int FUNC_0 (char const**) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_6__ VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int **,TYPE_3__*,char*,int ,int *) ;
 int FUNC_8 (int ) ;

void FUNC_9(void)
{
 const char *VAR_2[] = { "HEAD", "commondir", "gitdir", "index" };
 git_worktree *VAR_3;
 git_buf VAR_4 = VAR_0;
 unsigned VAR_5;



 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  FUNC_3(FUNC_5(&VAR_4,
       VAR_1.worktree->gitdir, VAR_2[VAR_5]));
  FUNC_3(FUNC_8(VAR_4.ptr));
 }

 FUNC_3(FUNC_5(&VAR_4, VAR_1.repo->workdir, "../testrepo-worktree"));
 FUNC_2(FUNC_7(&VAR_3, VAR_1.repo, "worktree-new", VAR_4.ptr, ((void*)0)));


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  FUNC_3(FUNC_5(&VAR_4,
       VAR_1.worktree->gitdir, VAR_2[VAR_5]));
  FUNC_1(!FUNC_6(VAR_4.ptr));
 }

 FUNC_4(&VAR_4);
}
