
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_repository ;
struct TYPE_3__ {int * msg; int oid_cur; int committer; int oid_old; } ;
typedef TYPE_1__ git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int const*,int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int ) ;
 TYPE_1__* FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_15(const git_signature *VAR_3, const git_oid *VAR_4)
{
 git_repository *VAR_5;
 git_reference *VAR_6;
 git_reflog *VAR_7;
 const git_reflog_entry *VAR_8;


 FUNC_4(FUNC_14(&VAR_5, "testrepo.git"));


 FUNC_4(FUNC_8(&VAR_6, VAR_5, VAR_2));


 FUNC_4(FUNC_12(&VAR_7, VAR_5, VAR_2));
 FUNC_2(3, (int)FUNC_10(VAR_7));


 VAR_8 = FUNC_9(VAR_7, 2);
 FUNC_1(FUNC_6(&VAR_8->oid_old, VAR_0) == 0);

 VAR_8 = FUNC_9(VAR_7, 1);
 FUNC_0(VAR_3, VAR_8->committer);
 FUNC_1(FUNC_5(VAR_4, &VAR_8->oid_old) == 0);
 FUNC_1(FUNC_5(VAR_4, &VAR_8->oid_cur) == 0);
 FUNC_1(VAR_8->msg == ((void*)0));

 VAR_8 = FUNC_9(VAR_7, 0);
 FUNC_0(VAR_3, VAR_8->committer);
 FUNC_1(FUNC_5(VAR_4, &VAR_8->oid_cur) == 0);
 FUNC_3(VAR_1, VAR_8->msg);

 FUNC_11(VAR_7);
 FUNC_13(VAR_5);

 FUNC_7(VAR_6);
}
