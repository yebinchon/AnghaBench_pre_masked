
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_7__ {int perfdata_cb; int progress_cb; int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int git_annotated_commit ;
struct TYPE_8__ {scalar_t__ perf; scalar_t__ progress; scalar_t__ force; } ;
typedef TYPE_2__ checkout_options ;
struct TYPE_9__ {char* message; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ) ;
 TYPE_4__* FUNC_6 () ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(git_repository *VAR_6, git_annotated_commit *VAR_7, checkout_options *VAR_8)
{
 git_checkout_options VAR_9 = VAR_1;
 git_commit *VAR_10 = ((void*)0);
 int VAR_11;


 VAR_9.checkout_strategy = VAR_2;
 if (VAR_8->force)
  VAR_9.checkout_strategy = VAR_0;

 if (VAR_8->progress)
  VAR_9.progress_cb = VAR_3;

 if (VAR_8->perf)
  VAR_9.perfdata_cb = VAR_4;


 VAR_11 = FUNC_5(&VAR_10, VAR_6, FUNC_1(VAR_7));
 if (VAR_11 != 0) {
  FUNC_0(VAR_5, "failed to lookup commit: %s\n", FUNC_6()->message);
  goto cleanup;
 }
 VAR_11 = FUNC_3(VAR_6, (const git_object *)VAR_10, &VAR_9);
 if (VAR_11 != 0) {
  FUNC_0(VAR_5, "failed to checkout tree: %s\n", FUNC_6()->message);
  goto cleanup;
 }







 if (FUNC_2(VAR_7)) {
  VAR_11 = FUNC_7(VAR_6, FUNC_2(VAR_7));
 } else {
  VAR_11 = FUNC_8(VAR_6, VAR_7);
 }
 if (VAR_11 != 0) {
  FUNC_0(VAR_5, "failed to update HEAD reference: %s\n", FUNC_6()->message);
  goto cleanup;
 }

cleanup:
 FUNC_4(VAR_10);

 return VAR_11;
}
