
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int entry_count; int children_count; } ;
typedef TYPE_1__ git_tree_cache ;
typedef int git_tree ;
typedef int git_oid ;
struct TYPE_16__ {char* path; int id; int mode; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_17__ {TYPE_1__ const* tree; } ;
typedef TYPE_3__ git_index ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (TYPE_3__**,int ) ;
 TYPE_1__* FUNC_10 (TYPE_1__ const*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *) ;
 int FUNC_13 (TYPE_2__*,int,int) ;

void FUNC_14(void)
{
 git_index *VAR_2;
 git_index_entry VAR_3;
 git_tree *VAR_4;
 const git_tree_cache *VAR_5;
 git_oid VAR_6;

 FUNC_2(FUNC_9(&VAR_2, VAR_1));
 FUNC_2(FUNC_4(VAR_2));
 FUNC_0(VAR_2->tree == ((void*)0));



 FUNC_13(&VAR_3, 0x0, sizeof(git_index_entry));
 VAR_3.path = "top-level";
 VAR_3.mode = VAR_0;
 FUNC_8(&VAR_3.id, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf");
 FUNC_2(FUNC_3(VAR_2, &VAR_3));


 VAR_3.path = "subdir/some-file";
 FUNC_2(FUNC_3(VAR_2, &VAR_3));

 VAR_3.path = "subdir/even-deeper/some-file";
 FUNC_2(FUNC_3(VAR_2, &VAR_3));

 VAR_3.path = "subdir2/some-file";
 FUNC_2(FUNC_3(VAR_2, &VAR_3));

 FUNC_2(FUNC_7(&VAR_6, VAR_2));
 FUNC_2(FUNC_4(VAR_2));
 FUNC_0(VAR_2->tree == ((void*)0));

 FUNC_2(FUNC_12(&VAR_4, VAR_1, &VAR_6));
 FUNC_2(FUNC_6(VAR_2, VAR_4));
 FUNC_11(VAR_4);

 FUNC_0(VAR_2->tree);
 FUNC_1(2, VAR_2->tree->children_count);


 VAR_3.path = "subdir/some-file";
 FUNC_8(&VAR_3.id, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf");
 FUNC_2(FUNC_3(VAR_2, &VAR_3));

 FUNC_1(-1, VAR_2->tree->entry_count);

 VAR_5 = FUNC_10(VAR_2->tree, "subdir");
 FUNC_0(VAR_5);
 FUNC_1(-1, VAR_5->entry_count);

 VAR_5 = FUNC_10(VAR_2->tree, "subdir/even-deeper");
 FUNC_0(VAR_5);
 FUNC_1(1, VAR_5->entry_count);

 VAR_5 = FUNC_10(VAR_2->tree, "subdir2");
 FUNC_0(VAR_5);
 FUNC_1(1, VAR_5->entry_count);

 FUNC_5(VAR_2);
}
