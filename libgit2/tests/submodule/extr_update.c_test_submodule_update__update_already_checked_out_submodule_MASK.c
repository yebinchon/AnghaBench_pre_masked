
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct update_submodule_cb_payload {int checkout_progress_called; int member_0; } ;
struct TYPE_8__ {struct update_submodule_cb_payload* progress_payload; int progress_cb; } ;
struct TYPE_9__ {TYPE_1__ checkout_opts; } ;
typedef TYPE_2__ git_submodule_update_options ;
typedef int git_submodule ;
typedef int git_reference ;
typedef int git_object ;
struct TYPE_10__ {int checkout_strategy; } ;
typedef TYPE_3__ git_checkout_options ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,char*) ;
 int FUNC_15 (unsigned int*,int ,char*,int ) ;
 int FUNC_16 (int *,int,TYPE_2__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;

void FUNC_19(void)
{
 git_submodule *VAR_13 = ((void*)0);
 git_checkout_options VAR_14 = VAR_0;
 git_submodule_update_options VAR_15 = VAR_10;
 unsigned int VAR_16 = 0;
 git_reference *VAR_17 = ((void*)0);
 git_object *VAR_18 = ((void*)0);
 struct update_submodule_cb_payload VAR_19 = { 0 };

 VAR_12 = FUNC_18();

 VAR_15.checkout_opts.progress_cb = VAR_11;
 VAR_15.checkout_opts.progress_payload = &VAR_19;


 FUNC_2(FUNC_14(&VAR_13, VAR_12, "testrepo"));

 FUNC_2(FUNC_15(&VAR_16, VAR_12, "testrepo", VAR_3));
 FUNC_1(VAR_16, VAR_5 |
  VAR_6 |
  VAR_4 |
  VAR_9);

 FUNC_2(FUNC_16(VAR_13, 1, &VAR_15));


 FUNC_0(FUNC_5(FUNC_12(VAR_13), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_5(FUNC_17(VAR_13), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_5(FUNC_13(VAR_13), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);


 VAR_14.checkout_strategy = VAR_1;

 FUNC_2(FUNC_7(&VAR_17, VAR_12, "refs/heads/alternate_1"));
 FUNC_2(FUNC_9(&VAR_18, VAR_17, VAR_2));
 FUNC_2(FUNC_3(VAR_12, VAR_18, &VAR_14));
 FUNC_2(FUNC_10(VAR_12, FUNC_8(VAR_17)));






 FUNC_2(FUNC_15(&VAR_16, VAR_12, "testrepo", VAR_3));

 FUNC_11(VAR_13);
 FUNC_2(FUNC_14(&VAR_13, VAR_12, "testrepo"));

 FUNC_1(VAR_16, VAR_5 |
  VAR_6 |
  VAR_4 |
  VAR_7 |
  VAR_8);

 FUNC_0(FUNC_5(FUNC_12(VAR_13), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);
 FUNC_0(FUNC_5(FUNC_17(VAR_13), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_5(FUNC_13(VAR_13), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);






 FUNC_2(FUNC_16(VAR_13, 0, &VAR_15));
 FUNC_0(FUNC_5(FUNC_12(VAR_13), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);
 FUNC_0(FUNC_5(FUNC_17(VAR_13), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);
 FUNC_0(FUNC_5(FUNC_13(VAR_13), "a65fedf39aefe402d3bb6e24df4d4f5fe4547750") == 0);


 FUNC_1(1, VAR_19.checkout_progress_called);

 FUNC_11(VAR_13);
 FUNC_4(VAR_18);
 FUNC_6(VAR_17);
}
