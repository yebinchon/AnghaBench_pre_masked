
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_7__ {int checkout_options; } ;
typedef TYPE_1__ git_rebase_options ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
struct TYPE_8__ {int* progress_payload; int progress_cb; } ;
typedef TYPE_2__ git_checkout_options ;
typedef int git_annotated_commit ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int FUNC_10 (int *,TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_11(void)
{
 git_rebase *VAR_4;
 git_reference *VAR_5, *VAR_6;
 git_annotated_commit *VAR_7, *VAR_8;
 git_rebase_options VAR_9 = VAR_1;
 git_checkout_options VAR_10 = VAR_0;
 git_rebase_operation *VAR_11;
 int VAR_12 = 0;

 VAR_10.progress_cb = VAR_2;
 VAR_10.progress_payload = &VAR_12;

 FUNC_10(&VAR_9.checkout_options, &VAR_10,
  sizeof(git_checkout_options));

 FUNC_1(FUNC_9(&VAR_5, VAR_3, "refs/heads/beef"));
 FUNC_1(FUNC_9(&VAR_6, VAR_3, "refs/heads/master"));

 FUNC_1(FUNC_3(&VAR_7, VAR_3, VAR_5));
 FUNC_1(FUNC_3(&VAR_8, VAR_3, VAR_6));

 VAR_12 = 0;
 FUNC_1(FUNC_6(&VAR_4, VAR_3, VAR_7, VAR_8, ((void*)0), &VAR_9));
 FUNC_0(1, VAR_12);

 VAR_12 = 0;
 FUNC_1(FUNC_7(&VAR_11, VAR_4));
 FUNC_0(1, VAR_12);

 VAR_12 = 0;
 FUNC_1(FUNC_4(VAR_4));
 FUNC_0(1, VAR_12);

 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 FUNC_8(VAR_5);
 FUNC_8(VAR_6);
 FUNC_5(VAR_4);
}
