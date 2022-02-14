
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int *,char*,int *,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (int **,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_19 (int *,char*,char*,int,int ) ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int **,int ,int *) ;
 int VAR_4 ;
 int FUNC_23 (int ) ;
 int VAR_5 ;

void FUNC_24(void)
{
 git_index *VAR_6;
 git_oid VAR_7, VAR_8;
 git_tree *VAR_9;
 git_commit *VAR_10;
 git_object *VAR_11;
 git_reference *VAR_12;
 git_checkout_options VAR_13 = VAR_1;
 VAR_13.checkout_strategy = VAR_0;

 VAR_4 = FUNC_1("rebase-submodule");
 FUNC_0(FUNC_19(&VAR_5,
  "Rebaser", "rebaser@rebaser.rb", 1405694510, 0));

 FUNC_23(FUNC_17(VAR_4));

 FUNC_0(FUNC_20(VAR_4, "my-submodule", FUNC_16(VAR_4)));


 FUNC_0(FUNC_15(&VAR_6, VAR_4));
 FUNC_0(FUNC_5(VAR_6, ".gitmodules"));
 FUNC_0(FUNC_7(VAR_6));

 FUNC_0(FUNC_8(&VAR_7, VAR_6));
 FUNC_0(FUNC_22(&VAR_9, VAR_4, &VAR_7));

 FUNC_0(FUNC_14(&VAR_12, VAR_4));
 FUNC_0(FUNC_4(&VAR_10, VAR_4, FUNC_13(VAR_12)));

 FUNC_0(FUNC_2(&VAR_8, VAR_4, FUNC_12(VAR_12), VAR_5, VAR_5, ((void*)0), "Fixup .gitmodules", VAR_9, 1, VAR_10));


 FUNC_0(FUNC_10(&VAR_11, VAR_4, &VAR_8, VAR_2));
 FUNC_0(FUNC_18(VAR_4, VAR_11, VAR_3, &VAR_13));

 FUNC_6(VAR_6);
 FUNC_9(VAR_11);
 FUNC_3(VAR_10);
 FUNC_11(VAR_12);
 FUNC_21(VAR_9);
}
