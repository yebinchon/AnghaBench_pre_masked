
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
struct TYPE_5__ {scalar_t__ mkdir_calls; scalar_t__ stat_calls; int member_0; } ;
typedef TYPE_1__ git_checkout_perfdata ;
struct TYPE_6__ {int checkout_strategy; TYPE_1__* perfdata_payload; int perfdata_cb; } ;
typedef TYPE_2__ git_checkout_options ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 int VAR_4 ;

void FUNC_7(void)
{
 git_checkout_options VAR_5 = VAR_1;
 git_oid VAR_6;
 git_object *VAR_7 = ((void*)0);
 git_checkout_perfdata VAR_8 = {0};

 VAR_5.perfdata_cb = VAR_4;
 VAR_5.perfdata_payload = &VAR_8;

 FUNC_0(VAR_3, "master");
 VAR_5.checkout_strategy = VAR_0;

 FUNC_2(FUNC_6(&VAR_6, VAR_3, "refs/heads/dir"));
 FUNC_2(FUNC_5(&VAR_7, VAR_3, &VAR_6, VAR_2));

 FUNC_2(FUNC_3(VAR_3, VAR_7, &VAR_5));

 FUNC_1(VAR_8.mkdir_calls > 0);
 FUNC_1(VAR_8.stat_calls > 0);

 FUNC_4(VAR_7);
}
