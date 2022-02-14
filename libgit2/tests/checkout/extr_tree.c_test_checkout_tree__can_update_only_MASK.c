
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_5__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int ,char*) ;

void FUNC_11(void)
{
 git_checkout_options VAR_6 = VAR_1;
 git_oid VAR_7;
 git_object *VAR_8 = ((void*)0);



 FUNC_0(VAR_5, "master");

 VAR_6.checkout_strategy = VAR_0;
 FUNC_3(FUNC_4(VAR_5, &VAR_6));

 FUNC_2(!FUNC_8("testrepo/a"));

 FUNC_1("testrepo/branch_file.txt", "hi\nbye!\n");



 VAR_6.checkout_strategy = VAR_2 | VAR_3;

 FUNC_3(FUNC_9(&VAR_7, VAR_5, "refs/heads/dir"));
 FUNC_3(FUNC_7(&VAR_8, VAR_5, &VAR_7, VAR_4));

 FUNC_3(FUNC_5(VAR_5, VAR_8, &VAR_6));
 FUNC_3(FUNC_10(VAR_5, "refs/heads/dir"));

 FUNC_0(VAR_5, "dir");





 FUNC_2(!FUNC_8("testrepo/a"));


 FUNC_1("testrepo/branch_file.txt", "hi\n");

 FUNC_6(VAR_8);
}
