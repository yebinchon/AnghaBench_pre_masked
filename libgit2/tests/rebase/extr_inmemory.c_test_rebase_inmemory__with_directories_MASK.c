
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_4__ {int inmemory; } ;
typedef TYPE_1__ git_rebase_options ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_15(void)
{
 git_rebase *VAR_4;
 git_reference *VAR_5, *VAR_6;
 git_annotated_commit *VAR_7, *VAR_8;
 git_rebase_operation *VAR_9;
 git_oid VAR_10, VAR_11;
 git_commit *VAR_12;
 git_rebase_options VAR_13 = VAR_1;

 VAR_13.inmemory = 1;

 FUNC_8(&VAR_11, "a4d6d9c3d57308fd8e320cf2525bae8f1adafa57");

 FUNC_2(FUNC_14(&VAR_5, VAR_2, "refs/heads/deep_gravy"));
 FUNC_2(FUNC_14(&VAR_6, VAR_2, "refs/heads/veal"));

 FUNC_2(FUNC_4(&VAR_7, VAR_2, VAR_5));
 FUNC_2(FUNC_4(&VAR_8, VAR_2, VAR_6));

 FUNC_2(FUNC_11(&VAR_4, VAR_2, VAR_7, VAR_8, ((void*)0), &VAR_13));

 FUNC_2(FUNC_12(&VAR_9, VAR_4));
 FUNC_2(FUNC_9(&VAR_10, VAR_4, ((void*)0), VAR_3,
  ((void*)0), ((void*)0)));

 FUNC_2(FUNC_12(&VAR_9, VAR_4));
 FUNC_2(FUNC_9(&VAR_10, VAR_4, ((void*)0), VAR_3,
  ((void*)0), ((void*)0)));

 FUNC_1(VAR_0, FUNC_12(&VAR_9, VAR_4));

 FUNC_2(FUNC_6(&VAR_12, VAR_2, &VAR_10));
 FUNC_0(&VAR_11, FUNC_7(VAR_12));

 FUNC_5(VAR_12);
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
 FUNC_13(VAR_5);
 FUNC_13(VAR_6);
 FUNC_10(VAR_4);
}
