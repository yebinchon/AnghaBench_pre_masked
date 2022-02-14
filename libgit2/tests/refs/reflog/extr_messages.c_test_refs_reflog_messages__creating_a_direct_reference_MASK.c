
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msg; int oid_cur; int oid_old; } ;
typedef TYPE_1__ git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int **,int ,char const*,int *,int ,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*) ;
 TYPE_1__* FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,char const*) ;

void FUNC_13(void)
{
 git_reference *VAR_2;
 git_oid VAR_3;
 git_reflog *VAR_4;
 const git_reflog_entry *VAR_5;

 const char *VAR_6 = "refs/heads/new-head";
 const char *VAR_7 = "You've been logged, mate!";

 FUNC_4(FUNC_8(&VAR_3, VAR_1, "HEAD"));

 FUNC_4(FUNC_6(&VAR_2, VAR_1, VAR_6, &VAR_3, 0, VAR_7));

 FUNC_4(FUNC_12(&VAR_4, VAR_1, VAR_6));
 FUNC_3(1, FUNC_10(VAR_4));

 VAR_5 = FUNC_9(VAR_4, 0);
 FUNC_0(FUNC_5(&VAR_5->oid_old, VAR_0) == 0);
 FUNC_1(&VAR_3, &VAR_5->oid_cur);
 FUNC_2(VAR_7, VAR_5->msg);

 FUNC_11(VAR_4);
 FUNC_7(VAR_2);
}
