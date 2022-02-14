
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct update_submodule_cb_payload {int checkout_notify_called; int member_0; } ;
struct TYPE_8__ {struct update_submodule_cb_payload* notify_payload; int notify_cb; int notify_flags; } ;
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
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int ,int,int) ;
 int VAR_16 ;
 int FUNC_5 (int ,int *,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int ,char*) ;
 int FUNC_17 (unsigned int*,int ,char*,int ) ;
 int FUNC_18 (int *,int,TYPE_2__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 () ;

void FUNC_21(void)
{
 git_submodule *VAR_17 = ((void*)0);
 git_checkout_options VAR_18 = VAR_1;
 git_submodule_update_options VAR_19 = VAR_11;
 unsigned int VAR_20 = 0;
 git_reference *VAR_21 = ((void*)0);
 git_object *VAR_22 = ((void*)0);
 struct update_submodule_cb_payload VAR_23 = { 0 };

 VAR_16 = FUNC_20();

 VAR_19.checkout_opts.notify_flags = VAR_0;
 VAR_19.checkout_opts.notify_cb = VAR_15;
 VAR_19.checkout_opts.notify_payload = &VAR_23;


 FUNC_3(FUNC_16(&VAR_17, VAR_16, "testrepo"));

 FUNC_3(FUNC_17(&VAR_20, VAR_16, "testrepo", VAR_4));
 FUNC_1(VAR_20, VAR_6 |
  VAR_7 |
  VAR_5 |
  VAR_10);

 FUNC_3(FUNC_18(VAR_17, 1, &VAR_19));


 FUNC_0(FUNC_7(FUNC_14(VAR_17), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_7(FUNC_19(VAR_17), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_7(FUNC_15(VAR_17), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);


 VAR_18.checkout_strategy = VAR_2;

 FUNC_3(FUNC_9(&VAR_21, VAR_16, "refs/heads/alternate_1"));
 FUNC_3(FUNC_11(&VAR_22, VAR_21, VAR_3));
 FUNC_3(FUNC_5(VAR_16, VAR_22, &VAR_18));
 FUNC_3(FUNC_12(VAR_16, FUNC_10(VAR_21)));






 FUNC_3(FUNC_17(&VAR_20, VAR_16, "testrepo", VAR_4));

 FUNC_13(VAR_17);
 FUNC_3(FUNC_16(&VAR_17, VAR_16, "testrepo"));

 FUNC_1(VAR_20, VAR_6 |
  VAR_7 |
  VAR_5 |
  VAR_8 |
  VAR_9);

 FUNC_0(FUNC_7(FUNC_14(VAR_17), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);
 FUNC_0(FUNC_7(FUNC_19(VAR_17), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_7(FUNC_15(VAR_17), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);





 FUNC_4("submodule_simple/testrepo/branch_file.txt", "a conflicting edit", 0,
  VAR_14 | VAR_12 | VAR_13, 0755);

 FUNC_2(FUNC_18(VAR_17, 0, &VAR_19));


 FUNC_1(1, VAR_23.checkout_notify_called);


 FUNC_0(FUNC_7(FUNC_14(VAR_17), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);
 FUNC_0(FUNC_7(FUNC_19(VAR_17), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_7(FUNC_15(VAR_17), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);

 FUNC_13(VAR_17);
 FUNC_6(VAR_22);
 FUNC_8(VAR_21);
}
