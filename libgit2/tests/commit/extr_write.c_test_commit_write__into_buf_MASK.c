
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_signature ;
typedef int git_oid ;
typedef int git_commit ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int *,int *,int ,int *,int,int const**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_11(void)
{
 git_oid VAR_7;
 git_signature *VAR_8, *VAR_9;
 git_tree *VAR_10;
 git_commit *VAR_11;
 git_oid VAR_12;
 git_buf VAR_13 = VAR_0;

 FUNC_6(&VAR_7, VAR_6);
 FUNC_1(FUNC_10(&VAR_10, VAR_3, &VAR_7));


 FUNC_1(FUNC_8(&VAR_9, VAR_2, VAR_1, 123456789, 60));
 FUNC_1(FUNC_8(&VAR_8, VAR_2, VAR_1, 987654321, 90));

 FUNC_6(&VAR_12, VAR_4);
 FUNC_1(FUNC_5(&VAR_11, VAR_3, &VAR_12));

 FUNC_1(FUNC_3(&VAR_13, VAR_3, VAR_8, VAR_9,
          ((void*)0), VAR_5, VAR_10, 1, (const git_commit **) &VAR_11));

 FUNC_0(VAR_13.ptr,
     "tree 1810dff58d8a660512d4832e740f692884338ccd\nparent 8496071c1b46c854b31185ea97743be6a8774479\nauthor Vicent Marti <vicent@github.com> 987654321 +0130\ncommitter Vicent Marti <vicent@github.com> 123456789 +0100\n\nThis is a root commit\n   This is a root commit and should be the only one in this branch\n");
 FUNC_2(&VAR_13);
 FUNC_9(VAR_10);
 FUNC_4(VAR_11);
 FUNC_7(VAR_8);
 FUNC_7(VAR_9);
}
