
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
typedef int git_annotated_commit ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_12(void)
{
 git_rebase *VAR_3;
 git_reference *VAR_4, *VAR_5;
 git_annotated_commit *VAR_6, *VAR_7;
 git_rebase_operation *VAR_8;
 git_oid VAR_9, VAR_10;
 git_rebase_options VAR_11 = VAR_0;

 VAR_11.inmemory = 1;

 FUNC_1(FUNC_11(&VAR_4, VAR_1, "refs/heads/barley"));
 FUNC_1(FUNC_11(&VAR_5, VAR_1, "refs/heads/master"));

 FUNC_1(FUNC_3(&VAR_6, VAR_1, VAR_4));
 FUNC_1(FUNC_3(&VAR_7, VAR_1, VAR_5));

 FUNC_1(FUNC_8(&VAR_3, VAR_1, VAR_6, VAR_7, ((void*)0), &VAR_11));

 FUNC_1(FUNC_9(&VAR_8, VAR_3));
 FUNC_1(FUNC_5(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_8, VAR_3));
 FUNC_1(FUNC_5(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_8, VAR_3));
 FUNC_1(FUNC_5(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_8, VAR_3));
 FUNC_1(FUNC_5(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_8, VAR_3));
 FUNC_1(FUNC_5(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_6(VAR_3, VAR_2));

 FUNC_4(&VAR_10, "71e7ee8d4fe7d8bf0d107355197e0a953dfdb7f3");
 FUNC_0(&VAR_10, &VAR_9);

 FUNC_2(VAR_6);
 FUNC_2(VAR_7);
 FUNC_10(VAR_4);
 FUNC_10(VAR_5);
 FUNC_7(VAR_3);
}
