
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


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int **,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int *,int) ;

void FUNC_15(bool VAR_5)
{
 git_rebase *VAR_6;
 git_rebase_options VAR_7 = VAR_2;
 git_reference *VAR_8, *VAR_9;
 git_annotated_commit *VAR_10, *VAR_11;
 git_rebase_operation *VAR_12;
 git_oid VAR_13, VAR_14;
 int VAR_15;

 VAR_7.inmemory = VAR_5;

 FUNC_3(FUNC_13(&VAR_8, VAR_3, "refs/heads/beef"));
 FUNC_3(FUNC_13(&VAR_9, VAR_3, "refs/heads/master"));

 FUNC_3(FUNC_5(&VAR_10, VAR_3, VAR_8));
 FUNC_3(FUNC_5(&VAR_11, VAR_3, VAR_9));

 FUNC_3(FUNC_9(&VAR_6, VAR_3, VAR_10, VAR_11, ((void*)0), &VAR_7));
 FUNC_14(VAR_6, VAR_1);

 if (!VAR_5) {
  FUNC_8(VAR_6);
  FUNC_3(FUNC_11(&VAR_6, VAR_3, ((void*)0)));
 }

 FUNC_3(FUNC_10(&VAR_12, VAR_6));
 FUNC_3(FUNC_7(&VAR_13, VAR_6, ((void*)0), VAR_4,
  ((void*)0), ((void*)0)));
 FUNC_14(VAR_6, 0);

 FUNC_6(&VAR_14, "776e4c48922799f903f03f5f6e51da8b01e4cce0");
 FUNC_1(&VAR_14, &VAR_13);

 FUNC_3(FUNC_10(&VAR_12, VAR_6));
 FUNC_3(FUNC_7(&VAR_13, VAR_6, ((void*)0), VAR_4,
  ((void*)0), ((void*)0)));
 FUNC_14(VAR_6, 1);

 FUNC_6(&VAR_14, "ba1f9b4fd5cf8151f7818be2111cc0869f1eb95a");
 FUNC_1(&VAR_14, &VAR_13);

 FUNC_3(FUNC_10(&VAR_12, VAR_6));
 FUNC_3(FUNC_7(&VAR_13, VAR_6, ((void*)0), VAR_4,
  ((void*)0), ((void*)0)));
 FUNC_14(VAR_6, 2);

 FUNC_6(&VAR_14, "948b12fe18b84f756223a61bece4c307787cd5d4");
 FUNC_1(&VAR_14, &VAR_13);

 if (!VAR_5) {
  FUNC_8(VAR_6);
  FUNC_3(FUNC_11(&VAR_6, VAR_3, ((void*)0)));
 }

 FUNC_3(FUNC_10(&VAR_12, VAR_6));
 FUNC_3(FUNC_7(&VAR_13, VAR_6, ((void*)0), VAR_4,
  ((void*)0), ((void*)0)));
 FUNC_14(VAR_6, 3);

 FUNC_6(&VAR_14, "d9d5d59d72c9968687f9462578d79878cd80e781");
 FUNC_1(&VAR_14, &VAR_13);

 FUNC_3(FUNC_10(&VAR_12, VAR_6));
 FUNC_3(FUNC_7(&VAR_13, VAR_6, ((void*)0), VAR_4,
  ((void*)0), ((void*)0)));
 FUNC_14(VAR_6, 4);

 FUNC_6(&VAR_14, "9cf383c0a125d89e742c5dec58ed277dd07588b3");
 FUNC_1(&VAR_14, &VAR_13);

 FUNC_2(VAR_15 = FUNC_10(&VAR_12, VAR_6));
 FUNC_0(VAR_0, VAR_15);
 FUNC_14(VAR_6, 4);

 FUNC_4(VAR_10);
 FUNC_4(VAR_11);
 FUNC_12(VAR_8);
 FUNC_12(VAR_9);
 FUNC_8(VAR_6);
}
