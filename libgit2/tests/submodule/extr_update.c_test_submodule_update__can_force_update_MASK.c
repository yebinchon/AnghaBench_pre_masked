
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int checkout_strategy; } ;
struct TYPE_9__ {TYPE_1__ checkout_opts; } ;
typedef TYPE_2__ git_submodule_update_options ;
typedef int git_submodule ;
typedef int git_reference ;
typedef int git_object ;
struct TYPE_10__ {int checkout_strategy; } ;
typedef TYPE_3__ git_checkout_options ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ,int,int) ;
 int VAR_15 ;
 int FUNC_4 (int ,int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 int FUNC_16 (unsigned int*,int ,char*,int ) ;
 int FUNC_17 (int *,int,TYPE_2__*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;

void FUNC_20(void)
{
 git_submodule *VAR_16 = ((void*)0);
 git_checkout_options VAR_17 = VAR_1;
 git_submodule_update_options VAR_18 = VAR_11;
 unsigned int VAR_19 = 0;
 git_reference *VAR_20 = ((void*)0);
 git_object *VAR_21 = ((void*)0);

 VAR_15 = FUNC_19();


 FUNC_2(FUNC_15(&VAR_16, VAR_15, "testrepo"));

 FUNC_2(FUNC_16(&VAR_19, VAR_15, "testrepo", VAR_4));
 FUNC_1(VAR_19, VAR_6 |
  VAR_7 |
  VAR_5 |
  VAR_10);

 FUNC_2(FUNC_17(VAR_16, 1, &VAR_18));


 FUNC_0(FUNC_6(FUNC_13(VAR_16), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_6(FUNC_18(VAR_16), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_6(FUNC_14(VAR_16), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);


 VAR_17.checkout_strategy = VAR_2;

 FUNC_2(FUNC_8(&VAR_20, VAR_15, "refs/heads/alternate_1"));
 FUNC_2(FUNC_10(&VAR_21, VAR_20, VAR_3));
 FUNC_2(FUNC_4(VAR_15, VAR_21, &VAR_17));
 FUNC_2(FUNC_11(VAR_15, FUNC_9(VAR_20)));





 FUNC_2(FUNC_16(&VAR_19, VAR_15, "testrepo", VAR_4));

 FUNC_12(VAR_16);
 FUNC_2(FUNC_15(&VAR_16, VAR_15, "testrepo"));

 FUNC_1(VAR_19, VAR_6 |
  VAR_7 |
  VAR_5 |
  VAR_8 |
  VAR_9);

 FUNC_0(FUNC_6(FUNC_13(VAR_16), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);
 FUNC_0(FUNC_6(FUNC_18(VAR_16), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_6(FUNC_14(VAR_16), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);





 FUNC_3("submodule_simple/testrepo/branch_file.txt", "a conflicting edit", 0,
  VAR_14 | VAR_12 | VAR_13, 0777);


 VAR_18.checkout_opts.checkout_strategy = VAR_0;
 FUNC_2(FUNC_17(VAR_16, 0, &VAR_18));
 FUNC_0(FUNC_6(FUNC_13(VAR_16), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);
 FUNC_0(FUNC_6(FUNC_18(VAR_16), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);
 FUNC_0(FUNC_6(FUNC_14(VAR_16), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);

 FUNC_12(VAR_16);
 FUNC_5(VAR_21);
 FUNC_7(VAR_20);
}
