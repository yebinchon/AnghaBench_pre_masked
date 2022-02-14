
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct update_submodule_cb_payload {int checkout_progress_called; int update_tips_called; int member_0; } ;
struct TYPE_8__ {struct update_submodule_cb_payload* payload; int update_tips; } ;
struct TYPE_9__ {TYPE_2__ callbacks; } ;
struct TYPE_7__ {struct update_submodule_cb_payload* progress_payload; int progress_cb; } ;
struct TYPE_10__ {TYPE_3__ fetch_opts; TYPE_1__ checkout_opts; } ;
typedef TYPE_4__ git_submodule_update_options ;
typedef int git_submodule ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int **,int ,char*) ;
 int FUNC_9 (unsigned int*,int ,char*,int ) ;
 int FUNC_10 (int *,int ,TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int VAR_9 ;

void FUNC_13(void)
{
 git_submodule *VAR_10;
 git_submodule_update_options VAR_11 = VAR_6;
 unsigned int VAR_12 = 0;
 struct update_submodule_cb_payload VAR_13 = { 0 };

 VAR_8 = FUNC_12();

 VAR_11.checkout_opts.progress_cb = VAR_7;
 VAR_11.checkout_opts.progress_payload = &VAR_13;

 VAR_11.fetch_opts.callbacks.update_tips = VAR_9;
 VAR_11.fetch_opts.callbacks.payload = &VAR_13;


 FUNC_2(FUNC_8(&VAR_10, VAR_8, "testrepo"));


 FUNC_2(FUNC_9(&VAR_12, VAR_8, "testrepo", VAR_0));
 FUNC_1(VAR_12, VAR_2 |
  VAR_3 |
  VAR_1 |
  VAR_5);


 FUNC_2(FUNC_7(VAR_10, 0));
 FUNC_2(FUNC_10(VAR_10, 0, &VAR_11));


 FUNC_2(FUNC_9(&VAR_12, VAR_8, "testrepo", VAR_0));
 FUNC_1(VAR_12, VAR_2 |
  VAR_3 |
  VAR_1 |
  VAR_4);

 FUNC_0(FUNC_3(FUNC_5(VAR_10), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_3(FUNC_11(VAR_10), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);
 FUNC_0(FUNC_3(FUNC_6(VAR_10), "be3563ae3f795b2b4353bcce3a527ad0a4f7f644") == 0);


 FUNC_1(1, VAR_13.checkout_progress_called);
 FUNC_1(1, VAR_13.update_tips_called);

 FUNC_4(VAR_10);
}
