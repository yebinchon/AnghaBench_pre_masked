
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
struct TYPE_9__ {TYPE_2__* tree; } ;
typedef TYPE_1__ git_index ;
struct TYPE_10__ {int oid; int children_count; int entry_count; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**,char const*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_2__* FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int *) ;
 int FUNC_12 (char const*) ;

void FUNC_13(void)
{
 git_index *VAR_1;
 git_tree *VAR_2;
 git_oid VAR_3;
 const char *VAR_4 = "45dd856fdd4d89b884c340ba0e047752d9b085d6";
 const char *VAR_5 = "index-tree";

 FUNC_2(FUNC_5(&VAR_1, VAR_5));
 FUNC_0(VAR_1->tree == ((void*)0));
 FUNC_2(FUNC_9(&VAR_3, VAR_4));
 FUNC_2(FUNC_11(&VAR_2, VAR_0, &VAR_3));
 FUNC_2(FUNC_6(VAR_1, VAR_2));
 FUNC_10(VAR_2);

 FUNC_0(VAR_1->tree);
 FUNC_2(FUNC_7(VAR_1));
 FUNC_4(VAR_1);

 FUNC_2(FUNC_5(&VAR_1, VAR_5));
 FUNC_0(VAR_1->tree);

 FUNC_1(FUNC_3(VAR_1), VAR_1->tree->entry_count);
 FUNC_1(0, VAR_1->tree->children_count);

 FUNC_0(FUNC_8(&VAR_3, &VAR_1->tree->oid));

 FUNC_2(FUNC_12(VAR_5));
 FUNC_4(VAR_1);
}
