
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int checkout_strategy; } ;
struct TYPE_7__ {TYPE_5__ checkout_opts; int merge_opts; int mainline; } ;
typedef TYPE_1__ git_revert_options ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_indexwriter ;
typedef int git_index ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*,char const*) ;
 int FUNC_5 (int *,int *,TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int *,int ) ;
 int FUNC_18 (int *,char*) ;
 int FUNC_19 (int **,int *) ;
 int FUNC_20 (int **,int *,int *,int *,int ,int *) ;
 int FUNC_21 (int *,TYPE_1__*,TYPE_1__ const*,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,char*,char const*) ;
 int FUNC_24 (int *,char*) ;

int FUNC_25(
 git_repository *VAR_5,
 git_commit *VAR_6,
 const git_revert_options *VAR_7)
{
 git_revert_options VAR_8;
 git_reference *VAR_9 = ((void*)0);
 git_commit *VAR_10 = ((void*)0);
 char VAR_11[VAR_3 + 1];
 const char *VAR_12;
 git_buf VAR_13 = VAR_0;
 git_index *VAR_14 = ((void*)0);
 git_indexwriter VAR_15 = VAR_1;
 int VAR_16;

 FUNC_1(VAR_5 && VAR_6);

 FUNC_0(VAR_7, VAR_4, "git_revert_options");

 if ((VAR_16 = FUNC_18(VAR_5, "revert")) < 0)
  return VAR_16;

 FUNC_15(VAR_11, FUNC_7(VAR_6));
 VAR_11[VAR_3] = '\0';

 if ((VAR_12 = FUNC_8(VAR_6)) == ((void*)0)) {
  VAR_16 = -1;
  goto on_error;
 }

 if ((VAR_16 = FUNC_4(&VAR_13, "parent of %.7s... %s", VAR_11, VAR_12)) < 0 ||
  (VAR_16 = FUNC_21(VAR_5, &VAR_8, VAR_7, FUNC_2(&VAR_13))) < 0 ||
  (VAR_16 = FUNC_12(&VAR_15, VAR_5, &VAR_8.checkout_opts.checkout_strategy)) < 0 ||
  (VAR_16 = FUNC_24(VAR_5, VAR_11)) < 0 ||
  (VAR_16 = FUNC_23(VAR_5, VAR_11, VAR_12)) < 0 ||
  (VAR_16 = FUNC_19(&VAR_9, VAR_5)) < 0 ||
  (VAR_16 = FUNC_17((git_object **)&VAR_10, VAR_9, VAR_2)) < 0 ||
  (VAR_16 = FUNC_20(&VAR_14, VAR_5, VAR_6, VAR_10, VAR_8.mainline, &VAR_8.merge_opts)) < 0 ||
  (VAR_16 = FUNC_14(VAR_5, VAR_14)) < 0 ||
  (VAR_16 = FUNC_13(VAR_5, VAR_14)) < 0 ||
  (VAR_16 = FUNC_5(VAR_5, VAR_14, &VAR_8.checkout_opts)) < 0 ||
  (VAR_16 = FUNC_11(&VAR_15)) < 0)
  goto on_error;

 goto done;

on_error:
 FUNC_22(VAR_5);

done:
 FUNC_10(&VAR_15);
 FUNC_9(VAR_14);
 FUNC_6(VAR_10);
 FUNC_16(VAR_9);
 FUNC_3(&VAR_13);

 return VAR_16;
}
