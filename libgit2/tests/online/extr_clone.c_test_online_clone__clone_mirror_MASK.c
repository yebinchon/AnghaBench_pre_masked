
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_6__ {int* payload; int * transfer_progress; } ;
struct TYPE_7__ {TYPE_1__ callbacks; } ;
struct TYPE_8__ {int bare; int remote_cb; TYPE_2__ fetch_opts; } ;
typedef TYPE_3__ git_clone_options ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (int **,int ,char*,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

void FUNC_10(void)
{
 git_clone_options VAR_6 = VAR_0;
 git_reference *VAR_7;

 bool VAR_8 = 0;

 VAR_6.fetch_opts.callbacks.transfer_progress = &VAR_3;
 VAR_6.fetch_opts.callbacks.payload = &VAR_8;

 VAR_6.bare = 1;
 VAR_6.remote_cb = VAR_5;

 FUNC_3(FUNC_4(&VAR_4, VAR_2, "./foo.git", &VAR_6));

 FUNC_3(FUNC_6(&VAR_7, VAR_4, "HEAD"));
 FUNC_0(VAR_1, FUNC_8(VAR_7));
 FUNC_1("refs/heads/master", FUNC_7(VAR_7));

 FUNC_0(1, VAR_8);

 FUNC_5(VAR_7);
 FUNC_9(VAR_4);
 VAR_4 = ((void*)0);

 FUNC_2("./foo.git");
}
