
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_repository ;
typedef int git_remote ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_5__ {int* payload; int transfer_progress; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ git_fetch_options ;
typedef int git_config ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,char*) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,char*,int ,int,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *,char*) ;
 int FUNC_14 (int **,int *,int ,char const*) ;
 int FUNC_15 (int *,int *,TYPE_2__*,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,char*,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int **,int *,char*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int **,int ,int ,int,int) ;
 int FUNC_26 (int *,int *,char*,int *,int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_27(void)
{
 git_repository *VAR_8;
 git_remote *VAR_9;
 int VAR_10 = 0;
 git_reference *VAR_11;
 git_config *VAR_12;
 git_oid VAR_13;
 git_signature *VAR_14;
 git_object *VAR_15;

 git_repository *VAR_16 = FUNC_5("testrepo.git");
 const char *VAR_17 = FUNC_4(FUNC_22(VAR_16));
 git_fetch_options VAR_18 = VAR_1;

 VAR_18.callbacks.transfer_progress = VAR_7;
 VAR_18.callbacks.payload = &VAR_10;

 FUNC_6(&VAR_3, "foo");
 FUNC_3(FUNC_21(&VAR_8, "foo", 1));

 FUNC_3(FUNC_14(&VAR_9, VAR_8, VAR_2, VAR_17));
 FUNC_3(FUNC_15(VAR_9, ((void*)0), &VAR_18, ((void*)0)));
 FUNC_16(VAR_9);

 FUNC_3(FUNC_23(&VAR_15, VAR_8, "origin/master"));

 FUNC_3(FUNC_11(&VAR_11, VAR_8, "refs/remotes/origin/fake-remote", FUNC_10(VAR_15), 1, ((void*)0)));
 FUNC_12(VAR_11);


 FUNC_3(FUNC_25(&VAR_14, VAR_6, VAR_4, 123456789, 60));

 FUNC_3(
  FUNC_26(&VAR_13, VAR_8,
    "some-tag", VAR_15, VAR_14, VAR_5, 0)
 );
 FUNC_24(VAR_14);

 FUNC_3(FUNC_19(&VAR_12, VAR_8));
 FUNC_3(FUNC_8(VAR_12, "remote.origin.prune", 1));
 FUNC_7(VAR_12);
 FUNC_3(FUNC_17(&VAR_9, VAR_8, VAR_2));
 FUNC_1(1, FUNC_18(VAR_9));
 FUNC_3(FUNC_15(VAR_9, ((void*)0), &VAR_18, ((void*)0)));

 FUNC_0(VAR_8, "refs/tags/some-tag");
 FUNC_2(VAR_0, FUNC_13(&VAR_11, VAR_8, "refs/remotes/origin/fake-remote"));

 FUNC_9(VAR_15);
 FUNC_16(VAR_9);

 FUNC_20(VAR_8);
}
