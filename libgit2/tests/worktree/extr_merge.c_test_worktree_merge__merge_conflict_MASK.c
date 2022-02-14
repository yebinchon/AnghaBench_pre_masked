
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_index_entry ;
typedef int git_index ;
struct TYPE_11__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_annotated_commit ;
struct TYPE_13__ {TYPE_2__* worktree; } ;
struct TYPE_12__ {int workdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (int ) ;
 TYPE_9__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,char*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (int const*) ;
 size_t FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,size_t) ;
 int FUNC_13 (TYPE_2__*,int const**,int,int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,TYPE_2__*,int ) ;
 int FUNC_16 (int **,TYPE_2__*) ;

void FUNC_17(void)
{
 git_buf VAR_4 = VAR_2, VAR_5 = VAR_2;
 git_reference *VAR_6;
 git_annotated_commit *VAR_7;
 git_index *VAR_8;
 const git_index_entry *VAR_9;
 size_t VAR_10, VAR_11 = 0;

 FUNC_3(FUNC_15(&VAR_6, VAR_3.worktree, VAR_0));
 FUNC_3(FUNC_5(&VAR_7, VAR_3.worktree, VAR_6));

 FUNC_3(FUNC_13(VAR_3.worktree,
      (const git_annotated_commit **)&VAR_7, 1, ((void*)0), ((void*)0)));

 FUNC_3(FUNC_16(&VAR_8, VAR_3.worktree));
 for (VAR_10 = 0; VAR_10 < FUNC_10(VAR_8); VAR_10++) {
  FUNC_0(VAR_9 = FUNC_12(VAR_8, VAR_10));

  if (FUNC_9(VAR_9))
   VAR_11++;
 }
 FUNC_2(VAR_11, 3);

 FUNC_14(VAR_6);
 FUNC_4(VAR_7);
 FUNC_11(VAR_8);

 FUNC_3(FUNC_7(&VAR_4, VAR_3.worktree->workdir, "branch_file.txt"));
 FUNC_3(FUNC_8(&VAR_5, VAR_4.ptr));
 FUNC_1(VAR_5.ptr, VAR_1);

 FUNC_6(&VAR_4);
 FUNC_6(&VAR_5);
}
