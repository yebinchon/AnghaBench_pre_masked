
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ie ;
typedef char git_tree_entry ;
typedef int git_tree ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int path; int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int *,int ,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int *,TYPE_1__*,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ) ;
 char* FUNC_14 (int *,int ) ;
 int FUNC_15 (int **,int ,char const*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*,int ,int) ;

void FUNC_18(void)
{
 const git_tree_entry *VAR_4;
 git_index_entry VAR_5;
 git_commit *VAR_6;
 git_object *VAR_7;
 git_index *VAR_8;
 git_tree *VAR_9;
 git_oid VAR_10;
 char *VAR_11;

 if (!FUNC_2("GITTEST_INVASIVE_FS_SIZE"))
  FUNC_4();

 FUNC_0(VAR_11 = FUNC_5(1, VAR_1));

 FUNC_17(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.mode = VAR_2;
 VAR_5.path = VAR_0;

 FUNC_1(FUNC_13(&VAR_8, VAR_3));
 FUNC_1(FUNC_10(VAR_8, &VAR_5, VAR_11, VAR_1));
 FUNC_3(&VAR_10, VAR_3, ((void*)0), 0, VAR_0);

 FUNC_1(FUNC_8(&VAR_6, VAR_3, &VAR_10));
 FUNC_1(FUNC_9(&VAR_9, VAR_6));
 FUNC_0(VAR_4 = FUNC_14(VAR_9, VAR_0));
 FUNC_1(FUNC_15(&VAR_7, VAR_3, VAR_4));

 FUNC_12(VAR_7);
 FUNC_16(VAR_9);
 FUNC_11(VAR_8);
 FUNC_7(VAR_6);
 FUNC_6(VAR_11);
}
