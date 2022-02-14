
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int* payload; int transport; } ;
struct TYPE_7__ {TYPE_1__ callbacks; } ;
struct TYPE_8__ {TYPE_2__ fetch_opts; int remote_cb; } ;
typedef TYPE_3__ git_clone_options ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int **,int ,char*,TYPE_3__*) ;
 int FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 git_repository *VAR_4;
 git_clone_options VAR_5 = VAR_0;
 int VAR_6 = 0;

 VAR_5.remote_cb = VAR_3;
 VAR_5.fetch_opts.callbacks.transport = VAR_2;
 VAR_5.fetch_opts.callbacks.payload = &VAR_6;

 FUNC_2(FUNC_3(&VAR_4, FUNC_1("testrepo.git"), "./custom_transport.git", &VAR_5));
 FUNC_5(VAR_4);

 FUNC_2(FUNC_4("./custom_transport.git", ((void*)0), VAR_1));

 FUNC_0(VAR_6 == 1);
}
