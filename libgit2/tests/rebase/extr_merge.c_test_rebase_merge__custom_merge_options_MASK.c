
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ merge_options; } ;
typedef TYPE_2__ git_rebase_options ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,int *,TYPE_2__*) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*) ;
 int VAR_4 ;

void FUNC_9(void)
{
 git_rebase *VAR_5;
 git_reference *VAR_6, *VAR_7;
 git_annotated_commit *VAR_8, *VAR_9;
 git_rebase_options VAR_10 = VAR_3;
 git_rebase_operation *VAR_11;

 VAR_10.merge_options.flags |=
  VAR_1 |
  VAR_2;

 FUNC_1(FUNC_8(&VAR_6, VAR_4, "refs/heads/asparagus"));
 FUNC_1(FUNC_8(&VAR_7, VAR_4, "refs/heads/master"));

 FUNC_1(FUNC_3(&VAR_8, VAR_4, VAR_6));
 FUNC_1(FUNC_3(&VAR_9, VAR_4, VAR_7));

 FUNC_1(FUNC_5(&VAR_5, VAR_4, VAR_8, VAR_9, ((void*)0), &VAR_10));

 FUNC_0(VAR_0, FUNC_6(&VAR_11, VAR_5));

 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 FUNC_7(VAR_6);
 FUNC_7(VAR_7);
 FUNC_4(VAR_5);
}
