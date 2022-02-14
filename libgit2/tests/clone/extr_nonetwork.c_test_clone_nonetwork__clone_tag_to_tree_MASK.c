
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_odb ;
struct TYPE_6__ {char const* path; int id; int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
struct TYPE_7__ {int local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,char*,TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,char const*,int ,int ) ;
 int FUNC_11 (int **,int *,char const*,int *,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,char const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **,int *,char const*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,int ,int ) ;
 int FUNC_22 (TYPE_1__*,int ,int) ;
 int FUNC_23 (char const*) ;

void FUNC_24(void)
{
 git_repository *VAR_5;
 git_index_entry VAR_6;
 git_index *VAR_7;
 git_odb *VAR_8;
 git_oid VAR_9;
 git_tree *VAR_10;
 git_reference *VAR_11;
 git_tree_entry *VAR_12;
 const char *VAR_13 = "some/deep/path.txt";
 const char *VAR_14 = "some content\n";
 const char *VAR_15 = "refs/tags/tree-tag";

 VAR_5 = FUNC_3("testrepo.git");
 FUNC_1(FUNC_16(&VAR_8, VAR_5));
 FUNC_1(FUNC_7(&VAR_7));

 FUNC_22(&VAR_6, 0, sizeof(git_index_entry));
 VAR_6.path = VAR_13;
 VAR_6.mode = VAR_1;
 FUNC_1(FUNC_10(&VAR_6.id, VAR_8, VAR_14, FUNC_23(VAR_14), VAR_2));

 FUNC_1(FUNC_5(VAR_7, &VAR_6));
 FUNC_1(FUNC_8(&VAR_9, VAR_7, VAR_5));
 FUNC_1(FUNC_11(&VAR_11, VAR_5, VAR_15, &VAR_9, 0, ((void*)0)));
 FUNC_12(VAR_11);
 FUNC_9(VAR_8);
 FUNC_6(VAR_7);

 VAR_3.local = VAR_0;
 FUNC_1(FUNC_4(&VAR_4, FUNC_2(FUNC_17(VAR_5)), "./foo", &VAR_3));
 FUNC_15(VAR_5);

 FUNC_1(FUNC_13(&VAR_11, VAR_4, VAR_15));
 FUNC_1(FUNC_21(&VAR_10, VAR_4, FUNC_14(VAR_11)));
 FUNC_12(VAR_11);

 FUNC_1(FUNC_18(&VAR_12, VAR_10, VAR_13));
 FUNC_19(VAR_12);
 FUNC_20(VAR_10);

 FUNC_0("testrepo.git");
}
