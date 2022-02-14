
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int const*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int ,int *) ;
 int VAR_3 ;

void FUNC_9(void)
{
 git_reference *VAR_4, *VAR_5;
 git_commit *VAR_6, *VAR_7;
 git_checkout_options VAR_8 = VAR_0;

 VAR_8.checkout_strategy = VAR_1;

 FUNC_0(FUNC_6(&VAR_4, VAR_3, "HEAD", 100));
 FUNC_0(FUNC_4(&VAR_6, VAR_3, FUNC_7(VAR_4)));
 FUNC_0(FUNC_8(VAR_3, (git_object *)VAR_6, VAR_2, ((void*)0)));

 FUNC_1("testrepo/branch_file.txt", "testrepo/Branch_File.txt");

 FUNC_0(FUNC_6(&VAR_5, VAR_3, "refs/heads/br2", 100));
 FUNC_0(FUNC_4(&VAR_7, VAR_3, FUNC_7(VAR_5)));

 FUNC_0(FUNC_2(VAR_3, (const git_object *)VAR_7, &VAR_8));

 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 FUNC_5(VAR_4);
 FUNC_5(VAR_5);
}
