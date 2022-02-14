
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ count; int member_0; } ;
typedef TYPE_2__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
typedef int git_reference ;
typedef int git_oid ;
struct TYPE_8__ {int* payload; void* update_tips; int transfer_progress; } ;
struct TYPE_10__ {TYPE_1__ callbacks; } ;
typedef TYPE_3__ git_fetch_options ;
typedef int git_config ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int VAR_2 ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,char*,char*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int **,int *,char*,int *,int,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (int **,int *,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int *,int ,char const*) ;
 int FUNC_17 (int *,int *,TYPE_3__*,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,int *,int ) ;
 int FUNC_20 (int **,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int **,char*,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_2__*) ;
 int VAR_3 ;
 void* VAR_4 ;

void FUNC_25(void)
{
 git_repository *VAR_5;
 git_remote *VAR_6;
 int VAR_7 = 0;
 git_strarray VAR_8 = {0};
 git_reference *VAR_9;
 git_config *VAR_10;
 git_oid VAR_11;

 git_repository *VAR_12 = FUNC_4("testrepo.git");
 const char *VAR_13 = FUNC_3(FUNC_23(VAR_12));

 git_fetch_options VAR_14 = VAR_0;
 VAR_14.callbacks.transfer_progress = VAR_3;
 VAR_14.callbacks.payload = &VAR_7;

 FUNC_2(FUNC_14(&VAR_9, VAR_12, "refs/heads/master"));
 FUNC_10(&VAR_11, FUNC_15(VAR_9));
 FUNC_12(VAR_9);
 FUNC_2(FUNC_11(&VAR_9, VAR_12, "refs/pull/42/head", &VAR_11, 1, ((void*)0)));
 FUNC_12(VAR_9);

 FUNC_5(&VAR_2, "foo");
 FUNC_2(FUNC_22(&VAR_5, "foo", 1));

 FUNC_2(FUNC_16(&VAR_6, VAR_5, VAR_1, VAR_13));

 FUNC_2(FUNC_20(&VAR_10, VAR_5));
 FUNC_2(FUNC_8(VAR_10, "remote.origin.prune", 1));
 FUNC_2(FUNC_9(VAR_10, "remote.origin.fetch", "^$", "refs/pull/*/head:refs/remotes/origin/pr/*"));

 FUNC_18(VAR_6);
 FUNC_2(FUNC_19(&VAR_6, VAR_5, VAR_1));
 FUNC_2(FUNC_17(VAR_6, ((void*)0), &VAR_14, ((void*)0)));

 FUNC_0(VAR_5, "refs/remotes/origin/master");
 FUNC_0(VAR_5, "refs/remotes/origin/pr/42");
 FUNC_2(FUNC_13(&VAR_8, VAR_5));
 FUNC_1(20, (int)VAR_8.count);
 FUNC_24(&VAR_8);

 FUNC_2(FUNC_6(VAR_10, "remote.origin.fetch", "refs"));
 FUNC_2(FUNC_9(VAR_10, "remote.origin.fetch", "^$", "refs/pull/*/head:refs/remotes/origin/pr/*"));
 FUNC_2(FUNC_9(VAR_10, "remote.origin.fetch", "^$", "refs/heads/*:refs/remotes/origin/*"));

 FUNC_18(VAR_6);
 FUNC_2(FUNC_19(&VAR_6, VAR_5, VAR_1));
 VAR_14.callbacks.update_tips = VAR_4;
 FUNC_2(FUNC_17(VAR_6, ((void*)0), &VAR_14, ((void*)0)));

 FUNC_0(VAR_5, "refs/remotes/origin/master");
 FUNC_0(VAR_5, "refs/remotes/origin/pr/42");
 FUNC_2(FUNC_13(&VAR_8, VAR_5));
 FUNC_1(20, (int)VAR_8.count);
 FUNC_24(&VAR_8);

 FUNC_2(FUNC_6(VAR_10, "remote.origin.fetch", "refs"));
 FUNC_2(FUNC_9(VAR_10, "remote.origin.fetch", "^$", "refs/heads/*:refs/remotes/origin/*"));
 FUNC_2(FUNC_9(VAR_10, "remote.origin.fetch", "^$", "refs/pull/*/head:refs/remotes/origin/pr/*"));

 FUNC_18(VAR_6);
 FUNC_2(FUNC_19(&VAR_6, VAR_5, VAR_1));
 VAR_14.callbacks.update_tips = VAR_4;
 FUNC_2(FUNC_17(VAR_6, ((void*)0), &VAR_14, ((void*)0)));

 FUNC_7(VAR_10);
 FUNC_24(&VAR_8);
 FUNC_18(VAR_6);
 FUNC_21(VAR_5);
}
