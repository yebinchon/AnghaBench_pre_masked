
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_annotated_commit ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_10(void)
{
 git_rebase *VAR_2;
 git_reference *VAR_3, *VAR_4;
 git_annotated_commit *VAR_5, *VAR_6;
 git_rebase_operation *VAR_7;
 git_oid VAR_8;

 FUNC_1(FUNC_9(&VAR_3, VAR_0, "refs/heads/beef"));
 FUNC_1(FUNC_9(&VAR_4, VAR_0, "refs/heads/master"));

 FUNC_1(FUNC_3(&VAR_5, VAR_0, VAR_3));
 FUNC_1(FUNC_3(&VAR_6, VAR_0, VAR_4));

 FUNC_1(FUNC_6(&VAR_2, VAR_0, VAR_5, VAR_6, ((void*)0), ((void*)0)));

 FUNC_1(FUNC_7(&VAR_7, VAR_2));
 FUNC_1(FUNC_4(&VAR_8, VAR_2, ((void*)0), VAR_1,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_7(&VAR_7, VAR_2));
 FUNC_1(FUNC_4(&VAR_8, VAR_2, ((void*)0), VAR_1,
  ((void*)0), ((void*)0)));

 FUNC_0(
  "da9c51a23d02d931a486f45ad18cda05cf5d2b94 776e4c48922799f903f03f5f6e51da8b01e4cce0\n"
  "8d1f13f93c4995760ac07d129246ac1ff64c0be9 ba1f9b4fd5cf8151f7818be2111cc0869f1eb95a\n",
  164, "rebase/.git/rebase-merge/rewritten");

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 FUNC_8(VAR_3);
 FUNC_8(VAR_4);
 FUNC_5(VAR_2);
}
