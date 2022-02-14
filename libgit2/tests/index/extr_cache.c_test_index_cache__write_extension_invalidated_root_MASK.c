
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
struct TYPE_14__ {char* path; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_15__ {TYPE_4__* tree; } ;
typedef TYPE_2__ git_index ;
struct TYPE_17__ {int id; } ;
struct TYPE_16__ {int oid; int children_count; int entry_count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_8__* FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__**,char const*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_4__* FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,int *) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int FUNC_15 (char const*) ;

void FUNC_16(void)
{
 git_index *VAR_2;
 git_tree *VAR_3;
 git_oid VAR_4;
 const char *VAR_5 = "45dd856fdd4d89b884c340ba0e047752d9b085d6";
 const char *VAR_6 = "index-tree-invalidated";
 git_index_entry VAR_7;

 FUNC_2(FUNC_6(&VAR_2, VAR_6));
 FUNC_0(VAR_2->tree == ((void*)0));
 FUNC_2(FUNC_11(&VAR_4, VAR_5));
 FUNC_2(FUNC_13(&VAR_3, VAR_1, &VAR_4));
 FUNC_2(FUNC_7(VAR_2, VAR_3));
 FUNC_12(VAR_3);

 FUNC_0(VAR_2->tree);

 FUNC_14(&VAR_7, 0x0, sizeof(git_index_entry));
 FUNC_10(&VAR_7.id, &FUNC_5(VAR_2, 0)->id);
 VAR_7.mode = VAR_0;
 VAR_7.path = "some-new-file.txt";

 FUNC_2(FUNC_3(VAR_2, &VAR_7));

 FUNC_1(-1, VAR_2->tree->entry_count);

 FUNC_2(FUNC_8(VAR_2));
 FUNC_4(VAR_2);

 FUNC_2(FUNC_6(&VAR_2, VAR_6));
 FUNC_0(VAR_2->tree);

 FUNC_1(-1, VAR_2->tree->entry_count);
 FUNC_1(0, VAR_2->tree->children_count);

 FUNC_0(FUNC_9(&VAR_4, &VAR_2->tree->oid));

 FUNC_2(FUNC_15(VAR_6));
 FUNC_4(VAR_2);
}
