
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int ,char*) ;

void FUNC_10(void)
{
 git_checkout_options VAR_5 = VAR_1;
 git_oid VAR_6;
 git_object *VAR_7 = ((void*)0);

 FUNC_0(VAR_4, "master");




 VAR_5.checkout_strategy = VAR_0;

 FUNC_2(FUNC_8(&VAR_6, VAR_4, "refs/heads/dir"));
 FUNC_2(FUNC_5(&VAR_7, VAR_4, &VAR_6, VAR_3));

 FUNC_2(FUNC_3(VAR_4, VAR_7, &VAR_5));
 FUNC_2(FUNC_9(VAR_4, "refs/heads/dir"));

 FUNC_1(FUNC_7("testrepo/README"));
 FUNC_1(FUNC_7("testrepo/branch_file.txt"));
 FUNC_1(FUNC_7("testrepo/new.txt"));
 FUNC_1(FUNC_7("testrepo/a/b.txt"));

 FUNC_1(!FUNC_6("testrepo/ab"));

 FUNC_0(VAR_4, "dir");

 FUNC_4(VAR_7);


 VAR_5.checkout_strategy = VAR_2;

 FUNC_2(FUNC_8(&VAR_6, VAR_4, "refs/heads/subtrees"));
 FUNC_2(FUNC_5(&VAR_7, VAR_4, &VAR_6, VAR_3));

 FUNC_2(FUNC_3(VAR_4, VAR_7, &VAR_5));
 FUNC_2(FUNC_9(VAR_4, "refs/heads/subtrees"));

 FUNC_1(FUNC_7("testrepo/README"));
 FUNC_1(FUNC_7("testrepo/branch_file.txt"));
 FUNC_1(FUNC_7("testrepo/new.txt"));
 FUNC_1(FUNC_7("testrepo/ab/4.txt"));
 FUNC_1(FUNC_7("testrepo/ab/c/3.txt"));
 FUNC_1(FUNC_7("testrepo/ab/de/2.txt"));
 FUNC_1(FUNC_7("testrepo/ab/de/fgh/1.txt"));

 FUNC_1(!FUNC_6("testrepo/a"));

 FUNC_0(VAR_4, "subtrees");

 FUNC_4(VAR_7);
}
