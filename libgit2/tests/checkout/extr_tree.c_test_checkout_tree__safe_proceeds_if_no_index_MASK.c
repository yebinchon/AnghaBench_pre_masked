
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;

void FUNC_12(void)
{
 git_checkout_options VAR_4 = VAR_0;
 git_oid VAR_5;
 git_object *VAR_6 = ((void*)0);

 FUNC_0(VAR_3, "master");
 FUNC_3(FUNC_11("testrepo/.git/index"));


 VAR_4.checkout_strategy = VAR_1;

 FUNC_2(FUNC_9(&VAR_5, VAR_3, "refs/heads/subtrees"));
 FUNC_2(FUNC_6(&VAR_6, VAR_3, &VAR_5, VAR_2));

 FUNC_2(FUNC_4(VAR_3, VAR_6, &VAR_4));
 FUNC_2(FUNC_10(VAR_3, "refs/heads/subtrees"));

 FUNC_1(FUNC_8("testrepo/README"));
 FUNC_1(FUNC_8("testrepo/branch_file.txt"));
 FUNC_1(FUNC_8("testrepo/new.txt"));
 FUNC_1(FUNC_8("testrepo/ab/4.txt"));
 FUNC_1(FUNC_8("testrepo/ab/c/3.txt"));
 FUNC_1(FUNC_8("testrepo/ab/de/2.txt"));
 FUNC_1(FUNC_8("testrepo/ab/de/fgh/1.txt"));

 FUNC_1(!FUNC_7("testrepo/a"));

 FUNC_0(VAR_3, "subtrees");

 FUNC_5(VAR_6);
}
