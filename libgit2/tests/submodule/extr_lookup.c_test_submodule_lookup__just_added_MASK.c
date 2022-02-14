
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_reference ;
typedef int git_index ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int ,int *,int ,char*) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,char*,int ,int,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int ) ;
 int FUNC_17 (int **,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,int ,char*,char*,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,char*,int ) ;

void FUNC_22(void)
{
 git_submodule *VAR_4;
 git_buf VAR_5 = VAR_0, VAR_6 = VAR_0;
 git_reference *VAR_7 = ((void*)0);

 FUNC_21(VAR_3, "sm_just_added", VAR_2);
 FUNC_21(VAR_3, "sm_just_added_2", VAR_2);
 FUNC_21(VAR_3, "sm_just_added_idx", VAR_2);
 FUNC_21(VAR_3, "sm_just_added_head", VAR_2);
 FUNC_21(VAR_3, "mismatch_name", VAR_2);
 FUNC_21(VAR_3, "mismatch_path", VAR_2);
 FUNC_2();

 FUNC_5(FUNC_9(&VAR_5, "submod2/.gitmodules"));
 FUNC_5(FUNC_16(&VAR_7, VAR_3));

 FUNC_5(FUNC_19(&VAR_4, VAR_3,
  "https://github.com/libgit2/libgit2.git", "sm_just_added", 1));
 FUNC_20(VAR_4);
 FUNC_1(VAR_3, "sm_just_added");

 FUNC_5(FUNC_19(&VAR_4, VAR_3,
  "https://github.com/libgit2/libgit2.git", "sm_just_added_2", 1));
 FUNC_1(VAR_3, "sm_just_added_2");
 FUNC_4(FUNC_18(VAR_4));
 FUNC_20(VAR_4);

 FUNC_0("sm_just_added_head");
 FUNC_7(((void*)0), VAR_3, ((void*)0), 0, "commit new sm to head");
 FUNC_1(VAR_3, "sm_just_added_head");

 FUNC_0("sm_just_added_idx");
 FUNC_1(VAR_3, "sm_just_added_idx");

 FUNC_5(FUNC_9(&VAR_6, "submod2/.gitmodules"));

 FUNC_3(
  "submod2/.gitmodules",
  "\n[submodule \"mismatch_name\"]\n"
  "\tpath = mismatch_path\n"
  "\turl = https://example.com/example.git\n\n");

 FUNC_1(VAR_3, "mismatch_name");
 FUNC_1(VAR_3, "mismatch_path");
 FUNC_1(VAR_3, "sm_just_added");
 FUNC_1(VAR_3, "sm_just_added_2");
 FUNC_1(VAR_3, "sm_just_added_idx");
 FUNC_1(VAR_3, "sm_just_added_head");
 FUNC_2();

 FUNC_6("submod2/.gitmodules", VAR_6);
 FUNC_8(&VAR_6);

 FUNC_21(VAR_3, "mismatch_name", VAR_2);
 FUNC_21(VAR_3, "mismatch_path", VAR_2);
 FUNC_1(VAR_3, "sm_just_added");
 FUNC_1(VAR_3, "sm_just_added_2");
 FUNC_1(VAR_3, "sm_just_added_idx");
 FUNC_1(VAR_3, "sm_just_added_head");
 FUNC_2();

 FUNC_6("submod2/.gitmodules", VAR_5);
 FUNC_8(&VAR_5);

 FUNC_21(VAR_3, "mismatch_name", VAR_2);
 FUNC_21(VAR_3, "mismatch_path", VAR_2);

 FUNC_21(VAR_3, "sm_just_added", VAR_1);
 FUNC_21(VAR_3, "sm_just_added_2", VAR_1);

 FUNC_1(VAR_3, "sm_just_added_idx");
 FUNC_1(VAR_3, "sm_just_added_head");
 FUNC_2();

 {
  git_index *VAR_8;
  FUNC_5(FUNC_17(&VAR_8, VAR_3));
  FUNC_5(FUNC_11(VAR_8, "sm_just_added_idx"));
  FUNC_5(FUNC_11(VAR_8, "sm_just_added_head"));
  FUNC_5(FUNC_12(VAR_8));
  FUNC_10(VAR_8);
 }

 FUNC_21(VAR_3, "sm_just_added_idx", VAR_1);
 FUNC_1(VAR_3, "sm_just_added_head");

 {
  FUNC_5(FUNC_13(((void*)0), VAR_3, "refs/heads/master", FUNC_15(VAR_7), 1, "move head back"));
  FUNC_14(VAR_7);
 }

 FUNC_21(VAR_3, "sm_just_added_head", VAR_1);
}
