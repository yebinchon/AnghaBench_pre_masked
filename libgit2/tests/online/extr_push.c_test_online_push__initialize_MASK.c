
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ length; scalar_t__ contents; } ;
typedef TYPE_1__ git_vector ;
struct TYPE_14__ {char** member_0; scalar_t__ member_1; } ;
typedef TYPE_2__ git_strarray ;
typedef int git_remote_head ;
typedef int git_remote_callbacks ;
struct TYPE_15__ {int callbacks; } ;
typedef TYPE_3__ git_push_options ;
struct TYPE_16__ {int callbacks; } ;
typedef TYPE_4__ git_fetch_options ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int const**,size_t) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,int *,int *,int *) ;
 int FUNC_9 (int **,int ,char*,void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,TYPE_4__*,int *) ;
 int FUNC_12 (int const***,size_t*,int *) ;
 int FUNC_13 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *,int *,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;

void FUNC_20(void)
{
 git_vector VAR_26 = VAR_3;
 const git_remote_head **VAR_27;
 size_t VAR_28;
 git_push_options VAR_29 = VAR_2;
 git_fetch_options VAR_30 = VAR_1;

 VAR_20 = FUNC_3("push_src");

 FUNC_2(FUNC_14(VAR_20, "Random J. Hacker", "foo@example.com"));
 FUNC_0("testrepo.git");
 FUNC_4("push_src/submodule/.gitted", "push_src/submodule/.git");

 FUNC_19(FUNC_15(VAR_20));
 FUNC_7(&VAR_9, "951bbbb90e2259a4c8950db78946784fb53fcbce");
 FUNC_7(&VAR_8, "fa38b91f199934685819bea316186d8b008c52a2");
 FUNC_7(&VAR_7, "27b7ce66243eb1403862d05f958c002312df173d");
 FUNC_7(&VAR_6, "d9b63a88223d8367516f50bd131a5f7349b7f3e4");
 FUNC_7(&VAR_5, "a78705c3b2725f931d3ee05348d83cc26700f247");
 FUNC_7(&VAR_4, "a78705c3b2725f931d3ee05348d83cc26700f247");

 FUNC_7(&VAR_22, "805c54522e614f29f70d2413a0470247d8b424ac");
 FUNC_7(&VAR_25, "ff83aa4c5e5d28e3bcba2f5c6e2adc61286a4e5e");
 FUNC_7(&VAR_21, "b483ae7ba66decee9aee971f501221dea84b1498");
 FUNC_7(&VAR_23, "951bbbb90e2259a4c8950db78946784fb53fcbce");
 FUNC_7(&VAR_24, "eea4f2705eeec2db3813f2430829afce99cd00b5");



 VAR_18 = FUNC_1("GITTEST_REMOTE_URL");
 VAR_19 = FUNC_1("GITTEST_REMOTE_USER");
 VAR_14 = FUNC_1("GITTEST_REMOTE_PASS");
 VAR_15 = FUNC_1("GITTEST_REMOTE_SSH_KEY");
 VAR_17 = FUNC_1("GITTEST_REMOTE_SSH_PUBKEY");
 VAR_16 = FUNC_1("GITTEST_REMOTE_SSH_PASSPHRASE");
 VAR_13 = FUNC_1("GITTEST_REMOTE_DEFAULT");
 VAR_12 = ((void*)0);


 if (!VAR_18)
  FUNC_5();

 FUNC_2(FUNC_9(&VAR_12, VAR_20, "test", VAR_18));

 FUNC_18(&VAR_11);

 FUNC_2(FUNC_8(VAR_12, VAR_0, &VAR_10, ((void*)0), ((void*)0)));







 FUNC_2(FUNC_12(&VAR_27, &VAR_28, VAR_12));
 FUNC_2(FUNC_6(&VAR_26, VAR_27, VAR_28));
 if (VAR_26.length) {
  git_strarray VAR_31 = {
   (char **) VAR_26.contents,
   VAR_26.length,
  };

  FUNC_17(&VAR_29.callbacks, &VAR_10, sizeof(git_remote_callbacks));
  FUNC_2(FUNC_13(VAR_12, &VAR_31, &VAR_29));
 }

 FUNC_10(VAR_12);
 FUNC_16(&VAR_26);


 FUNC_17(&VAR_30.callbacks, &VAR_10, sizeof(git_remote_callbacks));
 FUNC_2(FUNC_11(VAR_12, ((void*)0), &VAR_30, ((void*)0)));
}
