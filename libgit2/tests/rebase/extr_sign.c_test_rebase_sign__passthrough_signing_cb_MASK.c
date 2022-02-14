
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_4__ {int signing_cb; } ;
typedef TYPE_1__ git_rebase_options ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_16(void)
{
 git_rebase *VAR_5;
 git_reference *VAR_6, *VAR_7;
 git_annotated_commit *VAR_8, *VAR_9;
 git_rebase_operation *VAR_10;
 git_oid VAR_11, VAR_12;
 git_rebase_options VAR_13 = VAR_1;
 git_commit *VAR_14;
 const char *VAR_15 = "tree cd99b26250099fc38d30bfaed7797a7275ed3366\nparent f87d14a4a236582a0278a916340a793714256864\nauthor Edward Thomson <ethomson@edwardthomson.com> 1405625055 -0400\ncommitter Rebaser <rebaser@rebaser.rb> 1405694510 +0000\n";




 VAR_13.signing_cb = VAR_4;

 FUNC_3(FUNC_15(&VAR_6, VAR_2, "refs/heads/gravy"));
 FUNC_3(FUNC_15(&VAR_7, VAR_2, "refs/heads/veal"));

 FUNC_3(FUNC_5(&VAR_8, VAR_2, VAR_6));
 FUNC_3(FUNC_5(&VAR_9, VAR_2, VAR_7));

 FUNC_3(FUNC_12(&VAR_5, VAR_2, VAR_8, VAR_9, ((void*)0), &VAR_13));

 FUNC_3(FUNC_13(&VAR_10, VAR_5));
 FUNC_3(FUNC_10(&VAR_11, VAR_5, ((void*)0), VAR_3, ((void*)0), ((void*)0)));

 FUNC_9(&VAR_12, "129183968a65abd6c52da35bff43325001bfc630");
 FUNC_0(&VAR_12, &VAR_11);

 FUNC_3(FUNC_7(&VAR_14, VAR_2, &VAR_11));
 FUNC_1(VAR_15, FUNC_8(VAR_14));

 FUNC_2(VAR_0, FUNC_13(&VAR_10, VAR_5));

 FUNC_14(VAR_6);
 FUNC_14(VAR_7);
 FUNC_4(VAR_8);
 FUNC_4(VAR_9);
 FUNC_6(VAR_14);
 FUNC_11(VAR_5);
}
