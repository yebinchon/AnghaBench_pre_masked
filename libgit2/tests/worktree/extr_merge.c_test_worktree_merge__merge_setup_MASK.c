
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_annotated_commit ;
struct TYPE_12__ {TYPE_2__* worktree; } ;
struct TYPE_11__ {int gitdir; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_8__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int *,int const**,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,TYPE_2__*,int ) ;
 int * VAR_4 ;

void FUNC_12(void)
{
 git_reference *VAR_5, *VAR_6;
 git_annotated_commit *VAR_7, *VAR_8;
 git_buf VAR_9 = VAR_1;
 unsigned VAR_10;

 FUNC_2(FUNC_11(&VAR_5, VAR_3.worktree, VAR_2));
 FUNC_2(FUNC_4(&VAR_7, VAR_3.worktree, VAR_5));

 FUNC_2(FUNC_11(&VAR_6, VAR_3.worktree, VAR_0));
 FUNC_2(FUNC_4(&VAR_8, VAR_3.worktree, VAR_6));

 FUNC_2(FUNC_8(VAR_3.worktree,
      VAR_7, (const git_annotated_commit **)&VAR_8, 1));

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
  FUNC_5(&VAR_9);
  FUNC_2(FUNC_7(&VAR_9, "%s/%s",
       VAR_3.worktree->gitdir, VAR_4[VAR_10]));
  FUNC_1(FUNC_9(VAR_9.ptr));
 }

 FUNC_6(&VAR_9);
 FUNC_10(VAR_5);
 FUNC_10(VAR_6);
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
}
