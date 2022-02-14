
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_4__ {int oid_cur; int oid_old; } ;
typedef TYPE_1__ git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_oid ;
struct TYPE_5__ {int repo; int worktree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_2 (int const*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int *,int ) ;
 TYPE_1__* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char*,char*) ;

void FUNC_13(void)
{
 git_reflog *VAR_3, *VAR_4;
 const git_reflog_entry *VAR_5;
 git_reference *VAR_6;
 git_signature *VAR_7;
 const git_oid *VAR_8;

 FUNC_1(FUNC_10(&VAR_6, VAR_2.worktree));
 FUNC_0((VAR_8 = FUNC_4(VAR_6)) != ((void*)0));
 FUNC_1(FUNC_12(&VAR_7, "foo", "foo@bar"));

 FUNC_1(FUNC_8(&VAR_3, VAR_2.worktree, VAR_0));
 FUNC_1(FUNC_5(VAR_3, VAR_8, VAR_7, VAR_1));
 FUNC_9(VAR_3);

 FUNC_1(FUNC_8(&VAR_4, VAR_2.repo, VAR_0));
 VAR_5 = FUNC_6(VAR_4, 0);
 FUNC_0(FUNC_2(VAR_8, &VAR_5->oid_old) == 0);
 FUNC_0(FUNC_2(VAR_8, &VAR_5->oid_cur) == 0);

 FUNC_3(VAR_6);
 FUNC_11(VAR_7);
 FUNC_7(VAR_3);
 FUNC_7(VAR_4);
}
