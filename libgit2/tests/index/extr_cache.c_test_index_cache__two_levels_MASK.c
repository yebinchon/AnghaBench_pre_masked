
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int entry_count; int children_count; } ;
typedef TYPE_1__ git_tree_cache ;
typedef int git_tree ;
typedef int git_oid ;
struct TYPE_18__ {char* path; int id; int mode; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_19__ {TYPE_1__ const* tree; } ;
typedef TYPE_3__ git_index ;
typedef int entry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (TYPE_3__**,int ) ;
 TYPE_1__ const* FUNC_12 (TYPE_1__ const*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,int *) ;
 int FUNC_15 (TYPE_2__*,int,int) ;

void FUNC_16(void)
{
 git_tree *VAR_2;
 git_oid VAR_3;
 git_index *VAR_4;
 git_index_entry VAR_5;
 const git_tree_cache *VAR_6;

 FUNC_2(FUNC_11(&VAR_4, VAR_1));
 FUNC_2(FUNC_4(VAR_4));

 FUNC_15(&VAR_5, 0x0, sizeof(VAR_5));
 VAR_5.mode = VAR_0;
 FUNC_2(FUNC_10(&VAR_5.id, "a8233120f6ad708f843d861ce2b7228ec4e3dec6"));
 VAR_5.path = "top-level.txt";
 FUNC_2(FUNC_3(VAR_4, &VAR_5));

 VAR_5.path = "subdir/file.txt";
 FUNC_2(FUNC_3(VAR_4, &VAR_5));


 FUNC_2(FUNC_9(&VAR_3, VAR_4));
 FUNC_2(FUNC_14(&VAR_2, VAR_1, &VAR_3));
 FUNC_2(FUNC_7(VAR_4, VAR_2));
 FUNC_13(VAR_2);
 FUNC_2(FUNC_8(VAR_4));


 FUNC_0(VAR_4->tree);
 FUNC_0(FUNC_12(VAR_4->tree, "subdir"));

 FUNC_2(FUNC_6(VAR_4, 1));

 FUNC_0(VAR_4->tree);
 FUNC_0(FUNC_12(VAR_4->tree, "subdir"));

 VAR_5.path = "top-level.txt";
 FUNC_2(FUNC_10(&VAR_5.id, "3697d64be941a53d4ae8f6a271e4e3fa56b022cc"));
 FUNC_2(FUNC_3(VAR_4, &VAR_5));


 FUNC_2(FUNC_8(VAR_4));
 FUNC_2(FUNC_6(VAR_4, 1));


 FUNC_0(VAR_4->tree);
 FUNC_1(-1, VAR_4->tree->entry_count);
 FUNC_1(1, VAR_4->tree->children_count);
 VAR_6 = FUNC_12(VAR_4->tree, "subdir");
 FUNC_0(VAR_6);
 FUNC_1(1, VAR_6->entry_count);

 FUNC_5(VAR_4);
}
