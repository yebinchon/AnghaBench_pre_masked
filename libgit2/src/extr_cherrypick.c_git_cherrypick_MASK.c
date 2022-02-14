
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_indexwriter ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_8__ {int checkout_strategy; } ;
struct TYPE_7__ {TYPE_3__ checkout_opts; int merge_opts; int mainline; } ;
typedef TYPE_1__ git_cherrypick_options ;
typedef int git_buf ;
typedef int commit_oidstr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__ const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char*,char const*) ;
 int FUNC_7 (int *,int *,TYPE_3__*) ;
 int FUNC_8 (int **,int *,int *,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (char*,int,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,int *,int ) ;
 int FUNC_22 (int *,char*) ;
 int FUNC_23 (int **,int *) ;
 int FUNC_24 (int *,char*) ;
 int FUNC_25 (int *,char const*) ;

int FUNC_26(
 git_repository *VAR_5,
 git_commit *VAR_6,
 const git_cherrypick_options *VAR_7)
{
 git_cherrypick_options VAR_8;
 git_reference *VAR_9 = ((void*)0);
 git_commit *VAR_10 = ((void*)0);
 char VAR_11[VAR_4 + 1];
 const char *VAR_12, *VAR_13;
 git_buf VAR_14 = VAR_0;
 git_index *VAR_15 = ((void*)0);
 git_indexwriter VAR_16 = VAR_2;
 int VAR_17 = 0;

 FUNC_1(VAR_5 && VAR_6);

 FUNC_0(VAR_7, VAR_1, "git_cherrypick_options");

 if ((VAR_17 = FUNC_22(VAR_5, "cherry-pick")) < 0)
  return VAR_17;

 if ((VAR_12 = FUNC_11(VAR_6)) == ((void*)0) ||
  (VAR_13 = FUNC_12(VAR_6)) == ((void*)0)) {
  VAR_17 = -1;
  goto on_error;
 }

 FUNC_19(VAR_11, sizeof(VAR_11), FUNC_10(VAR_6));

 if ((VAR_17 = FUNC_25(VAR_5, VAR_12)) < 0 ||
  (VAR_17 = FUNC_6(&VAR_14, "%.7s... %s", VAR_11, VAR_13)) < 0 ||
  (VAR_17 = FUNC_2(VAR_5, &VAR_8, VAR_7, FUNC_4(&VAR_14))) < 0 ||
  (VAR_17 = FUNC_16(&VAR_16, VAR_5, &VAR_8.checkout_opts.checkout_strategy)) < 0 ||
  (VAR_17 = FUNC_24(VAR_5, VAR_11)) < 0 ||
  (VAR_17 = FUNC_23(&VAR_9, VAR_5)) < 0 ||
  (VAR_17 = FUNC_21((git_object **)&VAR_10, VAR_9, VAR_3)) < 0 ||
  (VAR_17 = FUNC_8(&VAR_15, VAR_5, VAR_6, VAR_10, VAR_8.mainline, &VAR_8.merge_opts)) < 0 ||
  (VAR_17 = FUNC_18(VAR_5, VAR_15)) < 0 ||
  (VAR_17 = FUNC_17(VAR_5, VAR_15)) < 0 ||
  (VAR_17 = FUNC_7(VAR_5, VAR_15, &VAR_8.checkout_opts)) < 0 ||
  (VAR_17 = FUNC_15(&VAR_16)) < 0)
  goto on_error;

 goto done;

on_error:
 FUNC_3(VAR_5);

done:
 FUNC_14(&VAR_16);
 FUNC_13(VAR_15);
 FUNC_9(VAR_10);
 FUNC_20(VAR_9);
 FUNC_5(&VAR_14);

 return VAR_17;
}
